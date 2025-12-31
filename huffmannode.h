#ifndef HUFFMANNODE_H
#define HUFFMANNODE_H

struct huffmannode
{
    char data;
    int freq;
    huffmannode* left;
    huffmannode* right;
};

inline huffmannode* getnewnode(char data, int freq)
{
    huffmannode* newnode = new huffmannode();
    newnode->data = data;
    newnode->freq = freq;
    newnode->left = nullptr;
    newnode->right = nullptr;
    return newnode;
}

#endif // HUFFMANNODE_H