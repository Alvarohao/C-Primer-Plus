/*2022年3月21日
编写一个程序，调用一次printf()函数，把你的名和姓打印在一行。
再调用一次printf()函数，把你的名和姓分别打印在两行。
然后，再调用两次pringtf()函数，把你的名和姓打印在一行。
输出应如下所示：
Gustav Mahler	←第一次打印的内容
Gustav			←第二次打印的内容
Mahler			←第三次打印的内容
Gustav Mahler	←第四次打印的内容
*/

#include <stdio.h>
int main(void)
{
	printf("Gustav Mahler\n");
	printf("Gustav\nMahler\n");
	printf("Gustav ");
	printf("Mahler\n");

	return 0;
}