#include <iostream>
#pragma once
using namespace std;
void KT_Node(BST_type BST,DATA X,int &kq)
{
	if(BST != NULL)
	{
		if(BST->data > X) KT_Node(BST->left,X,kq);
		if(BST->data == X) kq = 1;
		if(BST->data < X) KT_Node(BST->right,X,kq);
	}
}
void PrintNLR_K(BST_type BST,DATA X)
{
	if(BST != NULL)
	{
		cout<<BST->data<<" ";
		if(BST->data > X ) PrintNLR_K(BST->left,X);
		if(BST->data < X) PrintNLR_K(BST->right,X);
	}
}
void IN_cau_A(BST_type BST,DATA X)
{
	int kq = 0;
	KT_Node(BST,X,kq);
	if(kq == 1) PrintNLR_K(BST,X);
	else cout<<"\nKhong co Node "<<X<<" trong cay !!!"<<endl;
}
