#ifndef Story_H
#define Story_H
using namespace std;
#include "string.h"

class Story; 

#include<iostream>
#include<fstream>
#include "Paragraph.h"

struct paraNode {
Paragraph* thispara;
paraNode*nextpara;
};

class Story{

private:
paraNode* firstparaNode;
paraNode* lastparaNode;

public:
Story();
Story(const char * textfile);
void save(const char* outfile);
Story(const Story& st1);
~Story();

 void show();
 Story operator+(const Paragraph& paragraph);
 Story operator=(const Story& st1);
 void insert(Paragraph *p);
 friend ostream& operator<<(ostream& os, const Story& story);

};

#endif
