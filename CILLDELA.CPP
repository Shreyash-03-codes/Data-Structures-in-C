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
struct node *del(struct node *head)
{
struct node *ptr,*p;
p=head->next;
ptr=head;
while(p->next!=head)
{
p=p->next;
ptr=ptr->next;
}
ptr->next=p->next;
free(p);
return head;
}
void main()
{
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
printf("the element beforer the deletion:\n");
dis(f);
f=del(f);
printf("the element after the deletion:\n");
dis(f);
getch();
}

