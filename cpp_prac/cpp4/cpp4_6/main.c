/*
2022��6��8��
��дһ����������ʾ�û���������Ȼ����ʾ�û������ա�
��һ�д�ӡ�û�����������գ���һ�зֱ��ӡ�����յ���ĸ����
��ĸ��Ҫ����Ӧ�����յĽ�β���룬������ʾ��
Melissa Honeybee
      7        8
���������ٴ�ӡ��ͬ����Ϣ��������ĸ��������Ӧ�����յĿ�ͷ���䣬������ʾ��
Melissa Honeybee
7       8
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char first_name[20], last_name[20];
    int len_first, len_last;

    printf("Please enter your first name:\n");
    scanf_s("%s", first_name, 20);
    printf("Please enter your last name:\n");
    scanf_s("%s", last_name, 20);

    len_first = strlen(first_name);
    len_last = strlen(last_name);

    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", len_first, len_first, len_last, len_last);
    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n", len_first, len_first, len_last, len_last);

    return 0;
}

/*��������
Please enter your first name:
Melissa
Please enter your last name:
Honeybee
Melissa Honeybee
      7        8
Melissa Honeybee
7       8
*/