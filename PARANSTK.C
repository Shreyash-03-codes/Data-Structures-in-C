#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
int size;
int top;
char *arr;
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
return 0;
}
void push(struct stack *ptr,char let)
{
if(full(ptr))
{
printf("stackoverflow!");
}
ptr->top++;
ptr->arr[ptr->top]=let;
}
char pop(struct stack *ptr)
{
char let;
if(empty(ptr))
{
printf("stack underflow!");
return -1;
}
let=ptr->arr[ptr->top];
ptr->top--;
return let;
}
int parmatch(char *exp)
{
int i;
struct stack *ptr;
ptr->size=100;
ptr->top=-1;
ptr->arr=(char*)malloc(ptr->size*sizeof(char));
for(i=0;exp[i]!='\0';i++)
{
if(exp[i]=='(')
{
push(ptr,'(');
}
else if(exp[i]==')')
{
pop(ptr);
}
}
if(empty(ptr))
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
char exp[50];
clrscr();
printf("enter the expression:\n");
scanf("%s",&exp);
if(parmatch(exp))
{
printf("paranthes is matched!");
}
else
{
printf("paranthes is not matched!");
}
getch();
}