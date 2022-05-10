
#include <limits.h>
#include <stdio.h>

int main()
{
	char num1 = CHAR_MIN;
	short num2 = SHRT_MIN;
	int num3 = INT_MIN;
	long num4 = LONG_MIN;
	long long num5 = LLONG_MIN;
	//앞에 unsigned일때는 U를 붙여야한다.
	printf("%d %d %d %ld %lld", num1, num2, num3, num4, num5);

	
}
// 최소값과 최댓값을 직접 입력하려하면 컴파일 에러가 발생한다. 즉 이를 표현하려면 limits.h 헤더파일이 필요하다.