#include<stdio.h>
#include<conio.h>
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
else
{
return 0;
}
}
int empty(struct stack *ptr)
{
if(ptr->top==-1)
{
return 1;
}
else
{
return 0;
}
}
void push(struct stack *ptr,int val)
{
if(full(ptr))
{
printf("stack overflow!");
}
else
{
ptr->top++;
ptr->arr[ptr->top]=val;
}
}
int topmost(struct stack *ptr)
{
return ptr->arr[ptr->top];
}
int bottom(struct stack *ptr)
{
return ptr->arr[0];
}
void main()
{
struct stack *s=(struct stack*)malloc(sizeof(struct stack));
clrscr();
s->size=5;
s->top=-1;
s->arr=(int*)malloc(s->size*sizeof(int));
printf("stack is full before the pushing %d\n",full(s));
printf("stack is empty before thr pushing %d\n",empty(s));
push(s,6);
push(s,7);
push(s,12);
push(s,34);
push(s,90);
printf("stack is full after the pushing %d\n",full(s));
printf("stack is empty after the pushing %d\n",empty(s));
printf("the top most element is %d\n",topmost(s));
printf("the bottom most element is %d\n",bottom(s));
getch();
}