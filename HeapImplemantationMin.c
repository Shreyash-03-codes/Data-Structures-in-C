#include<stdio.h>
int size=0;
void swap(int *i,int *j){
	int temp=*i;
	*i=*j;
	*j=temp;
}
void heapify(int a[],int size,int i){
	if(size==1){
		return;
	}
	int small=i;
	int left=i*2+1;
	int right=i*2+2;
	if(left<size&&a[left]<a[small]){
		small=left;
	}
	if(right<size&&a[right]<a[small]){
		small=right;
	}
	if(small!=i){
		swap(&a[small],&a[i]);
		heapify(a,size,small);
	}
}
void insert(int a[],int num){
	int i;
	if(size==0){
		a[size]==num;
		size++;
	}
	else{
		a[size]=num;
		size++;
		for(i=(size-1)/2;i>=0;i--)
		{
			heapify(a,size,i);
		}
	}
}
void display(int a[]){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int a[20];
	insert(a,6);
	insert(a,7);
	insert(a,4);
	insert(a,3);
	insert(a,2);
 	insert(a,1);
 	display(a);
	return 0;
}
