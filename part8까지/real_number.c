#include <stdio.h>

int main()
{
	float num1 = 0.1f;
	// 단정밀도 부동소수점 변수를 선언하고 값을 할당
	// float은 숫자 뒤에f를 붙힘.
	double num2 = 0.2;
	// 배정밀도 부동소수점 변수를 선언하고 값을 할당
	// double은 숫자 뒤에 아무것도 붙히지 않음.
	long double num3 = 9.327513l;
	//같음
	// long double은 숫자 뒤에 l을 붙힘
	printf("%f %f %Lf", num1, num2, num3);
	// float과 double은 %f 서식지정자로 출력, long double은 %Lf 서식지정자로 출력
	return 0;
}