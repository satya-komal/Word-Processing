#include "Word.h"

using namespace std;

void Word::show(){
int i=0;
while(chararray[i]!='\0'){
            
            cout<<chararray[i];
            i++;
//cout<< "This is a show function in Story"<<endl;
                         }
}                          

Word::Word(){
chararray='\0';
//cout<<"default constructor"<<endl;
}

Word::Word(char* w){
int numlen = strlen(w);
//while(w[numlen++] != '\0');
int i=0;
chararray =new char[numlen +1];
           for (i=0;i<numlen; i++){
                chararray[i]= w[i];
                                  }
chararray[numlen]='\0';
                                   
//cout<<"Called Word:: Word() [chararray constructor]"<<endl;
}


ostream& operator<<(ostream& os, const Word& word){
 
os<< word.chararray;
return os;
}

Word::Word (const Word& w1){
   int numlen = sizeof(w1);
   chararray = new char[numlen+1];
   int i=0;
        for(i=0;i<numlen;i++)
	  {
	     chararray[i]=w1.chararray[i]; 
	  }
chararray[numlen]='\0';
//cout<<"Called Word:: Word() [Copy Constructor]"<<endl;
}

Word::~Word(){
//cout<<"Called W(){
//delete chararray;ord:: Word() [Destructor]"<<endl;
}

Word Word::operator=(const Word& w1){
if(this == &w1)
return *this;
   int numlen = sizeof(w1);
   chararray = new char[numlen+1];
   int i=0;
        for(i=0;i<numlen;i++)
	  {
	   chararray[i]=w1.chararray[i]; 
	  }
return *this;

//cout<<"Called Word:: Word() [Assignment Operator]"<<endl;
}

Word Word::operator++(){
int i=0;
while(chararray[i]!='\0'){
   i++;
   }
if(chararray[0]=='a'||chararray[0]=='e'||chararray[0]=='i'||chararray[0]=='o'||chararray[0]=='u'||chararray[0]=='A'||chararray[0]=='E'||chararray[0]=='I'||chararray[0]=='O'||chararray[0]=='U'){
        
                 chararray[i]='w';
                 chararray[i+1]='a';
                 chararray[i+2]='y';  
                 chararray[i+3]='\0';
  			  } 
           else{
		char temparray = chararray[0];
		int w = 0;
		for(w = 0; w < i; w++){
			chararray[w] = chararray[w+1];
		}
		chararray[w-1] = temparray;
		chararray[w] = 'a';
		chararray[w+1] = 'y';
		chararray[w+2] = '\0';  			  
               } 
                return*this ;                  
//cout<<"Called Word operator++(int):: [prefix ++]. Will return this word in Pig Latin (if it isn't already). "<<endl;
} 

Word Word:: operator--(){
int i=0;
while(chararray[i]!='\0'){
i++;
}
char a=chararray[i-3];
if(a=='w'){
           chararray[i-1]='\0';
           chararray[i-2]='\0';
           chararray[i-3]='\0';
}
          else{
          int w;
          char temparray=chararray[w-3];
          for(w=i-3;w>0;w--){
                  chararray[w]=chararray[w-1];
          }
          
          chararray[0]= temparray;
          chararray[i-1]='\0';
          chararray[i-2]='\0';
          }
          return *this;

//cout<<"Called Word operator--(int) ::[prefix --]. Will return this Word converted from Pig Latin to English. "<<endl;
}

Word Word::operator+(int a){
if(a==1) {
           char ch;
           ch= chararray[0];
           ch=toupper(ch);
           chararray[0]=ch;
         }

}
Word Word:: operator++(int a){
int i=0;
while(chararray[i]!='\0'){
          chararray[i]=toupper(chararray[i]);
          i++;           
                         }                        
//cout<<"Called Word operator++():: [postfix ++]. Will return this word in all caps. "<<endl;
}

Word Word:: operator--(int a){
int i=0;
while(chararray[i]!='\0'){
          chararray[i]=tolower(chararray[i]);
          i++;           
                         }  
//cout<<"Called Word operator--() ::[postfix --]. Will return this word in all lowercase. "<<endl;
}

Sentence Word:: operator+( Word word){
Sentence*s=new Sentence;
s->insert(this);
s->insert(&word);
s->show();
return *s; 
//cout<<"Called Word::operator+(Word). Will return a new Sentence containing two Words."<<endl;
}

Sentence Word::operator+ (Sentence s){
Sentence*a=new Sentence;
Sentence::wordNode* tmp;
a->insert(this);
tmp=s.firstwordNode;
while(tmp!=NULL){
                a->insert(tmp->thisword);
                tmp=tmp->nextword;
                }
    return*a;
}
