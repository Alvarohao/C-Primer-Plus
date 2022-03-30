/*
2022��3��30��
���������������ϵͳ�У�1Ʒ�ѵ���2����1������8��˾��1��˾����2�����ף�1���׵���3���ס�
��дһ��������ʾ�û����뱭��������Ʒ�ѡ���˾�����ס�����Ϊ��λ��ʾ�ȼ�������
˼�����ڸó���Ϊ��ʹ�ø������ͱ��������͸����ʣ�
*/

#include <stdio.h>
#define PINT_PER_CUP 2
#define CUP_PER_OUNCE 8
#define OUNCE_PER_BIGSPOON 2
#define BIGSPOON_PER_TEASPOON 3

int main(void)
{
	double pint, cup, ounce, big_spoon, tea_spoon;

	printf("Please you enter a number of cups: ");
	scanf_s("%lf", &cup);

	pint = cup / PINT_PER_CUP;
	ounce = cup * CUP_PER_OUNCE;
	big_spoon = ounce * OUNCE_PER_BIGSPOON;
	tea_spoon = big_spoon * BIGSPOON_PER_TEASPOON;

	printf("Here are some ways to show %g cups:\n", cup);
	printf("Pint: %g\n", pint);
	printf("Ounce: %g\n", ounce);
	printf("Big spoon: %g\n", big_spoon);
	printf("Tea spoon: %g\n", tea_spoon);

	return 0;
}

/*������
Please you enter a number of cups: 5
Here are some ways to show 5 cups:
Pint: 2.5
Ounce: 40
Big spoon: 80
Tea spoon: 240
*/