#include <iostream>
#include "BST.h"
#pragma once
using namespace std;
DATA Search_Min(BST_type t)
{
	if(t->left == NULL && t->right == NULL) return t->data;
	int min = t->data;
	if(t->left != NULL)
	{
		int left = Search_Min(t->left);
		if(min > left) min = left;
	}
	return min;
}
