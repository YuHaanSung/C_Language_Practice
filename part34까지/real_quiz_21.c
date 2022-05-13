/*표준 입력으로 두 정수가 입력됩니다. 다음 조건대로 입력된 두 정수를 검사하여 결과를 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).

두 정수를 AND 연산했을 때 참이면 "참", 거짓이면 "거짓"
두 정수를 OR 연산했을 때 참이면 "참", 거짓이면 "거짓"
첫번째 정수를 NOT 연산했을 때 참이면"참", 거짓이면 "거짓"
정답에는 C 언어 컴파일러에서 정상적으로 컴파일되는 전체 코드를 입력해야 합니다.

예*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	if (a && b)
	{
		printf("참\n");
	}
	else
	{
		printf("거짓\n");
	}

	if (a || b)
	{
		printf("참\n");
	}
	else
	{
		printf("거짓\n");
	}
	
	if (!a)
	{
		printf("참\n");
	}
	else
	{
		printf("거짓\n");
	}
}