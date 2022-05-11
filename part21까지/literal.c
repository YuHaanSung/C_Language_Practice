#include <stdio.h>

int main()
{
	printf("%d\n", 10); // 10: 정수 리터럴
	printf("%f\n", 0.1f); // 0.100000 : 실수 리터럴
	printf("%c\n", 'a'); // a : 문자 리터럴
	printf("%s\n", "Hello, world!"); // 문자열 리터럴

	printf("%d\n", 19); // 19 : 10진수 정수 리터럴
	printf("0%o\n", 017); // 017 : 8진수 정수 리터럴
	printf("0x%x\n", 0x1F); // 0x1F : 16진수 정수 리터럴


	const int con1 = 1;
	const float con2 = 0.1f;
	const char con3 = 'a';

	printf("%d, %f, %c", con1, con2, con3);

	

	/*상수를 선언하는 방법은 변수를 선언하는 방법과 같고, 자료형 앞에 const
	단 상수는 반드시 선언과 동시에 값을 할당하는 초기화해야합니다.

	리터럴의 크기를 명확하게 표현하기 위해 접미사를 사용할 수 있습니다.

	정수 리터럴 접미사
	생략 int
	l,L long
	u,U unsigned int
	ul, UL unsigned long
	ll, LL long long
	ull, ULL unsigned long long
	float F, f
	long double L, l
	*/
	return 0;

	return 0;
}
/*리터럴은 반드시 표기 방법을 지켜야합니다.
문자는 '' 문자열은 "", 문자나 문자열을 따옴표로 묶지 않으면 번수, 함수로 인식
%s 서식지정자는 문자열을 출력합니다.
*/