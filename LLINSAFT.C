#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node * insert(struct node * head,struct node *pre,int num)
{
struct node * p=(struct node*)malloc(sizeof(struct node));
p->next=pre->next;
pre->next=p;
p->data=num;
return head;
}
void traversal(struct node *ptr)
{
while(ptr!=NULL)
{
printf("element:%d\n",ptr->data);
ptr=ptr->next;
}
}
void main()
{
struct node *f,*s,*t,*e;
clrscr();
printf("enter the number:\n");
scanf("%d",&f->data);
f->next=s;
printf("enter the next element:\n");
scanf("%d",&s->data);
s->next=t;
printf("enter the next element:\n");
scanf("%d",&t->data);
t->next=e;
printf("enter the next element:\n");
scanf("%d",&e->data);
e->next=NULL;
printf("list before the insertion:\n");
traversal(f);
f=insert(f,s,67);
printf("list after the insertion:\n");
traversal(f);
getch();
}

