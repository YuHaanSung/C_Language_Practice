#include <stdio.h>

int main()
{
	unsigned char num1 = 256;
	unsigned short num2 = 65536;
	long long int num3 = 9223372036854775808;

	printf("%u %u %lld", num1, num2, num3);
	return 0;
}