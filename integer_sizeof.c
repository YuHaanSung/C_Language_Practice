#include <stdio.h>

int main()
{
	int num1 = 0;
	int size;
	size = sizeof num1; //���� num1�� �ڷ��� ũ�⸦ ����(����Ʈ ����)
	printf("num1�� ũ�� : %d\n", size);

	return 0;

}

/*ǥ������ ����, ���, �迭 �� ���α׷��Ӱ� ���� ���
sizeof int�δ� �ڷ����� ũ�⸦ ���Ҽ� ����.
sizeof(int)���߸��Ѵ�.
*/