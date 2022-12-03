#pragma once
#include<vector>
#include"htree.h"
template<class node_t>
class node_val_t :public std::pair<node_t, long double> {};
template<class node_t>
class node_val_list_t :public std::vector<node_val_t<node_t>> {};
template<class node_t>
htree huffman(node_val_list_t<node_t> node_val_arg)
{
	htree tree;
	return tree;
}