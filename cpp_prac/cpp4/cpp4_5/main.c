/*
2022年6月8日
编写一个程序，提示用户输入以兆位每秒（Mb/s）为单位的下载速度和以兆字节（MB）为单位的文件大小。
程序中应计算文件的下载时间。
注意，这里1字节等于8位。
使用float类型，并用/作为除号。
该程序要以下面的格式打印3个变量的值（下载速度、文件大小个下载时间），显示小数点后面两位数字：
At 18.12 megabits per second, a file of 2.20 megabytes downloads in 0.97 seconds.
*/

#include <stdio.h>
#define BIT 8

int main(void)
{
	float net_speed, file_size, time;

	printf("Please enter net speed(Mb/s):\n");
	scanf_s("%f", &net_speed);
	printf("Please enter file size(MB):\n");
	scanf_s("%f", &file_size);
	time = file_size * BIT / net_speed; 
	printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n", net_speed, file_size, time);

	return 0;
}

/*输出结果：
Please enter net speed(Mb/s):
18.12
Please enter file size(MB):
2.2
At 18.12 megabits per second, a file of 2.20 megabytes downloads in 0.97 seconds.
*/