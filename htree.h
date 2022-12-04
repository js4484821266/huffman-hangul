#pragma once
#include<utility>
#include<vector>
#include<string>

template<class children_t_t>
class htree
{
public:
	template<class __term_t> using subtree_t = std::pair< std::string, __term_t>;
	template<class c_term_t>using children_t = std::vector<subtree_t<c_term_t> >;
	children_t<children_t_t> children;
	std::vector<std::string> str(void)
	{
		std::vector<std::string>o;
		auto i = children.begin();
		// your code here...
		return o;
	}
};