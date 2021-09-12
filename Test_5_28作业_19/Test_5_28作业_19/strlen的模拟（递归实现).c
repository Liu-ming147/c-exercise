#include<stdio.h>
int my_strlen(char *str)
{
	if ('\0' == *str)
		return 0;
	else
		return 1 + my_strlen(1 + str);
}

void main()
{
	char str[100];
	gets(str);
	printf("%d\n", my_strlen(&str));
}