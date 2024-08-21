#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node * insert(struct node * head,int num)
{
struct node * in=(struct node*)malloc(sizeof(struct node));
struct node * p=(struct node*)malloc(sizeof(struct node));
p=head;
while(p->next!=NULL)
{
p=p->next;
}
p->next=in;
in->data=num;
in->next=NULL;
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
int n;
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
printf("enter the element to insert:\n");
scanf("%d",&n);
printf("list before the insertion:\n");
traversal(f);
f=insert(f,n);
printf("list after the insertion:\n");
traversal(f);
getch();
}
