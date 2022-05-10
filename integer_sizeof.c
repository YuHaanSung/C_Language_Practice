#include <stdio.h>

int main()
{
	int num1 = 0;
	int size;
	size = sizeof num1; //변수 num1의 자료형 크기를 구함(바이트 단위)
	printf("num1의 크기 : %d\n", size);

	return 0;

}

/*표현식은 변수, 상수, 배열 등 프로그래머가 만들어낸 요소
sizeof int로는 자료형의 크기를 구할수 없다.
sizeof(int)여야만한다.
*/