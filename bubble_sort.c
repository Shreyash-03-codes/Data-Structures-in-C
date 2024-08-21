#include<stdio.h>
void printarr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void bubblesort(int a[],int n)
{
	int i,j,temp,flag=0;
	for(i=0;i<n-1;i++)
	{
		printf("this is %d pass\n",i+1);
		flag=1;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=0;
			}
		}
		if(flag==1)
		{
			printf("the array is already sorted!\n");
			return;
		}
	}
}
void main()
{
	int arr[20];
	int n,i;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array before the bubble sort\n");
	printarr(arr,n);
	bubblesort(arr,n);
	printf("array after the bubble sort\n");
	printarr(arr,n);
}
