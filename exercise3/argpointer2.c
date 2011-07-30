#include <stdio.h>
#define N 10               //必须首先宏定义 下面才可以使用
int main(void)
{
	char str[N] = "abcdef";
	char *ptr;

	ptr = str;

	while(*ptr != '\0')             //while 先判断再循环
	{
		printf("%c",*ptr);       //do...while 现循环再判断
		ptr++;
	}

	printf("\n");
	return 0;
}
