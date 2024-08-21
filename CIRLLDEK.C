#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
void dis(struct node *head)
{
struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr=head;
do
{
printf("%d\n",ptr->data);
ptr=ptr->next;
}while(ptr!=head);
}
struct node *del(struct node *head,int num)
{
struct node *ptr,*p;
ptr=head;
p=head->next;
do
{
p=p->next;
ptr=ptr->next;
}while(p->data!=num&&p->next!=head);
if(p->data!=num)
{
printf("no match found!");
}
ptr->next=p->next;
free(p);
return head;
}
void main()
{
int num;
struct node *f=(struct node*)malloc(sizeof(struct node));
struct node *s=(struct node*)malloc(sizeof(struct node));
struct node *d=(struct node*)malloc(sizeof(struct node));
struct node *c=(struct node*)malloc(sizeof(struct node));
struct node *b=(struct node*)malloc(sizeof(struct node));
clrscr();
printf("enter the element1:\n");
scanf("%d",&f->data);
f->next=s;
printf("enter the element2:\n");
scanf("%d",&s->data);
s->next=d;
printf("enter the element3:\n");
scanf("%d",&d->data);
d->next=c;
printf("enter the element4:\n");
scanf("%d",&c->data);
c->next=b;
printf("enter the element5:\n");
scanf("%d",&b->data);
b->next=f;
printf("enter the element to delete:\n");
scanf("%d",&num);
printf("the element beforer the deletion:\n");
dis(f);
f=del(f,num);
printf("the element after the deletion:\n");
dis(f);
getch();
}

