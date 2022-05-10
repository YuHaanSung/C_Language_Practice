#include <stdio.h>

int main() {

	printf("%s\n", "Hello, world!");
	printf("%s %s\n", "Hello,", "world!");
	printf("%s, %s\n", "Hello", "world!");
	printf("%s%s\n", "Hello", "1234"); //Hello1234 : 붙여서 출력됨
	printf("%s%s\n", "Hello ", "world!"); //Hello world! :
	/* 즉 printf는 서식 지정자의 내용과 출력할 문자열을 조합하여 
	최종 결과를 만들어내므로 다양한 방법으로 응용할 수 있다.
	특히 공백도 문자열의 한 부분이므로 출력 결과에 영향을 미친다는 점을 기억하자.

	%s : 문자열의 약어로 s를 사용합니다.

	만약 Visual Stuido에서 main함수가 들어있는 .c파일을 계속 추가하여 main함수가 여러개가 되었다면
	컴파일 할 때 에러가 발생하게 됩니다. 프로젝트에서 main함수는 반드시 하나만 있어야합니다.
	printf(서식, 값1, 값2);
	int printf(char const* const_Format, ...);
	성공하면 출력한 문자열의 길이를 반환, 실패하면 음수로 변환
*/ 
}