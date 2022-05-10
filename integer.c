#include <stdio.h>

int main()
{
	char num1 = -10; // 1바이트 부호있는 정수형으로 변수를 선언하고 값 할당
	short num2 = 30000; // 2바이트 부호있는 정수형으로 변수를 선언하고 값 할당
	int num3 = -12345566; // 4바이트 부호있는~
	long num4 = 1232344; // 4바이트 부호있는~
	long long num5 = 1234324; // 8바이트 부호있는~

	// char, short, int는 %d로 출력하고, long은 %ld, long long은 %lld로 출력한다.
	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
	return 0;
}
