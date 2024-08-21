#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct que
{
int size;
int r;
int f;
int *arr;
};
int empty(struct que *q)
{
if(q->r==q->f)
{
return 1;
}
return 0;
}
int full(struct que *q)
{
if((q->r+1)%q->size==q->f)
{
return 1;
}
return 0;
}
void enqueue(struct que *q,int val)
{
if(full(q))
{
printf("queue overflow!\n");
}
q->r=(q->r+1)%q->size;
q->arr[q->r]=val;
}
int deque(struct que *q)
{
int val;
if(empty(q))
{
printf("queue underflow!\n");
}
q->f=(q->f+1)%q->size;
val=q->arr[q->f];
return val;
}
void main()
{
struct que q;
q.size=4;
q.f=q.r=-1;
q.arr=(int*)malloc(q.size*sizeof(int));
clrscr();
printf("queue is empty before the enqueue :%d\n",empty(&q));
printf("queue is full before the enqueue :%d\n",full(&q));
enqueue(&q,55);
enqueue(&q,67);
enqueue(&q,19);
printf("deueued element %d\n",deque(&q));
printf("deueued element %d\n",deque(&q));
printf("deueued element %d\n",deque(&q));
enqueue(&q,83);
enqueue(&q,23);
enqueue(&q,88);
if(empty(&q))
{
printf("queue is empty");
}
if(full(&q))
{
printf("queue is full ");
}
getch();
}