#include<vector>
#include<iostream>
#include"huffman.h"
typedef node_val_t<wchar_t> hc_freq_t;
typedef node_val_list_t<wchar_t> hc_freq_list_t;
int main(void)
{
	setlocale(LC_ALL, "");
	hc_freq_list_t c, v;
	c.push_back(hc_freq_t(L'��', 78376));
	c.push_back(hc_freq_t(L'��', 65388));
	c.push_back(hc_freq_t(L'��', 55626));
	c.push_back(hc_freq_t(L'��', 45751));
	c.push_back(hc_freq_t(L'��', 45455));
	c.push_back(hc_freq_t(L'��', 45279));
	c.push_back(hc_freq_t(L'��', 41077));
	c.push_back(hc_freq_t(L'��', 40263));
	c.push_back(hc_freq_t(L'��', 24745));
	c.push_back(hc_freq_t(L'��', 23928));
	c.push_back(hc_freq_t(L'��', 12535));
	c.push_back(hc_freq_t(L'��', 10361));
	c.push_back(hc_freq_t(L'��', 9638));
	c.push_back(hc_freq_t(L'��', 9506));
	c.push_back(hc_freq_t(L'��', 7695));
	c.push_back(hc_freq_t(L'��', 7348));
	c.push_back(hc_freq_t(L'��', 6711));
	c.push_back(hc_freq_t(L'��', 4986));
	c.push_back(hc_freq_t(L'��', 2577));
	v.push_back(hc_freq_t(L'��', 125134));
	v.push_back(hc_freq_t(L'��', 81318));
	v.push_back(hc_freq_t(L'��', 61140));
	v.push_back(hc_freq_t(L'��', 59326));
	v.push_back(hc_freq_t(L'��', 52968));
	v.push_back(hc_freq_t(L'��', 41965));
	v.push_back(hc_freq_t(L'��', 27445));
	v.push_back(hc_freq_t(L'��', 24169));
	v.push_back(hc_freq_t(L'��', 21793));
	v.push_back(hc_freq_t(L'��', 7484));
	v.push_back(hc_freq_t(L'��', 6777));
	v.push_back(hc_freq_t(L'��', 5825));
	v.push_back(hc_freq_t(L'��', 5293));
	v.push_back(hc_freq_t(L'��', 4572));
	v.push_back(hc_freq_t(L'��', 2817));
	v.push_back(hc_freq_t(L'��', 2499));
	v.push_back(hc_freq_t(L'��', 2439));
	v.push_back(hc_freq_t(L'��', 2167));
	v.push_back(hc_freq_t(L'��', 1660));
	v.push_back(hc_freq_t(L'��', 342));
	v.push_back(hc_freq_t(L'��', 112));
	std::wcout << int(c[0].first) << std::endl;
	std::wcout << c[0].first << std::endl;
	std::wcout << int(v[0].first) << std::endl;
	std::wcout << v[0].first << std::endl;
	return 0;
}