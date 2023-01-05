#pragma once
#include<algorithm>
#include<utility>
#include<vector>
#include<string>

namespace js4484821266_h_tree
{
	namespace h_tree_t
	{
		/* pair of the sign and the subtree, which may be just the terminal data.
		 */
		template <class TTermT>
		using sub_tree_t = std::pair<std::wstring, TTermT>;

		// array of children
		template <class CTermT>
		using children_t = std::vector<sub_tree_t<CTermT>>;
	}

	std::vector<void*>h_trees_list;

	template <class ChildrenTT>
	class h_tree
	{
	public:
		h_tree_t::children_t<ChildrenTT> children;

		// constructor
		h_tree(void)
		{
			h_trees_list.push_back(this);
		}

		// outputs the huffman tree
		std::vector<std::wstring> str(void)
		{
			std::vector<std::wstring> o;
			auto i = children.begin();
			// your code here...
			return o;
		}

		// destructor
		~h_tree()
		{
			h_trees_list.erase(
				std::find(
					h_trees_list.begin(),
					h_trees_list.end(),
					this
				)
			);
		}
	};
}
