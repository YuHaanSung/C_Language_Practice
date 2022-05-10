#include <stdio.h>

int main()
{
	int num1; //정수형 변수 선언
	int num2;
	int num3;

	num1 = 10; // 변수에 값 할당
	num2 = 20;
	num3 = 30;

	printf("%d %d %d\n", num1, num2, num3); // 10 20 30 : 변수에 저장된 값을 %d로 출력

	return 0;
}

/*변수에 값을 할당할때는 num1 = 10; =는 값을 할당할때 사용합니다.
%d는 10진수(decimal)를 출력할때 사용하는 서식 지정자입니다.
즉 서식 지정자 하나에 변수값 하나가 대응됩니다.*/