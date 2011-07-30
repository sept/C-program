/*#include <stdio.h>
#define N 13
int main(int argc, const char *argv[])
{
	char str[N] = "hello world!";
	char *ptr;
 	int i;	
	ptr = &str[N];

	for (i = 0; i < 13; i++ , ptr--) 
	{
		printf("%c",*ptr);
		ptr = i + 1;
	}
	printf("\n");

	return 0;
}


#include <stdio.h>
#define N 15
int main(int argc, const char *argv[])
{
	
	char str[N] = "hello world!";
	char *ptr;                                   //现正着打印出来 再反向打印出
 		
	ptr = str;
	while(*ptr != '\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	printf("\n");

	ptr--;
	while(ptr >= str)
	{
		printf("%c",*ptr);
		ptr--;
	}

	printf("\n");
	return 0;
}

*/


#include <stdio.h>
#define N 15
int main(int argc, const char *argv[])
{
	
	char str[N] = "hello world!";
	char *ptr;
 
 	ptr = &str[N];

	while(ptr >= str)
	{
		printf("%c",*ptr);            
		ptr--;
	}

	printf("\n");
	return 0;
}
