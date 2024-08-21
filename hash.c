#include<stdio.h>
#define n 10
int a[n];
void init()
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=-1;
	}
}
void printarray()
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
			printf("%d is stored at %d\n",a[i],i+1);
		}
	}
}
void insert(int val)
{
	int hash=val%n;
	if(a[hash]==-1)
	{
		a[hash]=val;
	}
	else
	{
		printf("collision is occured!\n");
	}
}
void delet(int val)
{
	int hash=val%n;
	if(a[hash]==val)
	{
		a[hash]=-1;
		printf("%d is deleted successfully!\n",val);
	}
	else
	{
		printf("element is not present to delete!\n");
	}
	
}
void search(int val)
{
	int hash=val%n;
	if(a[hash]==val)
	{
		printf("%d is found at %d\n",val,hash+1);
	}
	else
	{
		printf("%d is not found!\n",val);
	}
}
int main()
{
	init();
	insert(14);
	insert(48);
	insert(33);
	insert(12);
	insert(11);
	insert(90);
	insert(27);
	insert(36);
	insert(59);
	printarray();
	delet(90);
	insert(80);
	printarray();
	search(36);
	return 0;
}
