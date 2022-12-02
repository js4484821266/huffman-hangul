#include<utility>
#include<vector>
#include<string>
class htree
{
public:
	typedef std::pair< std::string, void*> subtree_t;
	typedef std::vector<subtree_t> children_t;
	children_t children;
};