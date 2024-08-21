#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct myarr
{
int total;
int used;
int *ptr;
};
void carr(struct myarr *a,int ts,int us)
{
a->total=ts;
a->used=us;
a->ptr=(int*)malloc(us*sizeof(int));
}
void inarr(struct myarr *a)
{
int i,n;
printf("enter the array elements :\n");
for(i=0;i<(a->used);i++)
{
scanf("%d",&n);
a->ptr[i]=n;
}
}
void show(struct myarr *a)
{
int i;
printf("entered array elements are:\n");
for(i=0;i<(a->used);i++)
{
printf("%d\n",a->ptr[i]);
}
}
void sum(struct myarr *a)
{
int i,sum=0;
for(i=0;i<(a->used);i++)
{
sum=sum+a->ptr[i];
}
printf("the sum of array elements are:%d",sum);
}
void reverse(struct myarr *a)
{
int i;
printf("\nthe array elements in reverse:\n");
for(i=(a->used);i>0;i--)
{
printf("%d\n",a->ptr[i]);
}
}
void large(struct myarr *a)
{
int i,large;
large=a->ptr[0];
for(i=0;i<(a->used);i++)
{
if(large<a->ptr[i])
{
large=a->ptr[i];
}
}
printf("the large element is %d\n",large);
}
void main()
{
struct myarr mark;
int t,u;
clrscr();
printf("enter the total size of array:\n");
scanf("%d",&t);
printf("enter the using size of array:\n");
scanf("%d",&u);
carr(&mark,t,u);
inarr(&mark);
show(&mark);
sum(&mark);
reverse(&mark);
large(&mark);
getch();
}