#include <iostream>
#pragma once
#include "BST.h"
#include "Min.h"
#include "bai3_b.h"
using namespace std;
void In_Min_N(BST_type BST)
{
	DATA min = Search_Min(BST);
	IN_cau_B(BST,min);	
}
