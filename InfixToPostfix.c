//implementing stack data structure for infix to postfix conversion
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stack{
	int top;
	int size;
	char *a;
};
int precedence(char a){
	if(a=='^'){
		return 3;
	}

	if(a=='*' || a=='/'){
		return 3;
	}
	if(a=='+' || a=='-'){
		return 2;
	}
	return 1;
}
char *infixToPostfix(struct Stack *s,char infix[]){
	int i=0;
	int j=0;
	int size=strlen(infix)+1;
	char *postfix=(char*)malloc(size*sizeof(char));
	for(i=0;i<size;i++){
		if(infix[i]>='a' && infix[i]<='z' || infix[i]>='a' && infix[i]<='z' || infix[i]>=1 && infix[i]<=9){
			postfix[j++]=infix[i];
		}
		else if(infix[i]=='('){
			s->a[++s->top]=infix[i];
		}
		else if(infix[i]==')'){
			while(s->top>=0 && s->a[s->top]!='('){
				postfix[j++]=s->a[s->top--];
			}
			s->top--;
		}
		else if(precedence(infix[i])>precedence(s->a[s->top])){
			s->a[++s->top]=infix[i];
		}
	}
	while(s->top>=0){
		postfix[j++]=s->a[s->top--];
	}
	postfix[j]='\0';
	return postfix;
}

int main(){
	struct Stack *s=(struct Stack*)malloc(sizeof(struct Stack));
	s->size=20;
	s->top=-1;
	s->a=(char*)malloc(s->size*sizeof(char));
	char infix[20];
	printf("Enter the Infix Expression:\n");
	scanf("%s",&infix);
	printf("The Postfix expression of %s is %s",infix,infixToPostfix(s,infix));
	return 0;
}
