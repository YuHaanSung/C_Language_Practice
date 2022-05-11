#define _CRT_SECURE_NO_WARNINGS //scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
	int num1;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num1);
	printf("%d\n", num1);

	int num2; float num3;
	scanf("%d, %d, %f", &num1, &num2, &num3);
	printf("%d, %d, %f\n", num1, num2, num3);

	double num4;
	scanf("%f", &num4);
	long double num5;
	scanf("%Lf", &num5);

	char c1 = getchar();
	printf("%c\n", c1);
	putchar(c1);

}