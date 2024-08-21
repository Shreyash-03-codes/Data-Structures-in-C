#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	printf("Enter the expression:\n");
	scanf("%s",&a);
	int i,j;
	char temp;
	for(j=strlen(a)-1,i=0;i<=j;i++,j--){
		if(a[i]=='('){
			a[i]=')';
		}
		else if(a[i]==')'){
			a[i]='(';
		}
		if(a[j]=='('){
			a[j]=')';
		}
		else if(a[j]==')'){
			a[j]='(';
		}
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("%s",a);
}
