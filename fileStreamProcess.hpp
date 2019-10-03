#ifndef FILE_STREAM_PROCESS_HPP
#define FILE_STREAM_PROCESS_HPP

#include "Word.hpp"
#include <fstream>

//returns first word in a string (everything before first space)
string findFirstWord(string str);

//returns true if string consists only of alphabetical characters
bool checkInput(string firstWord);

//asks user to input characters and stores them in a Word object, which it returns
Word* getInputWord();

//asjs user for the minimum length of their desired word
int getInputMinLength();

//asks user for a maximum length of their desired word
int getInputMaxLength();

//reads an input file and prints all words that have the same letters
//as user word (can have less letters and must fall within the user-specified limits)
void processFileStream();

#endif
