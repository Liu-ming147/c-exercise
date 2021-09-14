#include<stdio.h>
#include<assert.h>

char *my_strcpy(char * destination, const char * source)
{
	assert(destination != NULL && source != NULL);
	char *dest = destination;
	char *sour = source;
	while (*sour != '\0')
	{
		*dest++ = *sour++;
	}
	return dest;
}

int main()
{
	char s1[] = "ABCDEF";
	char s2[] = "abcdef";
	my_strcpy(s1, s2);
	printf("%s\n", s1);

	return 0;
}