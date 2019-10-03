#include "CustomLetter.hpp"

CustomLetter::CustomLetter(string letter){
    letter_ = letter;
    num_of_occurrences_ = 1;
}

string CustomLetter::getLetter(){
    return letter_;
}

int CustomLetter::getNumOfOccurrences(){
    return num_of_occurrences_;
}

void CustomLetter::setLetter(string letter){
    letter_ = letter;
}

void CustomLetter::incrementNumOfOccurrences(){
    num_of_occurrences_++;
}
