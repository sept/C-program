/*#include <stdio.h>
int main(void)
{
	int a = -10;
	unsigned int b = 6;
	int i;

	int array[100];
	for (i = 0; i < 100; i++) 
	{
  		array[i]=i;
		printf("%d",array[i]);		
	}
	
}
*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	
//	int a = -10;
//	unsigned int b = 6;
	int i;

	int array[100];
	for (i = 0; i < 100; i++) 
	{
		array[i] = i+1 ;
	}
	for (i = 0; i < 100; i++) 
	{
		printf("%4d",array[i]);
	}
	if()
	return 0;
}
/*	
if ((a+b) < b) 
{
	printf("hello\n");
}
else
{
	printf("world\n");

}
     printf ("\n");
     return 0;
}*/
