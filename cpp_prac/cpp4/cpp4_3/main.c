/*
2022��6��7��
��дһ�����򣬶�ȡһ����������������С�����������ӡ��Ȼ����ָ����������ӡ��
������ĸ�ʽ���������ϵͳ��ͬ��ָ����������ʾ��λ�����ܲ�ͬ����
a. The input is 21.3 or 2.1e+001.
b. The input is +21.290 or 2.19E+001.
*/

#include <stdio.h>

int main(void)
{
	float num;

	printf("Please enter a float number:\n");
	scanf_s("%f", &num);
	printf("a. The input is %.1f or %.1e.\n", num, num);
	printf("b. The input is %.3f or %.3E.\n", num, num);

	return 0;
}

/*��������
Please enter a float number:
21.29
a. The input is 21.3 or 2.1e+01.
b. The input is 21.290 or 2.129E+01.
*/