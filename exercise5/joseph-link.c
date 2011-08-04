/*使用指针链表解决约瑟夫环问题*/
#include<stdio.h>
#include <stdlib.h>

struct circle                  //定义结构体类型
{
    int number;
    struct circle *next;
};

typedef struct circle V_NODE;

V_NODE *init_circle(int n)           //初始化 
{
    int i = 0;
    V_NODE *head = NULL;
    V_NODE * p= NULL;
    
    p = head = malloc(sizeof(V_NODE));
    if (p == NULL)
    {
        perror("empty\n");
        exit(0);
    }
    
    p->number = 1;
    p->next = NULL;
    for (i = 1; i < n; i++)
    {
        p->next = malloc(sizeof(V_NODE));
        if (p->next == NULL)
        {
            perror("empty\n");
            exit(0);
        }
        p->next->number = i+1;
        p->next->next = NULL;
        p = p->next;
    }
    p->next = head;
    return p;
}
V_NODE j_game(V_NODE *p_f)
{
    int out_counter = 0;                 //用来数间隔数
    int interval = 4;                    //定义间隔数
    V_NODE *p = p_f->next;              //定义指针 始终跟在 p之后

    while (p != p->next )                
    {
        out_counter++;                      //开始数数
        if (out_counter == interval)        //当 数到间隔数时
        {
            out_counter = 0;                //清零
            printf("%5d(out)\n",p->number);      
            p_f->next = p->next;                //删除 p 所指向的空间 链接 p->next 与 p_f
            free(p);                            //释放p 所指 空间 即完成删除操作
            p = p_f->next;                      //继续移动p 指针
        }
        else
        {
            printf("%5d",p->number);            //非 间隔数
            p = p->next;                        //移动 p 指针
            p_f = p_f->next;                    //继续移动 p 指针
        }
    }
    printf("%5d(left)\n",p->number);            //剩最后一个数 输出 
}
int main(int argc, const char *argv[])
{
    int n = 0;
    V_NODE *head = NULL;
    V_NODE *rear = NULL;

    printf("please input n:\n");
    scanf("%d",&n);
    rear = init_circle(n);
    j_game(rear);
    
    return 0;
}
