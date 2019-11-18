#include <iostream>
#pragma once
#include "BST.h"
#include "Max.h"
#include "Min.h"
#include "Delete_Node.h"
#include "bai3_a.h"
#include "bai3_b.h"
#include "bai3_c.h"
#include "bai3_d.h"
#include "bai3_e.h"
#include "bai3_f.h"
int main() 
{
	BST_type BST;
	Initialize(BST);
	ReadTree(BST);
	PrintLNR(BST);
	// tim min & max
	cout<<"\nNode Max = "<<Search_Max(BST)<<endl;
	cout<<"Node Min = "<<Search_Min(BST)<<endl;
	// xoa node
	/*DATA x;
	cout<<"Nhap node can Xoa :";
	cin>>x;
	Xoa_Node(BST,x);
	PrintLNR(BST);
	 
	
	cout<<"In tu Min -> Goc : ";
	In_Min_N(BST);
	
	DATA y;
	cout<<"Nhap Node = "; cin>>y;
	cout<<"Cac Node lon hon "<<y<<" la : ";
	In_Node_lonhon_K(BST,y);
	
	*/
	DATA y;
	cout<<"Nhap Node ="; cin>>y;
	int dem = 0;
	Dem_N_nhohon_K(BST,y,dem);
	cout<<"Trong Cay co "<<dem<<" Node nho hon "<<y<<endl;
	return 0;
}
