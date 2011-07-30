/*#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 9;
	int b = 0;
	int *ptr = &a;

	printf("a = %x\n",a);
	printf("&a = %x\n",&a);
	printf("ptr = %x\n",ptr);
	printf("*ptr = %x\n",*ptr);
	printf("&ptr = %x\n",&ptr);

	return 0;
}

*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
 	int array[3];
	int i;
	int *ptr;
	ptr = &array[0];
	for (i = 0 ;i < 3 ; i ++,ptr++) 
	{
		*ptr = i + 1;
		printf("%3d",*ptr);
	}
	printf("\n");
	return 0;
}
