/*2022年3月21日
编写一个程序，创建一个整型变量toes，并将toes设置为10。
程序中还要计算toes的两倍和toes的平方。
该程序打印3个值，分别描述以示分区。
*/

#include <stdio.h>

int main(void)
{
	int toes;

	toes = 10;

	printf("toes = %d\ntoes * 2 = %d\ntoes ^ 2 = %d\n", toes, toes * 2, toes * toes);

	return 0;
}