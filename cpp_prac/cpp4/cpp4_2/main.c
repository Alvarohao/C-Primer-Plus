/*
2022��6��5��
��дһ��������ʾ�û��������֣���ִ�����²�����
a. ��ӡ����
b. �ڿ��Ϊ20���ֶ��Ҷ˴�ӡ���֣�����˫���ţ�
c. �ڿ��Ϊ20���ֶ���˴�ӡ���֣�����˫���ţ�
d. �ڱ�������ȿ�3���ֶ��д�ӡ���֡�
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	int len;
	char name[20];

	printf("Please enter your name:\n");
	scanf_s("%s", &name, 20);
	len = strlen(name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%*s\"\n", len + 3, name);

	return 0;
}

/*��������
Please enter your name:
Alvaro
"Alvaro"
"              Alvaro"
"Alvaro              "
"   Alvaro"
*/