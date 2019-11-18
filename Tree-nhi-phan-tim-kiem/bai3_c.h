#include <iostream>
#pragma once
#include "BST.h"
#include "Max.h"
#include "bai3_a.h"
using namespace std;
void In_N_Max(BST_type BST)
{
	DATA max = Search_Max(BST);
	IN_cau_A(BST,max);
}
