/*
2022��6��5��
��дһ��������ʾ�û����������գ�Ȼ���ԡ������ա��ĸ�ʽ��ӡ����
*/

#include <stdio.h>

int main(void)
{
	char name[20], surname[20];

	printf("Please enter your name and surname:\n");
	scanf_s("%19s %19s", name, 20, surname, 20);
	printf("Hello! %s, %s.\n", name, surname);

	return 0;
}

/*������
Please enter your name and surname:
Alvaro Soler
Hello! Alvaro, Soler.
*/