#pragma once
#include<vector>
#include"h_tree.h"

typedef long double weight_t;
template <class NodeT>
using node_val_t = std::pair<NodeT, weight_t>;
template <class NodeT>
using node_val_list_t = std::vector<node_val_t<NodeT>>;

template <class NodeT>
h_tree<NodeT> huffman(node_val_list_t<NodeT> node_val_arg)
{
	h_tree<NodeT> tree;
	// your code here ...
	return tree;
}
