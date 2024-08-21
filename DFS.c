#include<stdio.h>
#include<stdlib.h>
int visit[7]={0,0,0,0,0,0,0};
int a[7][7]={
	{0,1,0,0,1,0,0},
	{1,0,1,1,1,1,0},
	{0,1,0,1,1,0,1},
	{0,1,1,0,0,1,1},
	{1,1,1,0,0,0,1},
	{0,1,0,1,0,0,0},
	{0,0,1,1,1,0,0},
};
void dsf(int node)
{
	int j;
	printf("%d\n",node);
	visit[node]=1;
	for(j=0;j<7;j++)
	{
		if(a[node][j]==1&& !visit[j])
		{
			dsf(j);
		}
	}
}
void main()
{
	dsf(6);
}
