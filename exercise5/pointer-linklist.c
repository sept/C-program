#include<stdio.h>
#include <string.h>
struct student    
{
    int number;
    char name[20];
};

typedef struct student  STU;

int main(void)
{
    STU m;
    STU *p = NULL;               //使用指针

    p = &m;       
    p->number = 20;                   // 指针指向 不能有空格
    strcpy(p->name, "zhang");
    printf("number     name\n");
    printf("%-5d        %s\n",p->number, p->name);
    return 0;
}
