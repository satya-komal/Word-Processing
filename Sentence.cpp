#include "Sentence.h"

using namespace std;


void Sentence::show(){
        wordNode*tmp;
        tmp=firstwordNode;
        while(tmp!=NULL){
	      tmp->thisword->show();
	      cout<<" ";
              tmp=tmp->nextword;
                        } 
//cout<< "This is a show function in Sentence"<<endl;
}

Sentence::Sentence(){
firstwordNode = NULL;
lastwordNode=NULL;
//cout<<"default constructor"<<endl;
}

Sentence::Sentence(char*s){
firstwordNode = NULL;
lastwordNode=NULL;
int i=0,prev=0,len;
//cout<<s<<endl;
//cout<<strlen(s);
//cout<<s[i];
while(s[i]!='\0'){

                   if(s[i]==' '|| s[i]=='.' ||s[i]=='!' ||s[i]=='?'){
                   	
                   
		           len=i-prev;
		           char*w =new char[len+1];
		           memcpy(w,&s[prev],len+1
		           );
                   w[len] = '\0';
                   //cout<<w<<endl;
                   Word*newword = new Word(w);
                   insert(newword);
                   prev=i;
                  
                 }
  i++;
 }
//cout<<"Called Sentence:: Sentence() [Sentence constructor]"<<endl;
}
   
ostream& operator<<(ostream& os, const Sentence& sentence)
{
Sentence::wordNode* node = sentence.firstwordNode;
     while(node !=NULL)
        {
	os << *(node->thisword);
	node=node->nextword;
        }
return os;
}

void Sentence::insert(Word *w){
wordNode*tmp =new wordNode;
tmp->thisword= w;
tmp->nextword = NULL;
if(firstwordNode==NULL){
              firstwordNode=tmp;
              lastwordNode= tmp;
        }
                else{
                    
                    lastwordNode->nextword = tmp; 
                    lastwordNode = tmp; 
                    
                    }

}


Sentence::Sentence(const Sentence& s1){
firstwordNode = NULL;
wordNode*tmp=new wordNode;
tmp=s1.firstwordNode;
   while(tmp!=NULL){
       this->insert(tmp->thisword);
       tmp=tmp->nextword;
                   }
 
//cout<<"Called Sentence::Sentence(Sentence &) [copy constructor]"<<endl;
}

Sentence::~Sentence(){
//delete firstwordNode;
//cout<<"Called Sentence:: Sentence() [Destructor]"<<endl;
}

Sentence Sentence:: operator=(const Sentence& s1){
if(this== &s1)
return *this;
firstwordNode = NULL;
wordNode*tmp=new wordNode;
tmp=s1.firstwordNode;
   while(tmp!=NULL){
       this->insert(tmp->thisword);
       tmp=tmp->nextword;
                   }
        return *this;
//cout<<"Called Sentence operator=(Sentence)::[assignment operator]."<<endl;
}


 Sentence Sentence::operator++(){
 bool end = false;
	wordNode* tmp = firstwordNode;
	while(!end){
		if(tmp -> nextword == NULL){
			++(*(tmp -> thisword));
			end = true;
		}
		else{
			++(*(tmp -> thisword));
			tmp = tmp->nextword;
		}
	}


	return *this;
//cout<<"Called Sentence operator++(int):: [prefix ++]. Will return this Sentence with all Words in Pig Latin."<<endl;
}

Sentence Sentence::operator--(){
bool end = false;
	wordNode* tmp = firstwordNode;
	while(!end){
		if(tmp -> nextword == NULL){
			--(*(tmp -> thisword));
			end = true;
		}
		else{
			--(*(tmp -> thisword));
			tmp = tmp -> nextword;
		}
	}


	return *this;
//cout<<"Called Sentence operator--(int):: [prefix --]. Will return this Sentence with all Pig Latin words converted back to English."<<endl;
}

Sentence Sentence::operator++(int ){
	int c;
	wordNode*tmp;
        tmp=firstwordNode;
        while(tmp!=NULL){
	      tmp->thisword->operator++( c ); 
              tmp=tmp->nextword;
                        }    
//cout<<"Called Sentence operator++():: [postfix ++]. Will return this Sentence with all Words in all caps."<<endl;
}

Sentence Sentence::operator--(int ){
        int c;
	wordNode*tmp;
        tmp=firstwordNode;
        while(tmp!=NULL){
	      tmp->thisword->operator--( c ); 
              tmp=tmp->nextword;
                        }
//cout<<"Called Sentence operator++()::[postfix --].  Will return this Sentence with all Words lowercase."<<endl;
}

Sentence Sentence::operator+(int a){
if(a==1) {
           wordNode*tmp=firstwordNode;
           *(tmp->thisword)+1;
         }
          return *this; 
}

Paragraph Sentence:: operator+( Sentence sentence){
Paragraph*p=new Paragraph;
p->insert(this);
p->insert(& sentence);
return *p; 
//cout<<"Called Sentence operator+(Sentence)::Will return a new Paragraph containing two Sentences."<<endl;
} 

Sentence Sentence::operator+( Word word){
Sentence* s = new Sentence;

	bool end = false;
	wordNode* tmp = firstwordNode;
	while(!end){
		if(tmp -> nextword == NULL){
			s -> insert(tmp -> thisword);
			end = true;
		}
		else{
			s -> insert(tmp -> thisword);
			tmp = tmp -> nextword;
		}
	}

	s -> insert(&word);

	return *s;

//cout<<"Called Sentence operator+(Word)::Will return a new Sentence with one Word appended."<<endl;
}

Paragraph Sentence::operator+( Paragraph paragraph){
//Paragraph* p = new Paragraph;
 }

Word* Sentence::first(){
	
        Word* w = new Word;
	w = (firstwordNode -> thisword);
        return w;	
}
Sentence* Sentence::rest(){
	// cout << "Called Word* Sentence::rest().\n";

	bool end = false;
	wordNode* tmp = firstwordNode;
	tmp = tmp -> nextword;

	Sentence* s = new Sentence;

	while(!end){
		if(tmp -> nextword == NULL){
			s -> insert(tmp -> thisword);
			end = true;
		}
		else{
			s -> insert(tmp -> thisword);
			tmp = tmp -> nextword;
		}
	}
	
	return s; 
}
