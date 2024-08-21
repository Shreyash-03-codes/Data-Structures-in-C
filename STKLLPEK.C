#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;

int empty(struct node *top)
{
if(top==NULL)
{
return 1;
}
else
{
return 0;
}
}
int full()
{
struct node *n=(struct node*)malloc(sizeof(struct node));
if(n==NULL)
{
return 1;
}
else
{
return 0;
}
}
struct node *push(struct node *tp,int num)
{
if(full())
{
printf("stack is overflow!");
return 0;
}
else
{
struct node *ptr=(struct node *)malloc(sizeof(struct node));
ptr->data=num;
ptr->next=tp;
tp=ptr;
return tp;
}
}
int peek(int pos)
{
struct node *topp=top;
for(int i=0;(i<pos-1&&topp!=NULL);i++)
{
topp=topp->next;
}
if(topp!=NULL)
{
return topp->data;
}
else
{
return -1;
}
}
void main()
{
int i;
clrscr();
top=push(top,87);
top=push(top,23);
top=push(top,45);
top=push(top,89);
top=push(top,56);
for(i=1;i<=5;i++)
{
printf("element at %d is %d\n",i,peek(i));
}
getch();
}