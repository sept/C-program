/*指针链表形成和插入 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
	int number;
	char name[20];
	struct student *next;
};

typedef	struct student STU;

STU *create_link(int n)
{
	int i = 0;
	STU *head = NULL;
	STU *p = NULL;

	head = p = malloc(sizeof(STU));              //在栈里开辟 空间
	if(p == NULL)
	{
		perror("create");                       //如果开辟不成功则会输出“create”
		exit(0);
	}
	p->number = 1;                              
	strcpy(p->name, "student");
	p->next = NULL;
	
	for(i=1; i<n; i++)
	{
		p->next = malloc(sizeof(STU));          //在开辟一个结构体类型大小空间后 接着链着开辟相同大小的空间
		if(p->next == NULL)
		{
			perror("create");
			exit(0);
		}
		p->next->number = i+1;                  //下个结构体里的number 较之前一个加一
		strcpy(p->next->name, "student");
		p->next->next = NULL;                   
		p = p->next;                            //移动 P 的位置 到下一个

	}

	return head;                                //返回head 固定链表位置
}

void print_link(STU *p)
{
	while(p != NULL)
	{
		printf("%-5d  %s\n", p->number,p->name);
		p = p->next;
	}
}
int get_num(STU *p)                    //数出链表的所有节点数
{
    int counter = 0;

    while(p != NULL)
    {
          counter++;
          p = p->next;
    }
     return counter;
}
/*为了判断插入的空间的大小介于两个空间的number，
即 前面大的和后面小的都要顾及 然后会赋值 使之插入其中
             故使用p和p->next*/
STU *add_note(STU *p)
{
    STU *head = p;
    STU *p_c = NULL;                    
    p_c = malloc(sizeof(STU));           //出现新的 p_c 结构体类型空间
    if(p_c == NULL)
    {
        perror("create\n");
        exit(0);
    }
    printf("input a number： \n");
    scanf("%d",&p_c->number);
    printf("input a name: \n");
    scanf("%s",p_c->name);
    p_c->next = NULL;
    
    if (p_c->number < p->number)       //如果p_c的number 比任何p的number 都小 即放在head 前面      
    {
        p_c->next = p;           
        return p_c;                   // 相当于 head = p_c;    return head;
    }
    while (p->next != NULL)            //考虑 p_c 在中间及后面的情况
    {
        if (p_c->number < p->next->number)
        {
            break;
        }
        p = p->next;                //继续判断下一个 p->next的number 
    }
    p_c->next = p->next;
    p->next = p_c;
    return head;

}
int main(void)
{


	STU *head = NULL;

	head = create_link(10);
	print_link(head);
    head = add_note(head);
    print_link(head);

	return 0;
}
