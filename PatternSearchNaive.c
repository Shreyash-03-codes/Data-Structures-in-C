#include<stdio.h>
#include<string.h>
void patternSearch(char s[],char t[]){
	int i;
	int m=strlen(t);
	int n=strlen(s);
	for(i=0;i<n-m;i++){
		int j;
		for(j=0;j<m;j++)
		{
			if(s[i+j]!=t[j]){
				break;
			}
		}
		if(j==m){
			printf("the pattern is found at %d",i);
		}
	}
}
int main(){
	char s[20],b[5];
	printf("enter the text:\n");
	scanf("%s",&s);
	printf("enter the pattern text:\n");
	scanf("%s",&b);
	patternSearch(s,b);
	return 0;
}
