#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
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
printf("stack overflow!");
}
ptr->top++;
ptr->arr[ptr->top]=let;
}
char pop(struct stack *ptr)
{
if(empty(ptr))
{
return -1;
}
char let=ptr->arr[ptr->top];
ptr->top--;
return let;
}
char stacktop(struct stack *ptr)
{
return ptr->arr[ptr->top];
}
int prec(char op)
{
if(op=='*'||op=='/')
{
return 3;
}
else if(op=='+'||op=='-')
{
return 2;
}
return 1;
}
int oper(char let)
{
if(let=='+'||let=='-'||let=='*'||let=='/')
{
return 1;
}
return 0;
}
char *intopost(char *infix)
{
struct stack *ptr=(struct stack*)malloc(sizeof(struct stack));
ptr->size=20;
ptr->top=-1;
ptr->arr=(char*)malloc(ptr->size*sizeof(char));
char *postfix=(char*)malloc(strlen(infix)+1*sizeof(char));
int i=0;
int j=0;
while(infix[i]!='\0')
{
if(!oper(infix[i]))
{
postfix[j]=infix[i];
i++;
j++;
}
else
{
if(prec(infix[i])>prec(stacktop(ptr)))
{
push(ptr,infix[i]);
i++;
}
else
{
postfix[j]=pop(ptr);
j++;
}
}
}
while(!empty(ptr))
{
postfix[j]=pop(ptr);
j++;
}
postfix[j]='\0';
return postfix;
}
int main()
{
char infix[40];
printf("enter the infix  expression:\n");
scanf("%s",&infix);
printf("postfix of %s is %s",infix,intopost(infix));
return 0;
}
