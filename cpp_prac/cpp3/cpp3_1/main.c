/*
2022��3��30��
ͨ�����飨����д���д�������ĳ��򣩹۲�ϵͳ��δ����������硢����������͸�������������
*/

#include <stdio.h>

int main(voiod)
{
	int big_int = 2147483647;
	float big_float = 3.4e38;
	float small_float = 1.e-6;

	printf("The big int data is %d\n", big_int + 1);
	printf("The big float data is %f\n", big_float * 10);
	printf("The small float data is %f\n", small_float / 2);

	return 0;
}

/*������
The big int data is -2147483648
The big float data is inf
The small float data is 0.000000
*/