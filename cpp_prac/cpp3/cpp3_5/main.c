/*
2022年3月30日
一年大约有3.156 * 10^7秒。
编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
*/

#include <stdio.h>

int main(void)
{
	int age;

	printf("Please enter your age: ");
	scanf_s("%d", &age);
	printf("%d years old includes %.0f seconds.\n", age, age * 3.156e7);

	return 0;
}

/*输出结果
Please enter your age: 23
23 years old includes 725880000 seconds.
*/