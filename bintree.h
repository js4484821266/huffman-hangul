#pragma once
template<typename container_t>
class bintree {
public:
	container_t C=0;
	bintree* L=0;
	bintree* R=0;
	bintree(container_t contained) { C = contained; }
};