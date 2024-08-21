//implementing Queue Data Structure by Linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Que{
	struct Node *r;
	struct Node *f;
};
struct Node *create(int num){
	struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=num;
	newNode->next=NULL;
	return newNode;
}
int isFull(){
	struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
	if(temp==NULL){
		return 1;
	}
	return 0;
}
int isEmpty(struct Que *q){
	if(q->r==NULL){
		return 1;
	}
	return 0;
}
void enque(struct Que *q,int num){
	if(isFull(q)){
		printf("Queue is Full!\n");
	}
	struct Node *newNode=create(num);
	if(q->r==NULL){
		q->r=q->f=newNode;
	}
	q->r->next=newNode;
	q->r=newNode;
	printf("%d is Enqueued\n",num);
}
int deque(struct Que *q){
	if(isEmpty(q)){
		return -1;
	}
	struct Node *temp=q->f;
	q->f=q->f->next;
	int num=temp->data;
	return num;
}
int main(){
	struct Que *q=(struct Que*)malloc(sizeof(struct Que));
	q->f=q->r=NULL;
	enque(q,677);
	enque(q,989);
	enque(q,990);
	enque(q,875);
	enque(q,232);
	enque(q,456);
	enque(q,356);
	enque(q,342);
	enque(q,534);
	enque(q,123);
	enque(q,987);
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	printf("Dequeued Element is %d\n",deque(q));
	return 0;
}
