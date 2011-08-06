#include <stdio.h>
#define N  10
int main(void)
{
	char array[N] = {0};
	int i = 0;
	int interval = 4;
 	int out_couter = 0;
	int total_num = 0;

 	for (i = 0; total_num < N - 1; i++) 
 	{
 		if (i == N) 
		{
			i = 0;
		}

		if (array[i] == 0) 
		{
			out_couter++;
	     }
         
         if (out_couter == interval) 
		 {
			out_couter = 0;
			array[i] = 1;
			printf("%5d(out)\n",i+1);
			total_num++;
		 }
	}

    for (i = 0; i < N; i++)
    {
        if (array[i] == 0)
        {
            printf("the last people is %d\n", i + 1);
        }
    }

	return 0;

}
