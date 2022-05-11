#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char input;
	scanf("%c", &input);
	if (input != 'k')
	{
		printf("참\n");
	}
	else
	{
		printf("거짓\n");
	}
	if (input > 'h')
	{
		printf("참\n");
	}
	else
	{
		printf("거짓\n");
	}
	if (input <= 'o')
	{
		printf("참");
	}
	else
	{
		printf("거짓");
	}
}
/*표준 입력으로 문자가 입력됩니다. 다음 조건대로 입력된 문자를 검사하여 결과를 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).

문자가 k와 다르면 "참", 같으면 "거짓"
문자가 h보다 크면 "참", 작거나 같으면 "거짓"
문자가 o보다 작거나 같으면 "참", 크면 "거짓"
정답에는 C 언어 컴파일러에서 정상적으로 컴파일되는 전체 코드를 입력해야 합니다.

예
입력
k
결과
거짓
참
참*/
