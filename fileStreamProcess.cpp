#include "fileStreamProcess.hpp"

string findFirstWord(string str){
    string result = "";
    for (int i = 0; i < str.size(); i++){
        if ((int)str[i] != 32){
            result.push_back(str[i]);
        }
        else break;
    }
    return result;
}

bool checkInput(string firstWord){
    for (int i = 0; i < firstWord.size(); i++){
        if (!isalpha(firstWord[i])){
            return false;
        }
    }
    return true;
}

Word* getInputWord(){
    string word = "";
    
    cout << "Enter word: ";
    getline (cin, word);
    
    Word* resultWord = new Word (word, 1);
    return resultWord;
}

int getInputMinLength(){
    int min_length = 0;
    cout << "Enter minimum length: ";
    cin >> min_length;
    return min_length;
}

int getInputMaxLength(){
    int max_length = 0;
    cout << "Enter maximum length: ";
    cin >> max_length;
    return max_length;
}

void processFileStream(){
    Word* user_input = getInputWord();
    user_input->wordProcess();
    int user_min_length = getInputMinLength();
    int user_max_length = getInputMaxLength();
    
    string next_word = "";
    ifstream words ("cmudict.0.7a.txt");
    
    while (getline (words, next_word)){
        string first_word_of_next_word = findFirstWord(next_word);
        if (checkInput(first_word_of_next_word)){
            Word* new_line_word = new Word(first_word_of_next_word, 0);
            new_line_word->wordProcess();
            if (new_line_word->getLength() >= user_min_length &&
                new_line_word->getLength() <= user_max_length){
                if (user_input->equals(*(new_line_word))){
                    cout << first_word_of_next_word << endl;
                }
            }
            delete new_line_word;
        }
    }
    words.close();
    delete user_input;
}
