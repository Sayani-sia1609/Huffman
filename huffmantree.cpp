#include <iostream>
#include <queue>
#include <map>
#include "huffmannode.h"
#include "huffmantree.h"

struct compare{
    bool operator()(huffmannode* l,huffmannode* r){
        return l->freq > r->freq;
    }
};

huffmannode* buildhuffmantree(const std::map<char,int>& freqmap){
    std::priority_queue<huffmannode*, std::vector<huffmannode*>, compare> pq;
    for (auto pair : freqmap){
        huffmannode* newnode = getnewnode(pair.first, pair.second);
        pq.push(newnode);
    }

    while(pq.size() > 1){
        huffmannode* left = pq.top(); pq.pop();
        huffmannode* right = pq.top(); pq.pop();
        huffmannode* newnode = getnewnode('\0', left->freq + right->freq);
        newnode->left = left;
        newnode->right = right;
        pq.push(newnode);
    }

    if (pq.empty()) return nullptr;
    return pq.top();
}