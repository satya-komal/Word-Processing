//#include<iostream>
//#include<fstream>
#include "Story.h"
#include "Paragraph.h"
#include "Sentence.h"
#include "Word.h"
using namespace std;

int main ( ) {
   
Story myStory("Brady.txt");
//myStory.save();





/*Sentence s("Like this one.");
s.rest();
s.show(); */




/*
Sentence s10("this is an example.");
Paragraph p3("to see. if operator works");
Paragraph p4;
p4=s10+p3;
p4.show();
cout<<" "<<endl;   */



Sentence s0("Sentence plus word.");
Word w("appended");                                   //Word added at end of sentence
Sentence s8;
s8=s0+w;
s8.show();
cout<<" "<<endl;  

Sentence s1("sentence in upper case. ");
s1++;
s1.show();
cout<<" "<<endl; 

Sentence s2("SENTENCE IN LOWER CASE. ");
s2--;
s2.show();
cout<<" "<<endl;  

Paragraph p1;
Sentence s11("adding two.");
Sentence s9("sentences to form a paragraph.");                           // sent +Sent to Para and +1 operation on Para
p1=s11+s9;
p1.show();
cout<<" "<<endl; 

Paragraph p2("test to see if the.plus operator works.");
p2+1;
p2.show();
cout<<" "<<endl;     

Word word("test");
word++ ;
word.show();
cout<<" "<<endl;
Word word1("APPLE");
word1--;
word1.show();
cout<<" "<<endl;
Word w3("autumn");
++w3;
w3.show(); 

cout<<" "<<endl;
Word w0("autumnway");
--w0;
w0.show();

cout<<" "<<endl;
Sentence s3= word+word1;

cout<<" "<<endl;
Word w4("phase2");
w4+1;
w4.show();

cout<<" "<<endl;
Sentence s("testing the phase2.");
s+1;
s.show();

cout<<" "<<endl;
Word w5("add");
Sentence s5("a word to a sentence.");
Sentence s6 = w5+s5;
s6.show();            

cout<<" "<<endl;
Sentence s12("adding two.");
Sentence s13 ("sentences to form para.") ;
Paragraph p;
p=s12+s13;
//  Word w1,w2,w3,w4;
//   Sentence s1,s2;
//   Paragraph p1,p2;
//   Story st1;
//   w1++;
//   w1--;
//   --w1;
//   ++w1;
//   s1++;
//   s1--;
//   ++s1;
//   --s1;
//   s1 = w1 + w2 + w3; 
//  s2 = w2 + w4;
//  p1 = (s1 + s2); 
//  st1 = st1 + p2 + ((p1 + p1 + p1) + 1);

}
