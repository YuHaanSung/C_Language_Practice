#include <stdio.h>
#include <float.h> //�Ǽ� �ڷ����� ��� �ּҰ�, �ִ밪�� ���ǵ� �������

int main()
{
	float num1 = FLT_MIN;
	float num2 = FLT_MAX;
	double num3 = DBL_MIN;
	double num4 = DBL_MAX;
	long double num5 = LDBL_MIN;
	long double num6 = LDBL_MAX;

	printf("%.40f %.2f\n", num1, num2); //�Ҽ��� �ڿ� ���ڸ� �����ϸ� �� ���ڸ�ŭ �Ҽ��� ���� �ڸ����� ����մϴ�.
}

//�Ǽ��� ����÷ο�� 0�̵ǰ�, �Ǽ��� �����÷ο�� �����̵ȴ�.