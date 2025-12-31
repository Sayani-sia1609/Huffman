#ifndef HUFFMANTREE_H
#define HUFFMANTREE_H

#include <map>
#include "huffmannode.h"

huffmannode* buildhuffmantree(const std::map<char,int>& freqmap);

#endif // HUFFMANTREE_H
