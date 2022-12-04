#pragma once
#include<utility>
#include<vector>
#include<string>

class htree
{
public:
	typedef std::pair< std::string, void*> subtree_t;
	typedef std::vector<subtree_t> children_t;
	children_t children;
	std::vector<std::string> str(void)
	{
		std::vector<std::string>o;
		auto i = children.begin();
		// your code here...
		return o;
	}
};