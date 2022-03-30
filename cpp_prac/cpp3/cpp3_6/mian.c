/*
2022��3��30��
1��ˮ���ӵ�����ԼΪ3.0 * 10^-23�ˡ�
1����ˮ��Լ��950�ˡ�
��дһ��������ʾ�û�����ˮ�Ŀ�����������ʾˮ���ӵ�����
*/

#include <stdio.h>
#define MASS_PER_MOLE 3.0e-23
#define MASS_PER_QUART 950

int main(void)
{
	double quart, molecules;

	printf("Please enter a quart for water: ");
	scanf_s("%lf", &quart);

	molecules = quart * MASS_PER_QUART / MASS_PER_MOLE;

	printf("%lf quart water includes %e water molecules.\n", quart, molecules);

	return 0;
}

/*������
Please enter a quart for water: 1
1.000000 quart water includes 3.166667e+25 water molecules.
*/