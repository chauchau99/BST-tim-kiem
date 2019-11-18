#include <iostream>
#pragma once
#include "BST.h"
using namespace std;
void Node_Change(BST_type &temp,BST_type &node_left)
{
	if(node_left->left != NULL) Node_Change(temp,node_left->left);
	else
	{
		temp->data = node_left->data;
		temp = node_left;
		node_left = node_left->left;
	}
}
void Xoa_Node(BST_type &BST,DATA X)
{
	if(BST == NULL ) return;
	else
	{
		// tim vi tri X
		if(X < BST->data) Xoa_Node(BST->left,X);
		else if(X > BST->data) Xoa_Node(BST->right,X); 
		else
		{
			BST_type temp = BST;
			// cay co 1 con & node la
			if(BST->left == NULL ) BST = BST->right;
			else if(BST->right == NULL) BST = BST->left;
			else // cay co 2 con
			{
				Node_Change(temp,BST->right);	
			}
			delete temp;
		}
	}
}
