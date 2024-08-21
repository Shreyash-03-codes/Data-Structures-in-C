#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *del(struct node*head,int val)
{
struct node *p=head;
struct node *q=head->next;
while(q->data!=val&&q->next!=NULL)
{
p=p->next;
q=q->next;
}
if(q->data==val)
{
p->next=q->next;
free(q);
}
else
{
printf("element not found:\n");
}
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
int num;
struct node * f=(struct node*)malloc(sizeof(struct node));
struct node * s=(struct node*)malloc(sizeof(struct node));
struct node * t=(struct node*)malloc(sizeof(struct node));
struct node * e=(struct node*)malloc(sizeof(struct node));
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
printf("enter the element to delete:\n");
scanf("%d",&num);
printf("list before the deletion:\n");
traversal(f);
f=del(f,num);
printf("list after the deletion:\n");
traversal(f);
getch();
}

