/*
2022��6��7��
��дһ��������ʾ�û�������ߣ���λ��Ӣ�磩��������Ȼ��������ĸ�ʽ��ʾ�û����������Ϣ��
Dabney, you are 6.208 feet tall
ʹ��float���ͣ�����/��Ϊ���š�
�����Ը�⣬����Ҫ���û�������Ϊ��λ������ߣ�������Ϊ��λ��ʾ������
*/

#include <stdio.h>

int main(void)
{
	float height;
	char name[20];

	printf("Please enter your name:\n");
	scanf_s("%s", name, 20);
	printf("Please enter your height(inch):\n");
	scanf_s("%f", &height);
	printf("%s, you are %.3f feet tall\n", name, height / 12.0);

	return 0;
}

/*��������
Please enter your name:
Dabney
Please enter your height(inch):
5.97
Dabney, you are 0.497 feet tall
*/