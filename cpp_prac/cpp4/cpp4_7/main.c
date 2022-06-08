/*
2022��6��8��
��дһ�����򣬽�һ��double���͵ı�������Ϊ1.0/3.0��һ��float���͵ı�������Ϊ1.0/3.0��
�ֱ���ʾ���μ�������3�Σ�
һ����ʾС�������6λ���֣�һ����ʾС�������12λ���֣�һ����ʾС�������16λ���֡�
������Ҫ����float	.h�ļ�������ʾFLT_DIG��DBL_DIG��ֵ��
1.0/3.0��ֵ����Щֵһ����
*/

#include <stdio.h>
#include <float.h>

int main(void)
{
	double value_d = 1.0 / 3.0;
	float value_f = 1.0 / 3.0;

	printf("%.6f %.6f\n", value_d, value_f);
	printf("%.12f %.12f\n", value_d, value_f);
	printf("%.16f %.16f\n", value_d, value_f);
	printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);

	return 0;
}

/*��������
0.333333 0.333333
0.333333333333 0.333333343267
0.3333333333333333 0.3333333432674408
FLT_DIG = 6, DBL_DIG = 15
*/