C++FLAG = -std=c++11

all:
	g++ $(C++FLAG) main.cpp fileStreamProcess.cpp CustomLetter.cpp Word.cpp

clean:
	(rm -f *.o; rm -f a.out)