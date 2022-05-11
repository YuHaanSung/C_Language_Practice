#include <stdio.h>
#include <float.h> //실수 자료형의 양수 최소값, 최대값이 정의된 헤더파일

int main()
{
	float num1 = FLT_MIN;
	float num2 = FLT_MAX;
	double num3 = DBL_MIN;
	double num4 = DBL_MAX;
	long double num5 = LDBL_MIN;
	long double num6 = LDBL_MAX;

	printf("%.40f %.2f\n", num1, num2); //소숫점 뒤에 숫자를 지정하면 그 숫자만큼 소숫점 이하 자릿수를 출력합니다.
}

//실수의 언더플로우는 0이되고, 실수의 오버플로우는 무한이된다.