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
int pop(struct node *tp)
{
int num;
if(tp==NULL)
{
printf("stack underflow!\n");
return 0;
}
else
{
struct node *ptr=tp;
top=tp->next;
num=ptr->data;
free(ptr);
return num;
}
}
void dis(struct node *ptr)
{
while(ptr!=NULL)
{
printf("element :%d\n",ptr->data);
ptr=ptr->next;
}
}
int main()
{
top=push(top,87);
top=push(top,23);
top=push(top,45);
top=push(top,89);
top=push(top,56);
printf("the poped element is %d\n",pop(top));
dis(top);
getch();
return 0;
}
