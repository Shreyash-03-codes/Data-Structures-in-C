#include<stdio.h>
#include<stdlib.h>
struct que
{
	int f;
	int r;
	int size;
	int *arr;
};
int full(struct que *q)
{
	if(q->r==q->size-1)
	{
		return 1;
	}
	return 0;
}
int empty(struct que *q)
{
	if(q->r==q->f)
	{
		return 1;
	}
	return 0;
}
void enqueR(struct que *q,int val)
{

	q->r++;
	q->arr[q->r]=val;
	printf("enqueued by rear element is %d\n",val);
}
void enqueF(struct que *q,int val)
{

	q->f--;
	q->arr[q->f]=val;
	printf("enqueued by front element is %d\n",val);
}
int dequeF(struct que *q)
{
	int val;

	q->f++;
	val=q->arr[q->f];
	return val;
}
int dequeR(struct que *q)
{
	int val;

	q->r--;
	val=q->arr[q->r];
	return val;
}
void main()
{
	struct que *q=(struct que*)malloc(sizeof(struct que));
	q->size=5;
	q->f=q->r=0;
	q->arr=(int*)malloc(q->size*sizeof(int));
	enqueR(q,556);
	enqueR(q,897);
	enqueR(q,223);
	enqueR(q,673);
	printf("\ndequeued by front element is %d\n",dequeF(q));
	printf("dequeued by front element is %d\n",dequeF(q));
	printf("dequeued by front element is %d\n",dequeF(q));
	printf("dequeued by front element is %d\n\n",dequeF(q));
	enqueF(q,676);
	enqueF(q,236);
	enqueF(q,456);
	enqueF(q,443);
	printf("\ndequeued by rear element is %d\n",dequeR(q));
	printf("dequeued by rear element is %d\n",dequeR(q));
	printf("dequeued by rear element is %d\n",dequeR(q));
	printf("dequeued by rear element is %d\n",dequeR(q));
}
