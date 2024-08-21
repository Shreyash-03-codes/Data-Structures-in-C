#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d  ",root->data);
		inorder(root->right);
	}
}
struct node *create(int val)
{
	struct node *ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=val;
	ptr->left=NULL;
	ptr->right=NULL;
	return ptr;
}
int is_bst(struct node *root)
{
	static struct node *prev=NULL;
	if(root!=NULL)
	{
		if(!is_bst(root->left))
		{
			return 0;
		}
	
		if(prev!=NULL && root->data <= prev->data)
		{
			return 0;
		}
		prev=root;
		return is_bst(root->right);
	}
	else
	{
		return 1;
	}
}
struct node *search(struct node *root,int val)
{
	while(root!=NULL)
	{
		if(val==root->data)
		{
			return root;
		}
		else if(val<root->data)
		{
			root=root->left;
		}
		else
		{
			root=root->right;
		}
	}
}
void main()
{
	struct node *p1=create(60);
	struct node *p2=create(40);
	struct node *p3=create(80);
	struct node *p4=create(30);
	struct node *p5=create(50);
	struct node *p6=create(70);
	struct node *p7=create(100);
	
	p1->left=p2;
	p1->right=p3;
	
	p2->left=p4;
	p2->right=p5;
	
	p3->left=p6;
	p3->right=p7;
	
	inorder(p1);
	if(is_bst(p1))
	{
		printf("\nthis tree is binary search tree!");
	}
	else
	{
		printf("\nthis tree is not binary search tree!");
	
	}
	struct node *n=search(p1,56);
	if(n!=NULL)
	{
		printf("\n%d is found!",n->data);
	}
	else
	{
		printf("\nnumber not found!");
	}
}
