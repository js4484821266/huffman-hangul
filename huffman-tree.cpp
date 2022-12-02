#include<vector>
#include<string>
template<typename SUBTREE_OR_ANYTHING_ELSE>
class htree
{
public:
	std::vector<SUBTREE_OR_ANYTHING_ELSE>offsprings;
	std::string id;
	htree(void) :id("") {  }
	htree(std::string designated_id=""):id(designated_id){}
};