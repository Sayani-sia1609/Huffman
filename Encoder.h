#ifndef ENCODER_H
#define ENCODER_H

#include <string>
#include <map>
#include "huffmannode.h"

std::map<char,std::string> getHuffmanCodes(huffmannode* root);
std::string encodeString(const std::string& input_string, const std::map<char,std::string>& huffmanCodes);
std::string encode(const std::string& input_string);

#endif // ENCODER_H
