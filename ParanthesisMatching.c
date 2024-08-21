//implementing the stack data structure for the paranthesis matching
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
void push(struct Stack *s,char let){
	if(isEmpty(s)){
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
int paranthesisMatch(struct Stack *s,char exp[]){
	int i;
	for(i=0;exp[i]!='\0';i++){
		if(exp[i]=='('){
			push(s,exp[i]);
		}
		if(exp[i]==')'){
			if(isEmpty(s)){
				return 0;
			}
			pop(s);
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
	printf("Enter The Paranthesis Expression:\n");
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
