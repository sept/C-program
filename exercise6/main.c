#include<stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    FILE *fp = NULL;
    char str[1024] = "hello china";
    char r_str[1024] = {0};
//    printf("%s\n",str);
    fp = fopen("1.txt","r+");
    if (fp == NULL)                        //对于新建立的文件 先判断是否建立成功
    {
        perror("open");
        exit(0);
    }

    int i = 0;
    while (str[i] != '\0')               
    {
        putc(str[i],fp);
        i++;
    }
//    rewind(fp);
//    i = 0;
    while ((r_str[i] = getc(fp)) != EOF)           //getc 与 fgets 用法一样 可以直接输出不论换行或空格
    {
         i++;
    }
    r_str[i] = '\0';
    printf("%s\n",r_str);

//     fscanf(fp, "%s\n",r_str);
//     fprintf(fp,"%s\n",str);
//     gets(str);
//     fputs(str,fp);
//     printf("%s\n",r_str);
     fclose(fp);
    
    return 0;
}
