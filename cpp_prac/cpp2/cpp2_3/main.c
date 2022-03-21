/*2022年3月21日
编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考虑闰年的问题。
*/

#include <stdio.h>
int main()
{
	int age, day;

	age = 23;
	day = age * 365;

	printf("我今年%d岁，相当于%d天。\n", age, day);

	return 0;
}