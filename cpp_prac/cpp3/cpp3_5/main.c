/*
2022��3��30��
һ���Լ��3.156 * 10^7�롣
��дһ��������ʾ�û��������䣬Ȼ����ʾ�������Ӧ��������
*/

#include <stdio.h>

int main(void)
{
	int age;

	printf("Please enter your age: ");
	scanf_s("%d", &age);
	printf("%d years old includes %.0f seconds.\n", age, age * 3.156e7);

	return 0;
}

/*������
Please enter your age: 23
23 years old includes 725880000 seconds.
*/