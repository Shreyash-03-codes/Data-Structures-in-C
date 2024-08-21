#include<stdio.h>
int size=0;
void swap(int *i,int *j){
	int temp=*i;
	*i=*j;
	*j=temp;
}
void heapify(int a[],int n,int i){
	if(n==1){
		return;
	}
	int large=i;
	int left=i*2+1;
	int right=i*2+2;
	if(left<n&&a[left]>a[large]){
		large=left;
	}
	if(right<n&&a[left]>a[large]){
		large=right;
	}
	if(large!=i){
		swap(&a[i],&a[large]);
		heapify(a,n,large);
	}
}
void insert(int a[],int num){
	if(size==0){
		a[size]=num;
		size++;
	}
	else{
		a[size]=num;
		size++;
		int i;
		for(i=(size-1)/2;i>=0;i--){
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
	int a[10];
	insert(a,98);
	insert(a,79);
	insert(a,19);
	insert(a,49);
	insert(a,57);
	insert(a,65);
	insert(a,23);
	display(a);
	return 0;
}
