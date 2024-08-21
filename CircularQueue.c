//implementing circular queue data Structure
#include<stdio.h>
#include<stdlib.h>
struct que{
	int size;
	int f;
	int r;
	int *a;
};
int isFull(struct que *q){
	if(q->r==q->size){
		return 1;
	}
	return 0;
}
int isEmpty(struct que *q){
	if(q->r==q->f){
		return 1;
	}
	return 0;
}
void enque(struct que *q,int num){
	if(isFull(q)){
		printf("Queue is Full!\n");
	}
	q->r=(q->r+1)%q->size;
	q->a[q->r]=num;
	printf("%d is Enqueued!!\n",num);
}
int deque(struct que *q){
	if(isEmpty(q)){
		return -1;
	}
	q->f=(q->f+1)%q->size;
	int num=q->a[q->f];
	return num;
}
int main(){
	struct que *q=(struct que*)malloc(sizeof(struct que));
	q->size=50;
	q->r=q->f=-1;
	q->a=(int*)malloc(q->size*sizeof(int));
	enque(q,567);
	enque(q,567);
	enque(q,123);
	enque(q,432);
	enque(q,908);
	enque(q,997);
	enque(q,777);
	enque(q,230);
	enque(q,691);
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	return 0;
}
