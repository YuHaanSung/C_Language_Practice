#include <stdio.h>

int main()
{
	unsigned char num1 = 200;
	unsigned short num2 = 60000;
	unsigned int num3 = 433211321;
	unsigned long num4 = 223424323;
	unsigned long long int num5 = 23424324242324;

	printf("%u %u %u %lu %llu", num1, num2, num3, num4, num5);
	return 0;
}

//부호없는 자료형 unsigned는 %u로 출력해야합니다.
