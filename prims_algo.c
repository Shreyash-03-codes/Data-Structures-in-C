#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#define V 5
int min(int weight[],bool visit[])
{
	int i;
	int min=INT_MAX;
	int ind;
	for(i=0;i<V;i++)
	{
		if(visit[i]==false&&weight[i]<min)
		{
			min=weight[i];
			ind=i;
  }
	}
	return ind;
}
void print(int parent[],int a[V][V])
{
	int i;
	printf("Edges\tWeight\n");
	for(i=1;i<V;i++)
	{
	printf("%d-%d\t%d\n",parent[i],i,a[i][parent[i]]);
}
}
void prims(int a[V][V])
{
	bool visit[V];
	int weight[V];
	int parent[V] ;
	int i,v,j;
	for(i=0;i<V;i++)
	{
		weight[i]=INT_MAX;
		visit[i]=false;
		weight[0]=0;
		parent[0]=-1;
	}
	for(j=0;j<V-1;j++)
	{
		int u=min(weight,visit);
		visit[u]=true;
		for(v=0;v<V;v++)
		{
			if(a[u][v]&&visit[v]==false&&a[u][v]<weight[v])
			{
				parent[v]=u;
				weight[v]=a[u][v];
				
			}
		}
 }
	print(parent,a);
}
void main()
{
	int a[V][V]={
	{0,2,0,6,0},
	{2,0,3,8,5},
	{0,3,0,0,7},
	{6,8,0,0,9},
	{0,5,7,9,0},
	};
	prims(a);
}
