#include <stdio.h>

int main()
{
	float num1 = 3.e5f;
	//지수 표기법으로 300000을 표시
	double num2 = -1.3827e-2;
	long double num3 = 5.21e+9l;
	printf("%f, %f, %Lf\n", num1, num2, num3);
	printf("%e, %e, %Le\n", num1, num2, num3);
	return 0;
}
/* 지수표기법일때는 정수부분은 한자릿수만 적고 소수자릿수 뒤에 e와 지수를 표시합니다.*/