/*
2022年3月30日
在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1汤勺等于3茶勺。
编写一个程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量。
思考对于该程序，为何使用浮点类型比整数类型更合适？
*/

#include <stdio.h>
#define PINT_PER_CUP 2
#define CUP_PER_OUNCE 8
#define OUNCE_PER_BIGSPOON 2
#define BIGSPOON_PER_TEASPOON 3

int main(void)
{
	double pint, cup, ounce, big_spoon, tea_spoon;

	printf("Please you enter a number of cups: ");
	scanf_s("%lf", &cup);

	pint = cup / PINT_PER_CUP;
	ounce = cup * CUP_PER_OUNCE;
	big_spoon = ounce * OUNCE_PER_BIGSPOON;
	tea_spoon = big_spoon * BIGSPOON_PER_TEASPOON;

	printf("Here are some ways to show %g cups:\n", cup);
	printf("Pint: %g\n", pint);
	printf("Ounce: %g\n", ounce);
	printf("Big spoon: %g\n", big_spoon);
	printf("Tea spoon: %g\n", tea_spoon);

	return 0;
}

/*输出结果
Please you enter a number of cups: 5
Here are some ways to show 5 cups:
Pint: 2.5
Ounce: 40
Big spoon: 80
Tea spoon: 240
*/