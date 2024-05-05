#include <iostream>
using namespace std;
#include <unordered_map>
#include <fstream>
#include "header.h"


int main() {
    ifstream file("4507.txt.utf-8");
    if (!file.is_open()){
        cout << "Error: Unable to open the file."<< endl;
        return 1;
    }
    unordered_map<string, int> wordCount;
    string word;
    while (file >> word){
        string wordWithNoPunc = remPunc(word);
        string lowerCaseWord = wordToLowerCase(wordWithNoPunc);
        wordCount[lowerCaseWord]++;
    }
    ofstream outputFile("output.txt");
    if(outputFile.is_open()){
        outputFile << "Word counts:"<< endl;
        for (const auto x: wordCount){
            outputFile << x.first << " "<< x.second << endl;
        }
    }
    return 0;

}