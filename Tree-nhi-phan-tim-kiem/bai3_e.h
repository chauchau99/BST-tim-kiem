#include <iostream>
#pragma once
#include "BST.h"
using namespace std;
void In_Node_lonhon_K(BST_type BST,DATA X)
{
	if(BST != NULL)
	{
		In_Node_lonhon_K(BST->left,X);
		if(BST->data > X )cout<<BST->data<<" ";
		In_Node_lonhon_K(BST->right,X);
	}
}
