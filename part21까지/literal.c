#include <stdio.h>

int main()
{
	printf("%d\n", 10); // 10: ���� ���ͷ�
	printf("%f\n", 0.1f); // 0.100000 : �Ǽ� ���ͷ�
	printf("%c\n", 'a'); // a : ���� ���ͷ�
	printf("%s\n", "Hello, world!"); // ���ڿ� ���ͷ�

	printf("%d\n", 19); // 19 : 10���� ���� ���ͷ�
	printf("0%o\n", 017); // 017 : 8���� ���� ���ͷ�
	printf("0x%x\n", 0x1F); // 0x1F : 16���� ���� ���ͷ�


	const int con1 = 1;
	const float con2 = 0.1f;
	const char con3 = 'a';

	printf("%d, %f, %c", con1, con2, con3);

	

	/*����� �����ϴ� ����� ������ �����ϴ� ����� ����, �ڷ��� �տ� const
	�� ����� �ݵ�� ����� ���ÿ� ���� �Ҵ��ϴ� �ʱ�ȭ�ؾ��մϴ�.

	���ͷ��� ũ�⸦ ��Ȯ�ϰ� ǥ���ϱ� ���� ���̻縦 ����� �� �ֽ��ϴ�.

	���� ���ͷ� ���̻�
	���� int
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
/*���ͷ��� �ݵ�� ǥ�� ����� ���Ѿ��մϴ�.
���ڴ� '' ���ڿ��� "", ���ڳ� ���ڿ��� ����ǥ�� ���� ������ ����, �Լ��� �ν�
%s ���������ڴ� ���ڿ��� ����մϴ�.
*/