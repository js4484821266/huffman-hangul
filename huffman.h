#pragma once
#include<vector>
#include"htree.h"

typedef long double weight_t;
template<class node_t>using node_val_t = std::pair<node_t, weight_t>;
template<class node_t>using node_val_list_t = std::vector<node_val_t<node_t>>;

template<class node_t>
htree huffman(node_val_list_t<node_t> node_val_arg)
{
	htree tree;
	return tree;
}