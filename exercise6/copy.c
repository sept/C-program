#include<stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    FILE *fp = NULL;
    char str[1024] = {0};
    fp = fopen("1.txt","r+");
    if (fp == NULL)         
    {
        perror("open");
        exit(0);
    }
    fputc(str,fp);
     printf("%s\n".str);
   //  fprintf("q.txt","%s\n",str);

     fclose(fp);
     return 0;
}
