#include <iostream>
#include "markov.h"

int main(){
    std::string testWords []={"the", "cat", "sat", "down"};
    
    std::cout << joinWords (testWords, 0, 2) << std::endl;
    std::cout << joinWords (testWords,1,3) << std::endl;
    return 0;
}