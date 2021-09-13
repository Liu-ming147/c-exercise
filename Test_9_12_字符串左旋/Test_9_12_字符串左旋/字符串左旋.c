#include<stdio.h>

void Left_rotate(char *s, int n, int k)
{
	k = k % n;
	for (k; k > 0; k--)
	{
		char tmp = s[0];
		for (int i = 0; i < n - 1; i++)
		{
			s[i] = s[i + 1];
		}
		s[n - 1] = tmp;
	}
}

int main()
{
	char s[100];
	int k;
	scanf("%s", s);
	int n = strlen(s);
	scanf("%d", &k);

	Left_rotate(s, n, k);
	printf("%s\n", s);
	return 0;
}