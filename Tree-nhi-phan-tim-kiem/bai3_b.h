#include <iostream>
#pragma once
#include "bai3_a.h"
void PrintLNR_K(BST_type BST,DATA X)
{
	if(BST != NULL)
	{
		if(BST->data > X ) PrintLNR_K(BST->left,X);
		cout<<BST->data<<" ";
		if(BST->data < X) PrintLNR_K(BST->right,X);
	}
}
void PrintRNL_K(BST_type BST,DATA X)
{
	if(BST != NULL)
	{
		if(BST->data < X ) PrintRNL_K(BST->right,X);
		cout<<BST->data<<" ";
		if(BST->data > X) PrintRNL_K(BST->left,X);
	}
}
void IN_cau_B(BST_type BST,DATA X)
{
	int kq = 0;
	KT_Node(BST,X,kq);
	if(kq == 1 )
	{
		if(BST->data < X) PrintRNL_K(BST,X);
		else if(BST->data > X) PrintLNR_K(BST,X);
		else cout<<BST->data<<endl;
	}else cout<<"\nKhong co Node "<<X<<" trong cay !!!"<<endl;
}
