#include<stdio.h>
void Reverse(char* str)
{
	char* left = str;
	char* right = str + strlen(str) - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		++left;
		--right;
	}
}


int main()
{
	char str[] = "alkjgao";
	printf("ÄæÐòÇ°£º%s\n", str);
	Reverse(str);
	printf("ÄæÐòºó£º%s\n", str);
	return 0;
}