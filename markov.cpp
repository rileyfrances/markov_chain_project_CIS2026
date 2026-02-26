#include "markov.h"

std::string joinWords(const std::string words[], int startIndex, int count){
    std::string result="";
    for (int i=0; i< count; i++)
}

int readWordsFromFile(std::string filename, std::string words[], int maxWords){
    return 0;
}

int buildMarkovChain(const std::string words[], int numWords, int order,
                     std::string prefixes[], std::string suffixes[],
                    int maxChainSize){
    return 0;
}


std::string getRandomSuffix(const std::string prefixes[], const std::string suffixes[],
                    int chainSize, std::string currentPrefix){
    return 0;
}

std::string getRandomPrefix(const std::string prefixes[], int chainSize){
    return 0;
}

std::string generateText(const std::string prefixes[], const std::string suffixes[],
                         int chainSize, int order, int numWords){
    return 0;
}

