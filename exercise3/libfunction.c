/*调用库函数举例*/
#include <stdio.h>
#include <string.h>               //调用库函数
#define N 30

char *my_copy(char *d,char *s)    
{								// char *m = d;
	char *m = d;
	while (*s != '\0')        //while((*d = *s) != '\0')       while((*(d++) = *(s++)) != '\0');
	{			 	 
		*d = *s;         //        d++;
		d++;		  //        s++;
		s++;		
	}			    	
	*d = '\0';
	return m;                 	// return m;                 return 0 ;
}
int main(void)
{
	char str[N] = "hello world!";
	char c_str[N];

	strcpy(c_str, str);        //使用库函数
	printf("%c",*d);
	return 0;
}
