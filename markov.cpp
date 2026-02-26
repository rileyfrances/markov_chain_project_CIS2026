#include "markov.h"

std::string joinWords(const std::string words[], int startIndex, int count){
    std::string result="";
    for (int i=0; i< count; i++){
        result += words [startIndex + i];

        if (i<count -1){
            result += "";
        }
        
    }
    return result;
}

int readWordsFromFile(std::string filename, std::string words[], int maxWords) {
    std::inputFile (filename);

    if (!inputFile.is_open()){
        return -1;
    }
    int count= 0;

    while (count < maxWords && inputFile >> words[count]) {
        count++;
    }
    inputFile.close();
    return count;
}

int buildMarkovChain(const std::string words[], int numWords, int order,
                     std::string prefixes[], std::string suffixes[],
                    int maxChainSize){
    int count=0;

    for (int i=0; i< numWords -order; i++){
        std::string prefix=joinWords(words, i, order);
        std::string suffix=words[i+order];

        prefixes[count] = prefix;
        suffixes[count] =suffix;

        count++;

        if (count >= maxChainSize) {
            break;
        }
    }
    return count;
}


std::string getRandomSuffix(const std::string prefixes[], const std::string suffixes[],
                    int chainSize, std::string currentPrefix){
    int matchCount=0;

    for (int i=0; i < chainSize; i++){
        if (prefixes [i] ==currentPrefix){
            matchCount++;
        }
    }
    if (matchCount==0){
        return "";
    }
    int pick = rand()% matchCount;
    int countSoFar=0;

    for (int i=0; i<chainSize; i++){
        if (prefixes [i]==currentPrefix){
            if (countSoFar == pick){
                return suffixes[i];
            }
            countSoFar++;
        }
    }
    return "";
}

std::string getRandomPrefix(const std::string prefixes[], int chainSize){
    int index=rand()%chainSize;
    return prefixes[index];
}

std::string generateText(const std::string prefixes[], const std::string suffixes[],
                         int chainSize, int order, int numWords){
    return 0;
}

