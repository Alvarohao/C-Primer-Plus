/*
2022年6月8日
编写一个程序，先提示用户输入名，然后提示用户输入姓。
在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数。
字母数要与相应名和姓的结尾对齐，如下所示：
Melissa Honeybee
      7        8
接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对其，如下所示：
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

/*输出结果：
Please enter your first name:
Melissa
Please enter your last name:
Honeybee
Melissa Honeybee
      7        8
Melissa Honeybee
7       8
*/