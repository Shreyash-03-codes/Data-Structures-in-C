#include<stdio.h>
#include<conio.h>
int linear(int arr[],int size,int ele)
{
int i;
for(i=0;i<size;i++)
{
  if(arr[i]==ele)
  {
  return i;
  }
}
return 1;
}
void main()
{
int arr[20],i,size,ele,result;
clrscr();
printf("enter the size of array:\n");
scanf("%d",&size);
printf("enter the array elements:\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the element which have to search:\n");
scanf("%d",&ele);
result=linear(arr,size,ele);
if(result==1)
{
printf("the element is does not exixts!");
}
else
{
printf("the %d is found at %d",ele,result);
}
getch();
}