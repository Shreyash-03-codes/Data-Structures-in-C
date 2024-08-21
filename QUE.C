#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
	struct node *f;
	struct node *r;
void enque(int val)
{
	struct node *ptr=(	struct node*)malloc(sizeof(	struct node));
	if(ptr==NULL)
	{
		printf("queue is full!");
	}
	ptr->data=val;
	ptr->next=NULL;
	if(f==NULL)
	{
		f=r=ptr;
	}
	else
	{
		r->next=ptr;
		r=ptr;
	}
}
int deque()
{
	int val;
	struct node *ptr=f;

	if(f==NULL)
	{
		printf("queue is empty!");
	}
	val=ptr->data;
	f=f->next;
	free(ptr);
	return val;
}
void dis(struct node *ptr)
{
	while(ptr!=NULL)
	{
		printf("element %d\n",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	enque(51);
	enque(82);
	enque(86);
	enque(23);
	enque(45);
	dis(f);
	printf("dequeued element is %d\n",deque());
	printf("dequeued element is %d\n",deque());
	printf("dequeued element is %d\n",deque());
	printf("dequeued element is %d\n",deque());
	printf("dequeued element is %d\n",deque());	
	return 0;
}
