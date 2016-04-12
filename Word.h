#ifndef Word_H
#define Word_H
using namespace std;
class Word;

#include<iostream>
#include<fstream>

#include "Sentence.h"

  

class Word{

private:

char* chararray;                   

public:
Word();
Word(char*w);
Word (const Word& word);

~Word();
 
 
 Word operator+(int a);
 Word operator++(int a);
 Word operator--(int a);
 Word operator++();
 Word operator--();
 Sentence operator+( Word word);
 Sentence operator+ (Sentence s);
 void  show();
 friend ostream& operator<<(ostream& os, const Word& word);
 Word operator=(const Word& w1);
};

#endif
