/* ǥ�� �Է����� ���� 'f', 'c', 'p' �� �ϳ��� �Էµ˴ϴ�. 
�Էµ� ���ڰ� 'f'��� "ȯŸ", 'c'��� "�ݶ�", 'p'��� "��ī������Ʈ"�� ����ϰ�, 
�ƹ� ���ڿ��� �ش���� ������ "�Ǹ����� �ʴ� �޴�"�� ����ϴ� ���α׷��� ���弼��.

���信�� ���� ģ �κп� �� �ڵ常 �ۼ��ؾ� �մϴ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char memu;

    scanf("%c", &memu);

    switch (memu)
    {
    case 'f' :
        printf("ȯŸ");
        break;
    case 'c' :
        printf("�ݶ�");
        break;
    case 'p' :
        printf("��ī������Ʈ");
        break;
    default :
        printf("�Ǹ����� �ʴ� �޴�");

    }

    int i, j;
    i++, j += 2;

    return 0;
}