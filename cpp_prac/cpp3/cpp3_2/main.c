/*
2022��3��30��
��дһ������Ҫ����ʾ������һ��ASCII��ֵ���磬66����Ȼ���ӡ������ַ�
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

/*������
Please you enter an ASCII value: 66___

ASCII 66 is B
*/