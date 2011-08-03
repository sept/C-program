#include<stdio.h>
#include <stdlib.h>

struct circle 
{
    int number;
    struct circle *next;
};

typedef struct circle V_NODE;

V_NODE *init_circle(int n)
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
    int out_counter = 0;
    int interval = 4;
    V_NODE *p = p_f->next;

    while (p != p->next )
    {
        out_counter++;
        if (out_counter == interval)
        {
            out_counter = 0;
            printf("%5d(out)\n",p->number);
            p_f->next = p->next;
            free(p);
            p = p_f->next;
        }
        else
        {
            printf("%5d",p->number);
            p = p->next;
            p_f = p_f->next;
        }
    }
    printf("%5d(left)\n",p->number);
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
