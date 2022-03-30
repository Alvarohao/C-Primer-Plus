/*
2022年3月30日
1个水分子的质量约为3.0 * 10^-23克。
1夸脱水大约是950克。
编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量
*/

#include <stdio.h>
#define MASS_PER_MOLE 3.0e-23
#define MASS_PER_QUART 950

int main(void)
{
	double quart, molecules;

	printf("Please enter a quart for water: ");
	scanf_s("%lf", &quart);

	molecules = quart * MASS_PER_QUART / MASS_PER_MOLE;

	printf("%lf quart water includes %e water molecules.\n", quart, molecules);

	return 0;
}

/*输出结果
Please enter a quart for water: 1
1.000000 quart water includes 3.166667e+25 water molecules.
*/