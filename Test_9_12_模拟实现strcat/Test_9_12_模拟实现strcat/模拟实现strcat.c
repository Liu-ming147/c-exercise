#include<stdio.h>
#include<assert.h>

char * my_strcat(char * destination, const char * source)
{
	assert(destination != NULL && source != NULL);
	char *dest = destination;
	const char *sour = source;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*sour != '\0')
	{
		*dest++ = *sour++;
	}
	*dest = '\0';
	return destination;
}

int main()
{
	char s1[10] = "abc";
	char s2[] = "def";
	printf("%s\n", my_strcat(s1, s2));

	return 0;
}