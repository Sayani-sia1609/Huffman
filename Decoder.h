#ifndef DECODER_H
#define DECODER_H

#include <string>
#include "huffmannode.h"

std::string decodeString(huffmannode* root, const std::string& encodedString);

#endif // DECODER_H
