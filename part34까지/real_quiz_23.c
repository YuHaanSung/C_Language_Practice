

/*ǥ�� �Է����� �� ����(unsigned int)�� �Էµ˴ϴ�. �Էµ� �� ������ ��Ʈ ���� ����� �� �ٿ� ����ϴ� ���α׷��� ���弼��(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).

num1�� num2�� ��Ʈ XOR ����
num1�� num2�� ��Ʈ OR ����
num1�� num2�� ��Ʈ AND ����
num1�� ��Ʈ NOT ����
��� ����� ���� ������ %u�� ����ϼ���.

���信�� C ��� �����Ϸ����� ���������� �����ϵǴ� ��ü �ڵ带 �Է��ؾ� �մϴ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned int num1, num2;
	scanf("%u %u", &num1, &num2);
	printf("%u\n", num1 ^ num2);
	printf("%u\n", num1 | num2);
	printf("%u\n", num1 & num2);
	printf("%u\n", ~num1);
}