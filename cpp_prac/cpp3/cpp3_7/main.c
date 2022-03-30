/*
2022年3月30日
1英寸相当于2.54厘米。
编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。
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

/*输出结果
Please enter your height(inch): 71.8
Your height is 182.372000 cm.
*/