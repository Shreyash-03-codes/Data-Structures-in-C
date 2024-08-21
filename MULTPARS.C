#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int match(char,char);
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
char let;
if(empty(ptr))
{
return 1;
}
let=ptr->arr[ptr->top];
ptr->top--;
return let;
}
int parmatch(char *exp)
{
int i;
char re;
struct stack *ptr;
ptr->top=-1;
ptr->size=20;
ptr->arr=(char*)malloc(ptr->size*sizeof(char));
for(i=0;exp[i]!='\0';i++)
{
if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
{
push(ptr,exp[i]);
}
if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
{
if(empty(ptr))
{
return 0;
}
re=pop(ptr);
if(!match(re,exp[i]))
{
return 0;
}
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
int match(char a,char b)
{
if(a=='('&&b==')')
{
return 1;
}
if(a=='{'&&b=='}')
{
return 1;
}
if(a=='['&&b==']')
{
return 1;
}
return 0;
}
int main()
{
char exp[20];
printf("enter the expression\n");
scanf("%s",&exp);
if(parmatch(exp))
{
printf("paranthesis is matched!");
}
else
{
printf("paranthesis is not matched!");
}

return 0;
}
