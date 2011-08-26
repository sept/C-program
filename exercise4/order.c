/*使用冒泡法排序*/
#if 1
#include <stdio.h>
void main()
{
    int i, n=30, j, m;
    int a[]={210,108,65,49,72,88,67,5,19,36,
             90,35,1,112,215,600,23,46,51,29,
             77,19,0,55,27,48,18,22,30,56};
    printf("\nThese integers are as below:\n\n");
      for (i=0; i<n; i++)
          {
               printf("%6d",a[i]);
                     if ((i+1)%10==0)
                       printf("\n");
           }
      for (i=1; i<n; i++)
          {
               for (j=0; j<n-i; j++)
                    {
                      if (a[j] < a[j+1])
                         {
                             m=a[j + 1];
                             a[j + 1] = a[j];
                             a[j] = m;
                          }
                    }
            }
         printf("\nThe sorted integers:\n\n");
         for (i=0; i<n; i++)
            {
                 printf("%6d",a[i]);
             if ((i+1)%10==0)
                 printf("\n");
             }
 }
#endif

/*使用冒泡法排序*/
#if 0 
#include<stdio.h>
int main(int argc, const char *argv[])
{
    int a[15] = {68,11,21,9,90,88,52,10,3,70,1,0,25,13,9};
    int i,j,m;

    for (i = 0; i < 15; i ++ )
    {
        for (j = 0 ; j < 15 ;j++)
        {
            if (a[j] < a[j + 1])
            {
                m = a[j + 1];
                a[j + 1] = a[j];
                a[j] = m;
            }
        }    
    }
    for (i = 0; i < 15; i++)
    {
        if (i%5 == 0) 
        {
            printf("\n");
        }
         printf("%5d",a[i]);
    }
    printf("\n");
    return 0;
}
#endif
#if 0
/*排序*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define M  20

void print_array(int *p, int n)
{
    int i = 0;
    for (i = 0; i < n; i++) 
    {
        if ((i%8) == 0)
        {
            printf("\n");
        }
        printf("%6d",p[i]);
    }
    printf("\n");
}

void init_array(int *p, int n)            //初始化
{
    srand(time(NULL));

    int i = 0;
    for (i = 0; i < n; i++) 
    {
        p[i] = rand()%(n*2);
    }
}

void sort_array(int *p, int n)
{
    int i = 0;
    int j = 0;
    int temp;

#if 1
   int k = 0;
   
    for (i = 0; i < n -1; i++)           //大循环使用 0到n-1,即最后一个不用再排
    {
        k = i;             //使用中间变量 k 
        for (j = i + 1; j < n; j++)      
        {
            if (p[k] > p[j])        
            {
                k = j;       //当遇到比 j 大的数时用 k 做标记 扫描所有的数据一遍结束
            }
        }
        if (i != k)          //若扫描一遍后 最大的数不是他本身 则交换一次  （这样就减少交换次数从而提高效率）
        {
                temp = p[i]; 
                p[i] = p[k];
                p[k] = temp;
            
        }
    }
    
#endif

#if 0                                   //或使用原始方法 与每个比之大的数都交换 从而先找出最大的数
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i+1; j < n; j++) 
        {
            if (p[i] > p[j]) 
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }     
    }
#endif     
}
 

int main(int argc, const char *argv[])
{
        int array[M];
        init_array(array, M);
     printf("the origin number is :");
        print_array(array, M);
        sort_array(array, M);
    printf("the sored:");
        print_array(array, M);
        return 0;
}
#endif
