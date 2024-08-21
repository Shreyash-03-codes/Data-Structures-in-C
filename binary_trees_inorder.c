#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *create(int val)
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=val;
	n->left=NULL;
	n->right=NULL;
	return n;
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
		
	}
}
void main()
{
	struct node *p1=create(10);
	struct node *p2=create(20);
	struct node *p3=create(30);
	struct node *p4=create(40);
	struct node *p5=create(50);
	struct node *p6=create(60);
	struct node *p7=create(70);
	struct node *p8=create(80);
	struct node *p9=create(90);
	struct node *p10=create(100);
	struct node *p11=create(110);
	struct node *p12=create(120);
	struct node *p13=create(130);
	struct node *p14=create(140);
	struct node *p15=create(150);
	p1->left=p2;
	p1->right=p3;
	
	p2->left=p4;
	p2->right=p5;
	
	p3->left=p6;
	p3->right=p7;
	
	p4->left=p8;
	p4->right=p9;
	
	p5->left=p10;
	p5->right=p11;
	
	p6->left=p12;
	p6->right=p13;
	
	p7->left=p14;
	p7->right=p15;
	
	p8->left=NULL;
	p8->right=NULL;
	
	p9->left=NULL;
	p9->right=NULL;
	
	p10->left=NULL;
	p10->right=NULL;
	
	p11->left=NULL;
	p11->right=NULL;
	
	p12->left=NULL;
	p12->right=NULL;
	
	p13->left=NULL;
	p13->right=NULL;
	
	p14->left=NULL;
	p14->right=NULL;
	
	p15->left=NULL;
	p15->right=NULL;
	
	inorder(p1);
}
