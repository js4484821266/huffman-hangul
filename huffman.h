#pragma once
#include<vector>
#include"htree.h"
template<class node_t>
class node_val_t :std::pair<node_t, long double> {};
template<class node_t>
htree huffman(std::vector<node_val_t<node_t>>node_val_arg)
{
	htree tree;
	return tree;
}