/*
2022年6月5日
编写一个程序，提示用户输入名和姓，然后以“名，姓”的格式打印出来
*/

#include <stdio.h>

int main(void)
{
	char name[20], surname[20];

	printf("Please enter your name and surname:\n");
	scanf_s("%19s %19s", name, 20, surname, 20);
	printf("Hello! %s, %s.\n", name, surname);

	return 0;
}

/*输出结果
Please enter your name and surname:
Alvaro Soler
Hello! Alvaro, Soler.
*/