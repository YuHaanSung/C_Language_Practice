#include <stdio.h>

int main()
{
	float num1 = 3.e5f;
	//���� ǥ������� 300000�� ǥ��
	double num2 = -1.3827e-2;
	long double num3 = 5.21e+9l;
	printf("%f, %f, %Lf\n", num1, num2, num3);
	printf("%e, %e, %Le\n", num1, num2, num3);
	return 0;
}
/* ����ǥ����϶��� �����κ��� ���ڸ����� ���� �Ҽ��ڸ��� �ڿ� e�� ������ ǥ���մϴ�.*/