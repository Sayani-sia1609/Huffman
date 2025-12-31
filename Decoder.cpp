#include "huffmannode.h"
#include <map>
#include <string>
using namespace std;
#include "huffmantree.h"
#include "Utils.h"

string decodeString(huffmannode* root, const string& encodedString) {
    string decodedString;
    huffmannode* currentNode = root;
    for (char bit : encodedString) {
        if (bit == '0') {
            currentNode = currentNode->left;
        } else { // bit == '1'
            currentNode = currentNode->right;
        }


        if (!currentNode->left && !currentNode->right) {
            decodedString += currentNode->data;
            currentNode = root; 
        }
    }
    return decodedString;
}