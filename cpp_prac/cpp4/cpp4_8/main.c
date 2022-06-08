/*
2022年6月8日
编写一个程序，提示用户输入旅行的里程和消耗的汽油量。
然后计算并显示消耗没加仑汽油行驶的英里数，显示小数点后面一位数字。
接下来，使用1加仑大约3.785升，1英里大约1.609千米，
把单位是英里/加仑的值转换为升/100公里（欧洲通用的燃料消耗表示方法），并显示结果，显示小数点后面1位数字。
注意，美国采用的方案测量消耗单位燃料的行程（值越大越好），而欧洲则采用单位距离消耗的燃料测量方案（值越低越好）。
使用#define创建符号常量或使用const限定符创建变量来表示两个转换系数。
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

/*输出结果
Please input the range you traveled(in mile):
100
Please input oil you spend(in gallon):
10
Fuel consumptions:
In USA, your oil wear is 10.0 mile/gallon.
In Europe, your oil wear is 60.9 litre/100km.
*/