#include<stdio.h>
#include<conio.h>
void display(int arr[],int size)
{
int i;
for(i=0;i<size;i++)
{
printf("%d ",arr[i]);
}
}
void delet(int arr[],int size,int index)
{
int i;
if(size<index)
{
printf("index does not exixsts!");
}
for(i=index;i<size-1;i++)
{
arr[i]=arr[i+1];
}
}
void main()
{
int i,arr[20],size,index;
clrscr();
printf("enter the array size:\n");
scanf("%d",&size);
printf("enter the array elements:\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the index of deletion:\n");
scanf("%d",&index);
printf("array elements before deletion:\n");
display(arr,size);
delet(arr,size,index);
printf("\narray elements after deletion:\n");
size-=1;
display(arr,size);
getch();
}