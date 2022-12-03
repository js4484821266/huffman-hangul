#pragma once
#include<vector>
#include"htree.h"
typedef long double weight_t;
template<class node_t>
class node_val_t :public std::pair<node_t, weight_t> 
{
public:
	node_val_t(void) { std::pair<node_t, weight_t>(0, 0); }
	node_val_t(node_t data, weight_t weight = 0) { std::pair<node_t, weight_t>(data, weight); }
};
template<class node_t>
class node_val_list_t :public std::vector<node_val_t<node_t>>
{
public:
	node_val_list_t(void) { std::vector<node_val_t<node_t>>(); }
	node_val_list_t(node_val_t<node_t>child) { std::vector<node_val_t<node_t>>(child); }
	node_val_list_t(node_t data, weight_t weight = 0)
	{
		node_val_t<node_t>t(data, weight);
		node_val_list_t(t);
	}
};
template<class node_t>
htree huffman(node_val_list_t<node_t> node_val_arg)
{
	htree tree;
	return tree;
}