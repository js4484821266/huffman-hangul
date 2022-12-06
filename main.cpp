#include<vector>
#include<iostream>
#include"huffman.h"

typedef js4484821266_huffman::node_val_t<wchar_t> hc_freq_t;
typedef js4484821266_huffman::node_val_list_t<wchar_t> hc_freq_list_t;

int main(void)
{
	setlocale(LC_ALL, "");
	hc_freq_list_t c{
					   hc_freq_t(L'し', 78376),
					   hc_freq_t(L'ぁ', 65388),
					   hc_freq_t(L'い', 55626),
					   hc_freq_t(L'さ', 45751),
					   hc_freq_t(L'じ', 45455),
					   hc_freq_t(L'ぉ', 45279),
					   hc_freq_t(L'ぇ', 41077),
					   hc_freq_t(L'け', 40263),
					   hc_freq_t(L'ぞ', 24745),
					   hc_freq_t(L'げ', 23928),
					   hc_freq_t(L'ず', 12535),
					   hc_freq_t(L'あ', 10361),
					   hc_freq_t(L'ざ', 9638),
					   hc_freq_t(L'え', 9506),
					   hc_freq_t(L'ぜ', 7695),
					   hc_freq_t(L'そ', 7348),
					   hc_freq_t(L'せ', 6711),
					   hc_freq_t(L'す', 4986),
					   hc_freq_t(L'こ', 2577)
	}, v{
		hc_freq_t(L'た', 125134),
		hc_freq_t(L'び', 81318),
		hc_freq_t(L'っ', 61140),
		hc_freq_t(L'ぱ', 59326),
		hc_freq_t(L'で', 52968),
		hc_freq_t(L'ぬ', 41965),
		hc_freq_t(L'づ', 27445),
		hc_freq_t(L'つ', 24169),
		hc_freq_t(L'だ', 21793),
		hc_freq_t(L'に', 7484),
		hc_freq_t(L'と', 6777),
		hc_freq_t(L'ひ', 5825),
		hc_freq_t(L'ち', 5293),
		hc_freq_t(L'ね', 4572),
		hc_freq_t(L'な', 2817),
		hc_freq_t(L'は', 2499),
		hc_freq_t(L'ば', 2439),
		hc_freq_t(L'て', 2167),
		hc_freq_t(L'ど', 1660),
		hc_freq_t(L'ぢ', 342),
		hc_freq_t(L'の', 112)
	};
	std::wcout << int(c[0].first) << std::endl;
	std::wcout << int(v[0].first) << std::endl;
	std::wcout << c[0].first << std::endl;
	std::wcout << v[0].first << std::endl;
	std::wcout << c[0].second << std::endl;
	std::wcout << v[0].second << std::endl;
	return 0;
}