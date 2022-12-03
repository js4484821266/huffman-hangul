#include<vector>
#include<iostream>
#include"huffman.h"
typedef node_val_t<wchar_t> hc_freq_t;
typedef node_val_list_t<wchar_t> hc_freq_list_t;
int main(void)
{
	setlocale(LC_ALL, "");
	hc_freq_list_t c, v;
	c.push_back(hc_freq_t(L'し', 78376));
	c.push_back(hc_freq_t(L'ぁ', 65388));
	c.push_back(hc_freq_t(L'い', 55626));
	c.push_back(hc_freq_t(L'さ', 45751));
	c.push_back(hc_freq_t(L'じ', 45455));
	c.push_back(hc_freq_t(L'ぉ', 45279));
	c.push_back(hc_freq_t(L'ぇ', 41077));
	c.push_back(hc_freq_t(L'け', 40263));
	c.push_back(hc_freq_t(L'ぞ', 24745));
	c.push_back(hc_freq_t(L'げ', 23928));
	c.push_back(hc_freq_t(L'ず', 12535));
	c.push_back(hc_freq_t(L'あ', 10361));
	c.push_back(hc_freq_t(L'ざ', 9638));
	c.push_back(hc_freq_t(L'え', 9506));
	c.push_back(hc_freq_t(L'ぜ', 7695));
	c.push_back(hc_freq_t(L'そ', 7348));
	c.push_back(hc_freq_t(L'せ', 6711));
	c.push_back(hc_freq_t(L'す', 4986));
	c.push_back(hc_freq_t(L'こ', 2577));
	v.push_back(hc_freq_t(L'た', 125134));
	v.push_back(hc_freq_t(L'び', 81318));
	v.push_back(hc_freq_t(L'っ', 61140));
	v.push_back(hc_freq_t(L'ぱ', 59326));
	v.push_back(hc_freq_t(L'で', 52968));
	v.push_back(hc_freq_t(L'ぬ', 41965));
	v.push_back(hc_freq_t(L'づ', 27445));
	v.push_back(hc_freq_t(L'つ', 24169));
	v.push_back(hc_freq_t(L'だ', 21793));
	v.push_back(hc_freq_t(L'に', 7484));
	v.push_back(hc_freq_t(L'と', 6777));
	v.push_back(hc_freq_t(L'ひ', 5825));
	v.push_back(hc_freq_t(L'ち', 5293));
	v.push_back(hc_freq_t(L'ね', 4572));
	v.push_back(hc_freq_t(L'な', 2817));
	v.push_back(hc_freq_t(L'は', 2499));
	v.push_back(hc_freq_t(L'ば', 2439));
	v.push_back(hc_freq_t(L'て', 2167));
	v.push_back(hc_freq_t(L'ど', 1660));
	v.push_back(hc_freq_t(L'ぢ', 342));
	v.push_back(hc_freq_t(L'の', 112));
	std::wcout << int(c[0].first) << std::endl;
	std::wcout << c[0].first << std::endl;
	std::wcout << int(v[0].first) << std::endl;
	std::wcout << v[0].first << std::endl;
	return 0;
}