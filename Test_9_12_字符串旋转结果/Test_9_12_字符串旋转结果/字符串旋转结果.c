#include<stdio.h>

int Spin(char *src, char *find)
{
	char tmp[256] = { 0 };
	strcpy(tmp, src);
	strcat(tmp, src);
	return strstr(tmp, find) != NULL;
}

int main()
{
	char s1[100], s2[100];
	printf("Please enter the s1:");
	gets(s1);
	printf("Please enter the s2:");
	gets(s2);

	if (Spin(s1, s2))
	{
		printf("s1 is the same as s2\n");
	}
	else
		printf("s1 is not the same as s2\n");

	return 0;
}