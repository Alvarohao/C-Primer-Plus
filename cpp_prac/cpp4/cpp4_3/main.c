/*
2022年6月7日
编写一个程序，读取一个浮点数，首先以小数点计数法打印，然后以指数计数法打印。
用下面的格式进行输出（系统不同，指数计数法显示的位数可能不同）：
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

/*输出结果：
Please enter a float number:
21.29
a. The input is 21.3 or 2.1e+01.
b. The input is 21.290 or 2.129E+01.
*/