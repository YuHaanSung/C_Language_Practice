#include <stdio.h>

int main()
{
	float num1 = 0.1f;
	// �����е� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�
	// float�� ���� �ڿ�f�� ����.
	double num2 = 0.2;
	// �����е� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�
	// double�� ���� �ڿ� �ƹ��͵� ������ ����.
	long double num3 = 9.327513l;
	//����
	// long double�� ���� �ڿ� l�� ����
	printf("%f %f %Lf", num1, num2, num3);
	// float�� double�� %f ���������ڷ� ���, long double�� %Lf ���������ڷ� ���
	return 0;
}