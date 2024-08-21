#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node * insertbet(struct node *head,int ele,int index)
{
struct node *p=(struct node*)malloc(sizeof(struct node));
struct node *ptr=(struct node*)malloc(sizeof(struct node));
p=head;
int i=0;
while(i!=index-1)
{
p=p->next;
i++;
}
ptr->data=ele;
ptr->next=p->next;
p->next=ptr;
return head;;
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
int num,index;
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
printf("eneter the index of insertion:\n");
scanf("%d",&index);
printf("enter the element to insert:\n");
scanf("%d",&num);
printf("elements before the insertion:\n");
traversal(f);
f=insertbet(f,num,index);
printf("elements after the insertion:\n");
traversal(f);
getch();
}
