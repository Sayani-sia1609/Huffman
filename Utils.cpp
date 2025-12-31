using namespace std;
#include "huffmannode.h"
#include <string.h>
#include<map>

map<char,int>calcfreq(const string& str){
    map<char,int>freq;
    for(int i=0;i<str.length();i++){
        freq[str[i]]++;
    }
    return freq;
}

