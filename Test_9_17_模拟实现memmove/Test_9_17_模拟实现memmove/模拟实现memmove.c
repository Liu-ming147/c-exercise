#include<stdio.h>
#include<assert.h>

void *my_memmove(void *dest, const void *src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char *pdest = (char *)dest;
	const char *psrc = (const char *)src;
	if (pdest <= psrc || pdest >= (psrc + count))
	{
		while (count-- > 0)
		{
			*pdest++ = *psrc++;
		}
	}
	else
	{
		pdest = pdest + count - 1;
		psrc = psrc + count - 1;
		while (count-- > 0)
		{
			*pdest-- = *psrc--;
		}
	}
	return dest;
}


int main()
{
	char ar[] = "abcdefgh";
	my_memmove(ar + 2, ar, 4);
	printf("%s\n", ar);

	return 0;
}