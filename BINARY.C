#include<stdio.h>
#include<conio.h>
int binary(int arr[],int size,int ele)
{
int i,low,mid,high;
low=0;
high=size;
while(low<=high)
{
mid=(low+high)/2;
if(arr[mid]==ele)
{
return mid;
}
if(arr[mid]<high)
{
low=mid+1;
}
else
{
high=mid-1;
}
}
return 1;
}
void main()
{
int arr[20],size,ele,result,i;
clrscr();
printf("enter the size of array:\n");
scanf("%d",&size);
printf("enter the array elements in ascending order:\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the element which we have to search:\n");
scanf("%d",&ele);
result=binary(arr,size,ele);
if(result==1)
{
printf("match is not found!");
}
else
{
printf("the %d is found at %d",ele,result);
}
getch();
}