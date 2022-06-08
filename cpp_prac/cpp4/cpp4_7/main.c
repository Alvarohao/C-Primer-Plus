/*
2022年6月8日
编写一个程序，将一个double类型的变量设置为1.0/3.0，一个float类型的变量设置为1.0/3.0。
分别显示两次计算结果各3次：
一次显示小数点后面6位数字；一次显示小数点后面12位数字；一次显示小数点后面16位数字。
程序中要包含float	.h文件，并显示FLT_DIG和DBL_DIG的值。
1.0/3.0的值与这些值一致吗？
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

/*输出结果：
0.333333 0.333333
0.333333333333 0.333333343267
0.3333333333333333 0.3333333432674408
FLT_DIG = 6, DBL_DIG = 15
*/