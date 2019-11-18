#include <iostream>
#pragma once
using namespace std;
typedef int DATA;
struct node
{
	DATA data;
	node* left;
	node* right;	
};
typedef node* BST_type;
void Initialize(BST_type &BST)
{
	BST = new node;
	BST = NULL;
}
BST_type Searching(BST_type BST, DATA X)
{
	BST_type t = BST;
	while(t != NULL && t->data != X)
		if(t->data > X) t = t->left;
		else t=t->right;
	return t;
}
void Add_Node(BST_type &BST, DATA X)
{
	if(BST == NULL)
	{
		BST = new node;
		if(BST != NULL)
		{
			BST->left = NULL;
			BST->right = NULL;
			BST->data = X;
		}
	}
	else
	{
		if(BST->data == X) return;
		else if(BST->data > X ) Add_Node(BST->left,X);
		else Add_Node(BST->right,X);
	}
}
void ReadTree(BST_type &BST)
{
	DATA x;
	cout<<"Nhap DATA: ";
	cin>>x;
	if(x != 0 )
	{
		Add_Node(BST,x);
		ReadTree(BST);
	}
}
void PrintLNR(BST_type BST)
{
	if(BST != NULL)
	{
		PrintLNR(BST->left);
		cout<<BST->data<<" ";
		PrintLNR(BST->right);
	}
}
