#pragma once
#include<vector>
#include"h_tree.h"

namespace js4484821266_huffman {
	typedef long double weight_t;
	template <class NodeT>
	using node_val_t = std::pair<NodeT, weight_t>;
	template <class NodeT>
	using node_val_list_t = std::vector<node_val_t<NodeT>>;

	template <class NodeT>
	js4484821266_h_tree::h_tree<NodeT> huffman(node_val_list_t<NodeT> node_val_arg)
	{
		js4484821266_h_tree::h_tree<NodeT> tree;
		// your code here ...
		return tree;
	}
}
