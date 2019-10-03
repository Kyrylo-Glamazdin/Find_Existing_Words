# Find Existing Words

This is the small project that I made just for fun back in Spring 2019. This program allows you to enter a sequence of letters, and then analyzes a dictionary and prints the existing words that consist of the entered letters.

## Running the app

Make sure you're in the correct repository and compile the code by typing
```
make all
```

Then, run the app
```
./a.out
```
## Remove executables
To remove executables, type
```
make clean
```
## Manual compilation
Alternatively, you can compile the app by typing
```
g++ -std=c++11 main.cpp fileStreamProcess.cpp CustomLetter.cpp Word.cpp
```

## How to Use

First, you will be prompted to enter the sequence of letters (note that if you want the same letter to appear in the word multiple times, you would need to enter this letter that same exact number of times). 
##
Then, you will need to enter the minimum size of the word (for example, if you don't wont to see words that consist of fewer than 5 letters, type in 5).
##
After that, you will need to enter the maximum size of the word (same as in the previous example, if you don't want to have words larger than 5 letters, enter 5).
##
Now you can see all of the real words that consist of the entered letters.
##
##
##
(Dictionary Copyright belongs to Carnegie Mellon University).
