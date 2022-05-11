
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a,b,c,d,e,f;

	scanf("%d", &a);
	b = a % 10;
	a = a / 10;
	c = a % 10;
	a = a / 10;
	d = a % 10;
	a = a / 10;
	e = a % 10;
	a = a / 10;
	f = a;
	printf("%d %d %d %d %d", b,c,d,e,f);

}