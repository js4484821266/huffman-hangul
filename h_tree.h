#pragma once
#include<utility>
#include<vector>
#include<string>

namespace h_tree_t
{
	// pair ( sign, data: subtree | term_data )
	template<class TTermT> using sub_tree_t = std::pair< std::wstring, TTermT>;

	// array of children
	template<class CTermT>using children_t = std::vector<sub_tree_t<CTermT> >;
}

template<class ChildrenTT>
class h_tree
{
public:
	h_tree_t::children_t<ChildrenTT> children;

	// outputs specification of this huffman tree
	std::vector<std::wstring> str(void)
	{
		std::vector<std::wstring>o;
		auto i = children.begin();
		// your code here...
		return o;
	}
};