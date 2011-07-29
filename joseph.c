#include <stdio.h>
#define N  10
int main(void)
{
	char array[N] = {0};
	int i = 0;
	int interval = 4;
 	int out_couter = 0;
	int total_num = 0;

 	for (i = 0; total_num < N; i++) 
 	{
 		if (i == N) 
		{
			i = 0;
		}
		if (array[i] == 0) 
		{
		
			if (i = N - 1) 
			{
				array[i] = 1;
				printf("%3d",i+1);
				break;
			}
			out_couter++;
			if (out_couter == interval) 
			{
				out_couter = 0;
				array[i] = 1;
				printf("%5d(out)\n",i+1);
				total_num++;
			}
			else
			{
				printf("%5d",i+1);
			}
		    
		} 		

	}
	return 0;

}
