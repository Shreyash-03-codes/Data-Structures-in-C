#include<stdio.h>
#include<conio.h>
void display(int arr[],int size)
{
int i;
for(i=0;i<size;i++)
{
printf("%d  ",arr[i]);
}
printf("\n");
}
int insert(int arr[],int size,int capacity,int element,int index)
{
int i;
if(size>=capacity)
{
return -1;
}
for(i=size;i>=index;i--)
{
arr[i+1]=arr[i];
}
arr[index]=element;
return 1;
}
void main()
{
int a[100],size,element,index;
int i;
clrscr();
printf("enter the size of array:\n");
scanf("%d",&size);
printf("enetr the array elements :\n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter the insertion element :\n");
scanf("%d",&element);
printf("enter the index of insretion element:\n");
scanf("%d",&index);
printf("array elements before insertion:\n");
display(a,size);
insert(a,size,100,element,index);
size+=1;
printf("array elements after insertion:\n");
display(a,size);
getch();
}