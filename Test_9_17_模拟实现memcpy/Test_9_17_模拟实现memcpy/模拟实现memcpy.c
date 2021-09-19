#include<stdio.h>
#include<assert.h>

void *my_memcpy(void *dest, const void *src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char *pdest = (char *)dest;
	const char *psrc = (const char *)src;
	while (count-- > 0)
	{
		*pdest++ = *psrc++;
	}
	return dest;
}

int main()
{
	char ar[] = "abcdefg";
	char br[] = "xyz";
	my_memcpy(ar, br, 3);
	printf("%s\n", ar);

	return 0;
}