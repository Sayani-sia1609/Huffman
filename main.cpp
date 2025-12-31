#include<iostream>
using namespace std;
#include "huffmannode.h"
#include "Utils.h"
#include "huffmantree.h"
#include "Encoder.h"
#include "Decoder.h"
#include "dashboard.h"
#include <string.h>

int main() {
    string input_string ;
    
    cout<<"Enter string to encode: ";
    std::getline(cin, input_string);
    //
    if (!input_string.empty() && input_string.front() == '"' && input_string.back() == '"') {
        input_string = input_string.substr(1, input_string.size() - 2);
    }

    string encodedString = encode(input_string);
   
    
    map<char, int> frequencyMap = calcfreq(input_string);
    
    
    huffmannode* root = buildhuffmantree(frequencyMap);
    
   
    string decodedString = decodeString(root, encodedString);
    
    auto huffmanCodes = getHuffmanCodes(root);
    showDashboard(input_string, encodedString, decodedString, frequencyMap, huffmanCodes);

    
    return 0;
}