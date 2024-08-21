#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
int size;
int top;
int *arr;
};
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

void main()
{
struct stack *s;
clrscr();
s->size=3;
s->top=-1;
s->arr=(int*)malloc(s->size*sizeof(int));
s->arr[0]=55;
s->top++;
s->arr[1]=43;
s->top++;
s->arr[2]=3;
s->top++;
int re=empty(s);
if(re==1)
{
printf("stack is empty!");
}
int res=full(s);
if(res==1)
{
printf("stack is full!");
}
getch();
}