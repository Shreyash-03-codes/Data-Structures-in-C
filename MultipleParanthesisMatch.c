//implementing stack data structure for Multiple paranthesis matching
#include<stdio.h>
#include<stdlib.h>
struct Stack{
	int top;
	int size;
	char *a;
};
int isEmpty(struct Stack *s){
	if(s->top==-1){
		return 1;
	}
	return 0;
}
int isFull(struct Stack *s){
	if(s->top==s->size-1){
		return 1;
	}
	return 0;
}
void push(struct Stack* s,char let){
	if(isFull(s)){
		return;
	}
	s->top++;
	s->a[s->top]=let;
}
char pop(struct Stack *s){
	if(isEmpty(s)){
		return;
	}
	char let=s->a[s->top];
	s->top--;
	return let;
}
int match(char a,int b){
	if(a=='(' && b==')'){
		return 1;
	}
	if(a=='[' && b==']'){
		return 1;
	}
	if(a=='{' && b=='}'){
		return 1;
	}
	return 0;
}
int paranthesisMatch(struct Stack *s,char exp[]){
	int i;
	char poped;
	for(i=0;exp[i]!='\0';i++){
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
			push(s,exp[i]);
		}
		if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
			if(isEmpty(s)){
				return 0;
			}
			poped=pop(s);
			if(!match(poped,exp[i])){
				return 0;
			}
		}
	}
	if(isEmpty(s)){
		return 1;
	}
	return 0;
}
int main(){
	struct Stack *s=(struct Stack*)malloc(sizeof(struct Stack));
	s->size=20;
	s->top=-1;
	s->a=(char*)malloc(s->size*sizeof(char));
	char exp[20];
	printf("Enter The Multi Paranthesis Expression:\n");
	scanf("%s",&exp);
	int re=paranthesisMatch(s,exp);
	if(re){
		printf("Paranthesis is Matched!!");
	}
	else{
		printf("Paranthesis is not Matched!!");
	}
	return 0;
}
