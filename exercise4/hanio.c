/*汉诺塔只能使用函数递归*/

#include<stdio.h>
void hanio(char a, char b,char c, int n)               
{
    if ( n == 1)                                       //直到a上剩最后一个时
    {
        printf("%c---------->%c\n",a ,c);
        return;                                        //跳出栈 继续下一句 才能退出         
    }
    hanio(a,c,b,n-1);                                  //一直循环栈的过程
    printf("%c---------->%c\n",a,c);                   //return出来之后跳到该句 
    hanio(b,a,c,n-1);                                  //   
}


int main(int argc, const char *argv[])
{
    int n = 3;
    hanio('A','B','C',n);
    return 0;
}
