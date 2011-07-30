/*void (没有返回值)*/

#include <stdio.h>

int main(void)
{
	int a = 5;
	int b = 6;
  
 if (a > b) 
 	{
 		printf("hi\n");
	}
 else if(a == b)
	{
		printf("yes\n");
	}
 else
	{
		printf("no\n");
	}

  switch(a)
{
	case 1: break;
	case 2: break;
	case 3: break;
	default : break;
}
int i = 0;
for (i = 0; i < 100; i++) 

{
	printf("%4d",i+1);	
}
printf("\n");

i = 0;
while(i < 100)
{
	printf("%4d",i+1);
	i++;
}
printf("\n");

return 0;
}

#include <stdio.h>
int main(void)
{
	int a = -10;
	unsigned int b = 6;
}
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
