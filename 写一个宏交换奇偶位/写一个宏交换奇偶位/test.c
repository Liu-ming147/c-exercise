#include <stdio.h>

#define SwapIntBit(n) (((n) & 0x55555555) << 1 | ((n) & 0xaaaaaaaa) >> 1)

int main()
{
	int a = 4;//0100
	printf("%d\n", SwapIntBit(a));//1000

	return 0;
}