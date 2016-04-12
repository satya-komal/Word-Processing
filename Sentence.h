#ifndef Sentence_H
#define Sentence_H
#include "string.h"
using namespace std;

class Sentence;

#include<iostream>
#include<fstream>
#include "Word.h"
#include"Paragraph.h"
//#include"Story.h"


 

class Sentence{


public:
 struct wordNode{
 Word *thisword;
 wordNode* nextword;
 };
 
wordNode*firstwordNode;
wordNode*lastwordNode;

Sentence();
Sentence(char*s);
Sentence(const Sentence& s1);
~Sentence();
void insert(Word *w); 

 Sentence operator++(int a);
 Sentence operator--(int a);
 Sentence operator++();
 Sentence operator--();
 Paragraph operator+( Sentence sentence);
 Sentence operator+(Word word);
 Paragraph operator+( Paragraph paragraph);
 Sentence operator=(const Sentence& s1);
 void show();
 friend ostream& operator<<(ostream& os, const Sentence& sentence);
 Sentence operator+(int a);
 
 Word* first();
 Sentence* rest();
 };

#endif
