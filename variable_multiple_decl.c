#include <stdio.h>

int main()
{
	int num1, num2, num3; // 변수를 콤마로 구분하여 변수 여러개를 선언
	num1 = 10;
	num2 = 20;
	num3 = 30;
	printf("%d %d %d\n", num1, num2, num3); // 10 20 30 : 변수에 저장된 값을 % d로 출력

		return 0;
}

/*단 자료형이 같을때만 가능하다, 자료형이 다르면 따로선언해야한다.*/