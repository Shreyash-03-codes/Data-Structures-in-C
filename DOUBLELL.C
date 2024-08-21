#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *pre;
};
void dis1(struct node *head)
{
while(head!=NULL)
{
printf("%d ",head->data);
head=head->next;
}
}
void dis2(struct node *head)
{
while(head!=NULL)
{
printf("%d ",head->data);
head=head->pre;
}
}
void main()
{
struct node *f=(struct node*)malloc(sizeof(struct node));
struct node *s=(struct node*)malloc(sizeof(struct node));
struct node *d=(struct node*)malloc(sizeof(struct node));
struct node *c=(struct node*)malloc(sizeof(struct node));
struct node *b=(struct node*)malloc(sizeof(struct node));
clrscr();
printf("enter the element:\n");
scanf("%d",&f->data);
f->next=s;
f->pre=NULL;
printf("enter the element:\n");
scanf("%d",&s->data);
s->next=d;
s->pre=f;
printf("enter the element:\n");
scanf("%d",&d->data);
d->next=c;
d->pre=s;
printf("enter the element:\n");
scanf("%d",&c->data);
c->next=b;
c->pre=d;
printf("enter the element:\n");
scanf("%d",&b->data);
b->next=NULL;
b->pre=c;
printf("elements in doubly linked list in method 1:\n");
dis1(f);
printf("\nelements in doubly linked list in method 2:\n");
dis2(b);
getch();
}
