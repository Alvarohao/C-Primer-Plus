/*
2022��6��8��
��дһ��������ʾ�û��������е���̺����ĵ���������
Ȼ����㲢��ʾ����û����������ʻ��Ӣ��������ʾС�������һλ���֡�
��������ʹ��1���ش�Լ3.785����1Ӣ���Լ1.609ǧ�ף�
�ѵ�λ��Ӣ��/���ص�ֵת��Ϊ��/100���ŷ��ͨ�õ�ȼ�����ı�ʾ������������ʾ�������ʾС�������1λ���֡�
ע�⣬�������õķ����������ĵ�λȼ�ϵ��г̣�ֵԽ��Խ�ã�����ŷ������õ�λ�������ĵ�ȼ�ϲ���������ֵԽ��Խ�ã���
ʹ��#define�������ų�����ʹ��const�޶���������������ʾ����ת��ϵ����
*/

#include <stdio.h>
#define	GALLON_TO_LITRE 3.785
#define MILE_TO_KM 1.609

int main(void)
{
	float range, oil;

	printf("Please input the range you traveled(in mile):\n");
	scanf_s("%f", &range);
	printf("Please input oil you spend(in gallon):\n");
	scanf_s("%f", &oil);

	printf("Fuel consumptions:\n");
	printf("In USA, your oil wear is %.1f mile/gallon.\n", range / oil);
	printf("In Europe, your oil wear is %.1f litre/100km.\n", (range * GALLON_TO_LITRE) / (oil / MILE_TO_KM));

	return 0;
}

/*������
Please input the range you traveled(in mile):
100
Please input oil you spend(in gallon):
10
Fuel consumptions:
In USA, your oil wear is 10.0 mile/gallon.
In Europe, your oil wear is 60.9 litre/100km.
*/