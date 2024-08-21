#include<stdio.h>
#include<stdlib.h>
struct que
{
	int size;
	int f;
	int r;
	int *arr;
};
int full(struct que *q)
{
	if(q->r==q->size)
	{
		return 1;
	}
	return 0;
}
int empty(struct que *q)
{
	if(q->f==q->r)
	{
		return 1;
	}
	return 0;
}
void enque(struct que *q,int val)
{
	if(full(q))
	{
		printf("queue is full!");
	}
	q->r++;
	q->arr[q->r]=val;
	printf("enqueued element is %d\n",val);
	
}
int deque(struct que *q)
{
	int val=-1;
	if(empty(q))
	{
		printf("queue is empty!");
	}
	q->f++;
	val=q->arr[q->f];
	return val;
}
int main()
{
	struct que *q=(struct que*)malloc(sizeof(struct que));
	q->f=q->r=-1;
	q->size=5;
	q->arr=(int*)malloc(q->size*sizeof(int));
	printf("queue is full before the enque:%d\n",full(q));
	printf("queue is empty before the enque:%d\n\n",empty(q));
	enque(q,56);
	enque(q,48);
	enque(q,85);
	enque(q,39);
	enque(q,32);
	printf("\nqueue is full after the enque:%d\n",full(q));
	printf("queue is empty after the enque:%d\n",empty(q));
	printf("\ndequeued element is %d\n",deque(q));
	printf("dequeued element is %d\n",deque(q));
	printf("dequeued element is %d\n",deque(q));
	printf("dequeued element is %d\n",deque(q));
	printf("dequeued element is %d\n",deque(q));
	return 0;
}
