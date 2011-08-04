/*将二维数组初始化 后排序*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>                                       
#define N  8
#define M  10
int init_array(int (*p)[N],int i,int j)       //注意二位数组的指针的定义
{
srand(time(NULL));      //使用time 即为了出现随机的数 每次输出的随机数都按时间输出 这样没有相同的时间也就没有相同的随机数
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
int order_array(int (*p)[N],int i,int j)       //将初始化后的二维数组排序
{
    int temp = 0;                             //中间变量
    
    for (j = 0; j < M*N ; j++)                //使用类似一维数组排序的方式
    {
        for (i = j + 1; i < N * M; i++)
        {
            if (p[0][j] < p[0][i])           //二维数组在内存中的放置 是连续的 即p[0][N]到p[1][0] 其实就是p[0][N+1]
            {
                temp = p[0][i];              //系统会自动从第一行指向第二行的第一个 不会发生第一行越界之类的事
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
