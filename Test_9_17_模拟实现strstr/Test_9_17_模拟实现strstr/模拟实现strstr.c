#include<stdio.h>
#include<assert.h>

char *my_strstr(const char *string, const char *strCharSet)
{
	assert(string != NULL && strCharSet != NULL);
	const char *pstr = string;
	char *s1, *s2;

	if (!*strCharSet)
		return string;
	while (*pstr)
	{
		s1 = pstr;
		s2 = (const char *)strCharSet;

		while (*s1 && *s2 && !(*s1 - *s2))
			s1++, s2++;

		if (!*s2)
			return(pstr);

		pstr++;
	}
	return NULL;
}

int main()
{
	char ar[] = "helloabc";
	char br[] = "llo";
	printf("%s\n", my_strstr(ar, br));

	return 0;
}