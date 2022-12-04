#pragma once
#include<utility>
#include<vector>
#include<string>

template<class ChildrenTT>
class h_tree
{
public:
	template<class TTermT> using sub_tree_t = std::pair< std::string, TTermT>;
	template<class CTermT>using children_t = std::vector<sub_tree_t<CTermT> >;
	children_t<ChildrenTT> children;
	std::vector<std::string> str(void)
	{
		std::vector<std::string>o;
		auto i = children.begin();
		// your code here...
		return o;
	}
};