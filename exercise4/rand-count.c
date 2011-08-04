#if 0                                      //输出0到99 之间出现9 的个数
#include<stdio.h>
int main(int argc, const char *argv[])
{
    int i;
    int temp = 0;


    for (i = 0; i < 100; i++)
    {
        if (i % 10 == 9)
        {
           temp++;
        }  
       if (i / 10 == 9)
        {
            temp++;
        }
        
    }
    printf("0～99中包含9的个数共计%d\n",temp);
    return 0;
}
#endif 

/*初始化一组随机数 将重复的数字只输出一次*/
/*先将重复的数标记为-1 后将输出为-1的数删除或不输出*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define M  10 
void print_array(int *p, int n)
{
    int i = 0;
    for (i = 0; i < n; i++) 
    {
        if ((i%5) == 0)
        {
            printf("\n");
        }
        printf("%4d",p[i]);
    }
    printf("\n");
}

void init_array(int *p, int n)
{
    srand(time(NULL));

    int i = 0;
    for (i = 0; i < n; i++) 
    {
        p[i] = rand()%(n*2);
    }


}
void delete_same(int *p, int n)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < n - 1; i++)
    {
        if (p[i] != -1)
        {
            for (j =i + 1; j < n; j++)
            {
                if (p[i] == p[j])
                {
                    p[j] = -1;
                }
            }
        }
    }
}
void print_result(int *p, int n)
{
    int i = 0;

    for (i = 0; i < n; i++)
    {
        if(p[i] != -1)
       {    
            if ((i % 5) == 0)
            {
                printf("\n");
            }
          printf("%4d",p[i]);
       }
    }
   printf("\n");
       
} 
int main(void)
{
        int array[M];
        init_array(array, M);
        print_array(array, M);
        delete_same(array, M);
        print_result(array, M);
        return 0;
}

