#include<stdio.h>
void printarray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
selectionsort(int a[],int n)
{
	int i,temp,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
void main()
{
	int arr[10],i,n;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elements before the selection sort\n");
	printarray(arr,n);
	selectionsort(arr,n);
	printf("\narray elements after the selection sort\n");
	printarray(arr,n);
	
}
