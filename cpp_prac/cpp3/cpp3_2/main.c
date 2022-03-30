/*
2022年3月30日
编写一个程序，要求提示输入入一个ASCII码值（如，66），然后打印输入的字符
*/

#include <stdio.h>

int main(void)
{
	int ASCII;

	printf("Please you enter an ASCII value: ");
	printf("_____\b\b\b\b\b");
	scanf_s("%d", &ASCII);
	printf("\nASCII %d is %c\n", ASCII, ASCII);

	return 0;
}

/*输出结果
Please you enter an ASCII value: 66___

ASCII 66 is B
*/