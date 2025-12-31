#include "Utils.h"
#include "huffmannode.h"
#include "huffmantree.h"
#include<vector>
#include <queue>
#include<map>
#include<string>
using namespace std;



void buildCodeMap(huffmannode* root,string str,map<char,string>& codes){
   if(root==NULL){
     return;
   }
    if(!root->left && !root->right){
        codes[root->data]=str;
        return;
    }
    buildCodeMap(root->left,str+"0",codes); 
    buildCodeMap(root->right,str+"1",codes);
}

map<char,string> getHuffmanCodes(huffmannode* root){
    map<char,string> codes;
    buildCodeMap(root,"",codes);
    return codes;
}

string encodeString(const string& input_string, const map<char, string>& huffmanCodes) {
    string encodedString;
    for (char ch : input_string) {
        encodedString += huffmanCodes.at(ch);
    }
    return encodedString;
}
map<char, int> frequencyMap;

string encode(const string& input_string) {
    map<char, int> frequencyMap = calcfreq(input_string);
    huffmannode* root = buildhuffmantree(frequencyMap);
    map<char, string> huffmanCodes = getHuffmanCodes(root);
    string encodedString = encodeString(input_string, huffmanCodes);
    return encodedString;
}

