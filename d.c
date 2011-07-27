#include<stdio.h>

int main(void)
{
    unsigned int a = 0xaa;
    unsigned int b = 0x1e;
    unsigned int c = 0;
    
    c = (a & b);
    c >>= 1;
    printf("%u\n",c);

    return 0;
}
