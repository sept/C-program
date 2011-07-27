#include <stdio.h>
int main(void)
{
    unsigned int a = 0x556677aa;
    unsigned int mask = (1 << 31);
    int i = 0;
    for (i = 0; i < 32; i++)
  /* 或 for (;mask > 0; mask >>= 1)*/
    {
        printf("%c",((a & mask)) > 0 ? '1' : '0');
        mask >>= 1; 
    /* 则取消 mask >>= 1;    */
    }
        printf("\n");
        return 0;
}
