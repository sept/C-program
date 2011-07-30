#include <stdio.h>

int main(int argc, const char *argv[])
{
	char a[] = "hello world!";
	char *ptr;
	int i = 1;

	ptr = a;

	while (*ptr != '\0' ) 
	{
  		if (*ptr == 'o') 
		{
			printf("a[%d]\n",i);
		}	
		ptr++;
		i++;
	}


	return 0;
}
