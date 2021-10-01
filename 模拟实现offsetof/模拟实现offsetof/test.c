#include <stdio.h>

#define offsetof(StructType, MemberName) (size_t)&(((StructType *)0)->MemberName)

struct S
{
	char c1;
	int a;
	char c2;
};

int main()
{
	printf("%d\n", offsetof(struct S, c1));//0
	printf("%d\n", offsetof(struct S, a));//4
	printf("%d\n", offsetof(struct S, c2));//8

	return 0;
}