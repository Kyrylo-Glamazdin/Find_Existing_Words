#ifndef WORD_HPP_
#define WORD_HPP_

#include "CustomLetter.hpp"
#include <cctype>

class Word{
public:
    //default constructor
    //@param input_or_check is 0 if word is in the list or 1 if word is user input
    Word(string word, int input_or_check);
    
    //processes a word (checks alpha)
    void processWord(string word_to_process);
    
    //processes a word that has been input
    void processInputWord(string word_to_process);
    
    //adds a letter to the letter_vector_
    bool addLetter(string cus_let);
    
    //returns true if parameter word is equal to this word
    bool equals(Word word);
    
    //returns the length of the word
    int getLength();
    
    //returns CustomLetter that corresponds to the str
    CustomLetter getLetter(string str);
    
    //returns position if CustomLetter that contains str is already in letter_vector_
    //else returns -1
    int contains(string str);
    
    //returns true if word_to_check is composed only of alphabetical characters
    bool checkIfWordIsGood(string word_to_check);
    
    //calls processWord or processInputWord
    void wordProcess();
    
private:
    //vector with each letter and its number of occurrences
    //stores CustomLetter objects
    std::vector <CustomLetter> letter_vector_;
    
    //the length of the word
    int word_length_;
    
    //word to process
    string input_word_;
    
    //0 = string is in list, 1 = string was input
    int input_or_in_list_;
};

#endif
