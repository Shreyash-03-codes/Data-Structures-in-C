#include<stdio.h>
void printarray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void insertionsort(int arr[],int n)
{
	int i,j;
	int key;
	for(i=1;i<=n-1;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main()
{
	int i,n,arr[20];
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elements before the insertion sort\n");
	printarray(arr,n);
	insertionsort(arr,n);
	printf("array elements after the insertion sort\n");
	printarray(arr,n);
	return 0;
}
