#include<stdio.h>
#include<stdlib.h>
struct stack
{
int size;
int top;
int *arr;
};
int full(struct stack *ptr)
{
if(ptr->top==ptr->size-1)
{
return 1;
}
return 0;
}
int empty(struct stack *ptr)
{
if(ptr->top==-1)
{
return 1;
}
return 0;;
}
void push(struct stack *ptr,int num)
{
if(full(ptr))
{
printf("stackoverflow!");
}
else
{
ptr->top++;
ptr->arr[ptr->top]=num;
printf("%d is pushed\n",num);
}
}
int pop(struct stack *ptr)
{
if(empty(ptr))
{
printf("stackunderflow!");
return -1;
}
else
{
int val=ptr->arr[ptr->top];
ptr->top--;
return val;
}
}
int main()
{
struct stack *s=(struct stack*)malloc(sizeof(struct stack));

s->size=5;
s->top=-1;
s->arr=(int*)malloc(s->size*sizeof(int));
printf("before the pushing element in stack is full:%d\n",full(s));
printf("before the pushing element in stack is empty:%d\n",empty(s));
push(s,1);
push(s,2);
push(s,3);
push(s,4);
push(s,5);
printf("after the pushing element in stack is full:%d\n",full(s));
printf("after the pushing element in stack is empty:%d\n",empty(s));
printf("popped element is %d\n",pop(s));
printf("popped element is %d\n",pop(s));
printf("popped element is %d\n",pop(s));
printf("popped element is %d\n",pop(s));
printf("popped element is %d\n",pop(s));
return 0;
}
