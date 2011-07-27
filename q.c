#include <stdio.h>
int main(void)
{
    unsigned int a = 0x223344aa;  /*寄存器存储的是二进制数*/
    unsigned int mask = 0x0f;     /*掩码*/
    unsigned int i = 0;
    unsigned move = 28;           /*从最高位移28位到最低位*/        
    char str[17] = "0123456789abcdef";  /*让所有输出都按字符形式*/

    printf("0x");                          
    for (i = 0; i <8 ; i++)              /*循环八次*/
    {
       printf("%c",str[((a>>move) & mask)]);  
       move -=4;                             /*每次减四位移动*/
    }

        printf("\n");
        return 0;
}
