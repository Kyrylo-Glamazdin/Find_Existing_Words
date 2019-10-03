#ifndef CUSTOM_LETTER_HPP_
#define CUSTOM_LETTER_HPP_

#include <iostream>
#include <vector>
using namespace std;

class CustomLetter{
public:
    //parameterized constructor
    CustomLetter(string letter);
    
    //returns this letter
    string getLetter();
    
    //returns num_of_occurrences
    int getNumOfOccurrences();
    
    //sets the letter to a provided char
    void setLetter(string letter);
    
    //increases num_of_occurrences_ by 1
    void incrementNumOfOccurrences();
private:
    //the letter
    string letter_;
    
    //the number of times this letter is in the word
    int num_of_occurrences_;
    
};

#endif
