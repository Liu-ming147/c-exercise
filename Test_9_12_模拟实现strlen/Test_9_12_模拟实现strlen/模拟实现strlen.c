#include<stdio.h>

size_t my_strlen(const char *str)
{
	int length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return length;
}


int main()
{
	char ar[] = "ABCDEF";
	printf("%d\n", my_strlen(ar));

	return 0;
}