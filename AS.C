#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//void carr(struct myarr *,int,int);
//void inarr(struct myarr *);
//void showarr(struct myarr *);
struct myarr
{
int total;
int used;
int *ptr;
};
void creatarray(struct myarr *a,int ts,int us)
{
a->total=ts;
a->used=us;
a->ptr=(int*)malloc(us*sizeof(int));
}
void inarr(struct myarr *a)
{
int i,n;
printf("enter the array elements:\n");
for(i=0;i<(a->used);i++)
{
scanf("%d",&n);
(a->ptr)[i]=n;
}
}
void showarr(struct myarr *a)
{
int i;
printf("the entered array elements are:\n");
for(i=0;i<a->used;i++)
{
printf("%d\n",(a->ptr)[i]);
}
}
void main()
{
int u,t;
struct myarr mark;
clrscr();
printf("enter the total size of array:\n");
scanf("%d",&t);
printf("enetr the using size of array:\n");
scanf("%d",&u);
creatarray(&mark,t,u);
inarr(&mark);
showarr(&mark);
getch();
}