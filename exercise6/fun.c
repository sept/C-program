#include<stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    FILE *fp = NULL;
    char str[1024] = "hello china";
    char r_str[1024] = {0};
    fp = fopen("1.txt","w+");         //若1.txt 没有内容 时
    if (fp == NULL)                     
    {
        perror("open");
        exit(0);
    }

    int i = 0;
    while (str[i] != '\0')               //将str[i]内的内容复制到文件后 指针指向末尾
    {
        putc(str[i],fp);
        i++;
    }
//    rewind(fp);                           //rewind函数: 将文件指针重新指向一个流的开头
    fwrite(str,1,strlen(str),fp);
    fseek(fp,0,SEEK_SET);                   //fseek函数:把fp的文件读写位置指针移到指定的位置（此处 移动到起始位置）
    fread(r_str,1,1023,fp);
    i = 0;
    while ((r_str[i] = getc(fp)) != EOF)      //此时 满足条件 进入循环 
    {                                          // EOF:文件结束符（end of file）。 
         i++;
    }
    r_str[i] = '\0';
    printf("%s\n",r_str);
    fclose(fp);
    return 0;
}
