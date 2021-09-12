#include<stdio.h>
void main()
{
	int murder[4] = { 0 };
	int i = 0;
	for (i = 0; i < 4; ++i)
	{
		murder[i] = 1;
		if ((murder[0] != 1) +
			(murder[2] == 1) +
			(murder[3] == 1) +
			(murder[3] != 1) == 3)
		{
			break;
		}
		murder[i] = 0;
	}
	putchar('A' + i\n);

}