#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void dis()
{
	while(top!=NULL)
	{
		printf("element :%d\n",top->data);
		top=top->next;
	}
}
int full()
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		return 1;
	}
	return 0;
}
int empty(struct node *top)
{
	if(top==NULL)
	{
		return 1;
	}
	return 0;
}
struct node *push(struct node *tp,int val)
{
	if(full())
	{
		printf("stackoverflow!\n");
	}
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=val;
	ptr->next=tp;
	tp=ptr;
	return tp;
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
int main()
{
top=push(top,55);
top=push(top,45);
top=push(top,32);
top=push(top,54);
top=push(top,67);
	
	printf("poped element is %d\n",pop(top));
	printf("poped element is %d\n",pop(top));
	dis();
	return 0;
}
