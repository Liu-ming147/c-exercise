#include<stdio.h>

char * my_strncpy(char * dst, const char * src, size_t n)
{
	int i;
	for (i = 0; src[i] && i < n; i++)
	{
		dst[i] = src[i];
	}

	if (i < n)
	{
		dst[i] = 0;
	}
	return dst;
}

int main()
{
	char p1[10] = "abcdef";
	char p2[10] = "xyz";
	printf("%s\n", my_strncpy(p1, p2, 2));

	return 0;
}