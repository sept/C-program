/*定义二维数组的指针：*/
#include<stdio.h>
int main(void)
{
    int array[3][5] ;                           
    int *p;                
    p = array[0];   // 不能用 p = a;
    //  或者
    // int (*p)[N];           //指向数组的指针
   //  p = a;       


    printf("array:           %p\n",array);
//array:             0xbff0df80
    printf("*array:          %p\n",*array);
//*array:            0xbff0df80
    printf("array+1:           %p\n",array+1);
//array+1:           0xbff0df94
    printf("array+2            %p\n",array+2);
//array+2            0xbff0dfa8
    printf("array[0]:        %p\n",array[0]);
//array[0]:          0xbff0df80
    printf("&array[0][0]:    %p\n",&array[0][0]);
//&array[0][0]:      0xbff0df80
    printf("&array[0]:       %p\n",&array[0]);
//&array[0]:         0xbff0df80
                                                        //物理地址这几个都是相等的 但是各自的逻辑意义不同
    return 0;
}

