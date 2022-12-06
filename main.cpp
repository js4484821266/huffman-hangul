#include<vector>
#include<iostream>
#include"huffman.h"

typedef js4484821266_huffman::node_val_t<wchar_t> hc_freq_t;
typedef js4484821266_huffman::node_val_list_t<wchar_t> hc_freq_list_t;

int main(void)
{
	setlocale(LC_ALL, "");
	hc_freq_list_t c{
					   hc_freq_t(L'��', 78376),
					   hc_freq_t(L'��', 65388),
					   hc_freq_t(L'��', 55626),
					   hc_freq_t(L'��', 45751),
					   hc_freq_t(L'��', 45455),
					   hc_freq_t(L'��', 45279),
					   hc_freq_t(L'��', 41077),
					   hc_freq_t(L'��', 40263),
					   hc_freq_t(L'��', 24745),
					   hc_freq_t(L'��', 23928),
					   hc_freq_t(L'��', 12535),
					   hc_freq_t(L'��', 10361),
					   hc_freq_t(L'��', 9638),
					   hc_freq_t(L'��', 9506),
					   hc_freq_t(L'��', 7695),
					   hc_freq_t(L'��', 7348),
					   hc_freq_t(L'��', 6711),
					   hc_freq_t(L'��', 4986),
					   hc_freq_t(L'��', 2577)
	}, v{
		hc_freq_t(L'��', 125134),
		hc_freq_t(L'��', 81318),
		hc_freq_t(L'��', 61140),
		hc_freq_t(L'��', 59326),
		hc_freq_t(L'��', 52968),
		hc_freq_t(L'��', 41965),
		hc_freq_t(L'��', 27445),
		hc_freq_t(L'��', 24169),
		hc_freq_t(L'��', 21793),
		hc_freq_t(L'��', 7484),
		hc_freq_t(L'��', 6777),
		hc_freq_t(L'��', 5825),
		hc_freq_t(L'��', 5293),
		hc_freq_t(L'��', 4572),
		hc_freq_t(L'��', 2817),
		hc_freq_t(L'��', 2499),
		hc_freq_t(L'��', 2439),
		hc_freq_t(L'��', 2167),
		hc_freq_t(L'��', 1660),
		hc_freq_t(L'��', 342),
		hc_freq_t(L'��', 112)
	};
	std::wcout << int(c[0].first) << std::endl;
	std::wcout << int(v[0].first) << std::endl;
	std::wcout << c[0].first << std::endl;
	std::wcout << v[0].first << std::endl;
	std::wcout << c[0].second << std::endl;
	std::wcout << v[0].second << std::endl;
	return 0;
}