/*
2022��6��8��
��дһ��������ʾ�û���������λÿ�루Mb/s��Ϊ��λ�������ٶȺ������ֽڣ�MB��Ϊ��λ���ļ���С��
������Ӧ�����ļ�������ʱ�䡣
ע�⣬����1�ֽڵ���8λ��
ʹ��float���ͣ�����/��Ϊ���š�
�ó���Ҫ������ĸ�ʽ��ӡ3��������ֵ�������ٶȡ��ļ���С������ʱ�䣩����ʾС���������λ���֣�
At 18.12 megabits per second, a file of 2.20 megabytes downloads in 0.97 seconds.
*/

#include <stdio.h>
#define BIT 8

int main(void)
{
	float net_speed, file_size, time;

	printf("Please enter net speed(Mb/s):\n");
	scanf_s("%f", &net_speed);
	printf("Please enter file size(MB):\n");
	scanf_s("%f", &file_size);
	time = file_size * BIT / net_speed; 
	printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n", net_speed, file_size, time);

	return 0;
}

/*��������
Please enter net speed(Mb/s):
18.12
Please enter file size(MB):
2.2
At 18.12 megabits per second, a file of 2.20 megabytes downloads in 0.97 seconds.
*/