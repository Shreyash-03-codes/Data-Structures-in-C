#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void setval(struct myarray*);
void show(struct myarray*);
void createarray(struct myarray *,int,int);
struct myarray
{
int total_size;
int used_size;
int *ptr;
};
void createarray(struct myarray *a,int tsize,int usize)
{
(*a).total_size=tsize;
(*a).used_size=usize;
(*a).ptr=(int*)malloc(tsize*sizeof(int));
}
void show(struct myarray *a)
{
int i;
for( i=0;i<a->used_size;i++)
{
printf("%d\n",(a->ptr)[i]);
}
}
void setval(struct myarray *a)
{
int n,i;
printf("enter the array elements:\n");
for( i=0;i< a->used_size;i++)
{
scanf("%d",&n);
(a->ptr)[i]=n;
}
}
void main()
{
struct myarray marks;
int ts,us;
clrscr();
printf("enter the total size:\n");
scanf("%d",&ts);
printf("enter the size for use:\n");
scanf("%d",&us);
createarray(&marks,ts,us);
setval(&marks);
printf("entered marks:\n");
show(&marks);
getch();
}
