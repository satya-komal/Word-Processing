 #ifndef Paragraph_H
#define Paragraph_H
#include "string.h"
using namespace std; 

class Paragraph;

#include<iostream>
#include<fstream>
#include "Sentence.h"

//#include "Word.h"
//#include "Story.h"


class Paragraph{

private:


public:
struct sentNode{
Sentence*thissent;
sentNode*nextsent;
};

sentNode* firstsentNode;
sentNode*lastsentNode;

Paragraph();
Paragraph(char*p);
Paragraph(const Paragraph& p1);
~Paragraph();

 Paragraph operator++(int b); 
 Paragraph operator--(int b);
 void insert(Sentence *s);
 void show();
 Paragraph operator+(const Paragraph& paragraph);
 Paragraph operator=(const Paragraph& p1);
 Paragraph operator+( Sentence sentence); 
 Paragraph operator+(int val);
 friend  ostream& operator<<(ostream& os, const Paragraph& paragraph);
};

#endif
