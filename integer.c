#include <stdio.h>

int main()
{
	char num1 = -10; // 1����Ʈ ��ȣ�ִ� ���������� ������ �����ϰ� �� �Ҵ�
	short num2 = 30000; // 2����Ʈ ��ȣ�ִ� ���������� ������ �����ϰ� �� �Ҵ�
	int num3 = -12345566; // 4����Ʈ ��ȣ�ִ�~
	long num4 = 1232344; // 4����Ʈ ��ȣ�ִ�~
	long long num5 = 1234324; // 8����Ʈ ��ȣ�ִ�~

	// char, short, int�� %d�� ����ϰ�, long�� %ld, long long�� %lld�� ����Ѵ�.
	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
	return 0;
}
