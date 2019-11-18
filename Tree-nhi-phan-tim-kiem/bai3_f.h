#include <iostream>
#pragma once
#include "BST.h"
using namespace std;
void Dem_N_nhohon_K(BST_type BST,DATA X,int &dem)
{
	if(BST != NULL)
	{
		if(BST->data < X) dem++;
		Dem_N_nhohon_K(BST->left,X,dem);
		Dem_N_nhohon_K(BST->right,X,dem);
	}
}
