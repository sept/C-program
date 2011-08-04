/*使用数组和指针 打印出26个字母*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
 	char str[30];                //str[]="abcde" 只有在初始化的时候 定义它的长度其实是6
	int  i ;
	char *ptr;

	ptr = &str[0];
	*ptr = '\0';
	for (i = 0 ;i < 30 ; i ++,ptr++) 
	{
		*ptr = 'a'+ i;                     /*操作完之后指针指向最后一个字符
							若想回到最开始即把str[0] 重新赋给它*/
		printf("%3c",str[i]);
	}
	printf("\n");
	return 0;
}
