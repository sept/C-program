/*指针链表形成，新的结点的插入和删除 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student                       //定义一个结构体
{
	int number;
	char name[20];
	struct student *next;
};

typedef	struct student STU;          //重命名

STU *create_link(int n)              //创建一个结构体链表
{
	int i = 0;
	STU *head = NULL;                //为固定头地址而设定一个指针 
	STU *p = NULL;                   //设定一个移动指针

	head = p = malloc(sizeof(STU));  //为结构体链表中的两个链表开辟与 结构体 相同的空间
	if(p == NULL)
	{
		perror("create");
		exit(0);
	}
	p->number = 1;                   //
	strcpy(p->name, "student");
	p->next = NULL;                  //设定第一个结构体中的指针为空  
	
	for(i=1; i<n; i++)               //循环输出n个结构体链表    
	{
		p->next = malloc(sizeof(STU));   //开辟下个结构体空间
		if(p->next == NULL)
		{
			perror("create");
			exit(0);
		}
		p->next->number = i+1;
		strcpy(p->next->name, "student");
		p->next->next = NULL;
		p = p->next;                       //移动指针p

	}

	return head;                           //返回到头地址 
}

void print_link(STU *p)                   //打印链表
{
    if (p == NULL)                        //判断 p 是否为空 
    {
        printf("empty.\n");
    }
	while(p != NULL)                         
	{
		printf("%-5d  %s\n", p->number,p->name);
		p = p->next;
	}
}
int get_num(STU *p)                    //数出链表的所有节点数
{
    int counter = 0;                   //累加结点个数

    while(p != NULL)
    {
          counter++;
          p = p->next;                 //移动指针
    }
     return counter;
}

STU *add_note(STU *p)                   //增加新的空间 加入链表
{
    STU *head = p;
    STU *p_c = NULL;                   //建立新的指针
    p_c = malloc(sizeof(STU));         //开辟新的空间同结构体相同大小
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
    if (p == NULL)                     //考虑如果链表为空
    {
        return p_c;                  //直接返回新的节点
    }
    if (p_c->number < p->number)       //如果p_c的number 比任何p的number 都小 即放在head 前面      
    {
        p_c->next = p;           
        return p_c;                   // 相当于 head = p_c;    return head;
    }
    while (p->next != NULL)                 
    {
        if (p_c->number < p->next->number)      //考虑新的结点处于 链表中间及后面的情况
        {
            break;
        }
        p = p->next;                //移动指针 继续判断下一个 p->next的number 
    }
    p_c->next = p->next;
    p->next = p_c;
    return head;
}
#if 1
STU *delete_note(STU *p)             //删除结点
{
    STU *head = p;
    STU *qq = NULL;                   //使用新建指针 为了指向找到的结点 然后释放该结点   
  //  int k = 0;                                //使用K 即取代 下面qq->number 最后再qq = p->next即可
    qq = malloc(sizeof(STU));     //若使用k 则不用开辟空间
    if (qq == NULL)
    {
        perror("create");
        exit(0);
    }
    printf("enter a number for delete: \n");
    scanf("%d",&qq->number);                   //如果直接让输入的数 存在新建的指针下 qq->number时 需要新开辟空间
//  scanf("%d",&k)    
    if (p == NULL)                      //若 链表为空
    {
        printf("empty.\n");
        return NULL;                   // 返回为空
        free(qq);                      //释放新建的空间
    }
    if (qq->number == p->number)          //考虑若删除的结点为第一个结点
//     if (k == p->number)
    {
        head = p->next;            
        free(p);
        free(qq);          
        return head;
    }
    while (p->next != NULL)           //结点为中间及最后的情况
    {
        if(p->next->number == qq->number)
        {
            break;
        }
        p = p->next;
   }
//    qq = p->next;
    if (p->next == NULL)                  //若输入的内容 超过了链表的本身
    {
        printf("no this number.\n");
        free(qq);
        return head;
    }
    p->next = p->next->next;
    free(qq);
    return head;
}
#endif

int main(void)
{
	STU *head = NULL;

	head = create_link(10);
	print_link(head);
//  head = add_note(head);   
    head = delete_note(head);
    print_link(head);

	return 0;
}
