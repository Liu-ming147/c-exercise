#include<stdio.h>

char* my_strncat(char* str1, const char* str2, const size_t num)
{
	char* src = str1;
	while (*str1)
	{
		str1++;
	}
	for (size_t i = 0; i < num; i++)
	{
		*(str1 + i) = *(str2 + i);
	}
	return src;
}

int main()
{
	char p1[10] = "abcdef";
	char p2[3] = "xyz";
	printf("%s\n", my_strncat(p1, p2, 2));

	return 0;
}