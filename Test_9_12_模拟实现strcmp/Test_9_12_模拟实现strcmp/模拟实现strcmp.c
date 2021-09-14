#include<stdio.h>
#include<assert.h>

int my_strcmp(const char * str1, const char * str2)
{
	assert(str1 != NULL && str2 != NULL);
	int ret = 0;
	while (!(ret = *(unsigned char *)str1 - *(unsigned char *)str2) && *str2)
	{
		str1++;
		str2++;
	}
	if (ret < 0)
		ret = -1;
	else if (ret > 0)
		ret = 1;
	return ret;
}

int main()
{
	char s1[] = "abcd";
	char s2[] = "bdac";
	if (my_strcmp(s1, s2) > 0)
		printf("s1 > s2\n");
	else if (my_strcmp(s1, s2) < 0)
		printf("s1 < s2\n");
	else
		printf("s1 = s2\n");

	return 0;
}