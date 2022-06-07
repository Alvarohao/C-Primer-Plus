/*
2022年6月7日
编写一个程序，提示用户输入身高（单位：英寸）和姓名，然后以下面的格式显示用户刚输入的信息：
Dabney, you are 6.208 feet tall
使用float类型，并用/作为除号。
如果你愿意，可以要求用户以厘米为单位输入身高，并以米为单位显示出来。
*/

#include <stdio.h>

int main(void)
{
	float height;
	char name[20];

	printf("Please enter your name:\n");
	scanf_s("%s", name, 20);
	printf("Please enter your height(inch):\n");
	scanf_s("%f", &height);
	printf("%s, you are %.3f feet tall\n", name, height / 12.0);

	return 0;
}

/*输出结果：
Please enter your name:
Dabney
Please enter your height(inch):
5.97
Dabney, you are 0.497 feet tall
*/