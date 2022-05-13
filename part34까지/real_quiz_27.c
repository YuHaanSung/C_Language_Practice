#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int name;
	for (scanf("%d", &name); name <= 122; name++)
	{
		printf("%c", name);
	}
}