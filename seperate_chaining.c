#include<stdio.h>
#include<stdlib.h>
#define n 5
struct node{
	int data;
	struct node *next;
}*a[n],*newnode,*temp;
void insert(int num){
	int hash=num%n;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
	if(a[hash]==NULL)
	{
		a[hash]=newnode;
	}
	else
	{
		temp=a[hash];
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void print()
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==NULL)
		{
			printf("%d=NULL",i);
		}	
		else
		{
			temp=a[i];
			printf("%d=",i);
			while(temp!=NULL)
			{
				printf("->%d",temp->data);
				temp=temp->next;
			}
		}
		printf("\n");
	}
}
int search(int num)
{
	int hash=num%n;
	if(a[hash]==NULL)
	{
		return 0;
	}
	else
	{
		temp=a[hash];
		while(temp!=NULL)
		{
			if(temp->data==num)
			{
				return 1;
				break;
			}
			temp=temp->next;
		}
	}
}

int main()
{
	insert(67);
	insert(89);
	insert(34);
	insert(71);
	insert(90);
	print();
	if(search(77))
	{
		printf("number is found!\n");
	}
	else
	{
		printf("number is not found!\n");
	}
	return 0;
}
