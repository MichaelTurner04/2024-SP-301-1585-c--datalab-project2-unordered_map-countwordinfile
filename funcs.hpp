#include "header.h"
using namespace std;
#include <string>
#include <cctype>

string wordToLowerCase(string &word){
    string lower = word;
    for (int i = 0; i < lower.size(); ++i){
        lower[i] = tolower(lower[i]);
    }
    return lower;
}
string remPunc(string &word){
    int beg = 0;
    int end = word.length() -1;
    while(beg <= end && ispunct(word[beg])){
        beg++;
    }
    while(end >= beg && ispunct(word[end])){
        end--;
    }
    return word.substr(beg, end - beg + 1);
}