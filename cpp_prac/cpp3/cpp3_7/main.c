/*
2022��3��30��
1Ӣ���൱��2.54���ס�
��дһ��������ʾ�û�������ߣ�/Ӣ�磩��Ȼ��������Ϊ��λ��ʾ��ߡ�
*/

#include <stdio.h>
#define CM_PER_INCH 2.54

int main(void)
{
	double height_inch;

	printf("Please enter your height(inch): ");
	scanf_s("%lf", &height_inch);
	printf("%Your height is %lf cm.\n", height_inch * CM_PER_INCH);

	return 0;
}

/*������
Please enter your height(inch): 71.8
Your height is 182.372000 cm.
*/