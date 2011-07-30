#include <stdio.h>
int main(int argc, const char *argv[])
{
	char str[] = "qwertyu";
	char *ptr ;
	char a[9];
	int i = 0;

	ptr = str;

	while(*ptr != '\0')
	{
		a[i++] = *ptr;
		ptr++;
	}
	a[i] = '\0';

	printf("%s",a);

	printf("\n");

	return 0;
}







#if 0
#include <stdio.h>

int main(int argc, const char *argv[])
{
	
	char str[] = "qwertyu";
	char *ptr ;
	char a[9];
 	char *b;

	ptr = str;
	b = a;
	while (*ptr != '\0') 
	{
		*b = *ptr;
		ptr++;
		b++;
	}
	printf("%s",b);
	printf("\n");
	return 0;
}

#endif 
