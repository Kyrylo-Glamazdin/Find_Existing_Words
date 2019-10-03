#include "Word.hpp"
#include <string>

Word::Word(string word, int input_or_check){
    word_length_ = 0;
    input_or_in_list_ = input_or_check;
    input_word_ = word;
    if (input_or_check != 0 && input_or_check != 1){
        cout << "Wrong input. Use only 0 or 1." << endl;
    }
}



void Word::processWord(string word_to_process){
    if (checkIfWordIsGood(word_to_process)){
        for (int i = 0; i < word_to_process.size(); i++){
            string s;
            s.push_back(word_to_process[i]);
            int position_in_vector = this->contains(s);
            if (position_in_vector != -1){
                letter_vector_[position_in_vector].incrementNumOfOccurrences();
            }
            else{
                addLetter(s);
            }
        }
    }
}

int Word::contains(string str){
    for (int i = 0; i < letter_vector_.size(); i++){
        if (letter_vector_[i].getLetter() == str){
            return i;
        }
    }
    return -1;
}

int Word::getLength(){
    int count = 0;
    for (int i = 0; i < letter_vector_.size(); i++){
        count = count + letter_vector_[i].getNumOfOccurrences();
    }
    return count;
}

bool Word::addLetter(string cus_str){
    CustomLetter cus_let(cus_str);
    letter_vector_.push_back(cus_let);
    return true;
}

void Word::processInputWord(string word_to_process){
    string result = "";
    for (int i = 0; i < word_to_process.size(); i++){
        if (isalpha(word_to_process[i])){
            result.push_back(toupper(word_to_process[i]));
        }
    }
    for (int i = 0; i < result.size(); i++){
        string s;
        s.push_back(result[i]);
        int position_in_vector = this->contains(s);
        if (position_in_vector != -1){
            letter_vector_[position_in_vector].incrementNumOfOccurrences();
        }
        else{
            addLetter(s);
        }
    }
}

bool Word::equals(Word word){
    if (this->getLength() < word.getLength()){
        return false;
    }
    for (int i = 0; i < word.letter_vector_.size(); i++){
        if (this->contains(word.letter_vector_[i].getLetter()) == -1){
            return false;
        }
        if (word.letter_vector_[i].getNumOfOccurrences() >
            this->getLetter(word.letter_vector_[i].getLetter()).getNumOfOccurrences()){
            return false;
        }
    }
    return true;
}

CustomLetter Word::getLetter(string str){
    for (int i = 0; i < letter_vector_.size(); i++){
        if (letter_vector_[i].getLetter() == str){
            return letter_vector_[i];
        }
    }
    //kostyl
    return letter_vector_[0];
}

bool Word::checkIfWordIsGood(string word_to_check){
    for (int i = 0; i < word_to_check.size(); i++){
        if (!isalpha(word_to_check[i])){
            return false;
        }
    }
    return true;
}

void Word::wordProcess(){
    if (input_or_in_list_ == 0){
        processWord(input_word_);
    }
    else{
        processInputWord(input_word_);
    }
}
