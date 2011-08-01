/*将二维数组初始化 后排序*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>                                       
#define N  8
#define M  10
int init_array(int (*p)[N],int i,int j)
{
srand(time(NULL));
    for (j = 0; j < M; j++)
    {
        for (i = 0; i < N; i++)
        {
            p[j][i] = rand()%(M*N);
        }
    }
}
int print_array(int (*p)[N],int i,int j)
{
    for (j = 0; j < M; j++)
    {
        for (i = 0; i < N; i++)
        {
            if (i%10==0)
            {
                printf("\n");
            }
            printf("%5d",p[j][i]);
        }
        
    }
    printf("\n");
    return 0;
}
int order_array(int (*p)[N],int i,int j)
{
    int temp = 0;
    
    for (j = 0; j < M*N ; j++)
    {
        for (i = j + 1; i < N * M; i++)
        {
            if (p[0][j] < p[0][i])
            {
                temp = p[0][i];
                p[0][i] = p[0][j];
                p[0][j] = temp;
            }
        }
    }
}
//int result_array(int(*p)[N],int i,int j)

int main(void)
{
    int *p = NULL;                            //当不确定指针的初始值的时候可以赋 NULL 就不会报错
    int array[M][N];
    p = &array[0][0];
    init_array(array,M,N);
    print_array(array,M,N);
    order_array(array,M,N);
    print_array(array,M,N);

    return 0;
}
