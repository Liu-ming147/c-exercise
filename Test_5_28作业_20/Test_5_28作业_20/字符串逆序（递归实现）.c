#include<stdio.h>
void reverse_string(char * string)
{
	int len = strlen(string);
	char tmp = *string;
	*string = *(string + len - 1);

	*(string + len - 1) = '\0';
	if (strlen(string + 1) >= 2)
		reverse_string(string + 1);

	*(string + len - 1) = tmp;
}

void main()
{
	char arr[10];
	gets(arr);
	reverse_string(&arr);
	printf("%s\n", arr);
}