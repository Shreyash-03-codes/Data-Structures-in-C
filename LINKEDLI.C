#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
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
struct node *f=(struct node*)malloc(sizeof(struct node));
struct node *s=(struct node*)malloc(sizeof(struct node));
struct node *t=(struct node*)malloc(sizeof(struct node));
struct node *e=(struct node*)malloc(sizeof(struct node));
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
traversal(f);
getch();
}