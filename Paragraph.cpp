#include "Paragraph.h"
using namespace std;

void Paragraph::show(){

	sentNode*tmp;
	tmp=firstsentNode;
        while(tmp!=NULL){
		   tmp->thissent->show();
		   //cout<<" ";
		   tmp=tmp->nextsent;  
		} 
//cout<< "This is a show function in Paragraph"<<endl;
}

Paragraph::Paragraph(){
firstsentNode= NULL;
lastsentNode= NULL;
//cout<<"default constructor"<<endl;
}

Paragraph::Paragraph(char*p){
firstsentNode= NULL;
lastsentNode= NULL;
 
int i=0,prev=0,len;
while( p[i]!='\0'){
                  if(p[i]=='.' || p[i]=='?' || p[i]=='!' || p[i]=='\n'){
                    len=i-prev; 
                    char*s =new char[len+1];
                    memcpy( s,&p[prev],len+1);
                    //s[len]='\0';
		//cout<<"testing for size"<<endl;
         	//cout<<s<<endl;
                //cout<<strlen(s);
                    Sentence*newsent = new Sentence(s); 
                    insert(newsent); 
                    prev=i; 
                 
  } 
 i++;
}

//cout<<"Called Paragraph:: Paragraph() [Paragraph constructor]"<<endl;
}


ostream& operator<<(ostream& os, const Paragraph& paragraph){

Paragraph::sentNode*node = paragraph.firstsentNode;
   while(node!=NULL)
      {
	os<<*(node->thissent);
        node=node->nextsent;
      }
  return os;
}

void Paragraph::insert(Sentence *s){
sentNode*tmp =new sentNode;
tmp->thissent= s;
tmp->nextsent=NULL;
if(firstsentNode==NULL){
              firstsentNode=tmp;
              lastsentNode= tmp;
              tmp->nextsent=NULL;
           }
                else{
                    lastsentNode->nextsent = tmp; 
                    lastsentNode = tmp;
                    
                    }

}

 
Paragraph::Paragraph(const Paragraph& p1){

firstsentNode = NULL;
sentNode*tmp=new sentNode;
tmp=p1.firstsentNode;
   while(tmp!=NULL){
       this->insert(tmp->thissent);
       tmp=tmp->nextsent;
                   }

//cout<<"Called Paragraph::Paragraph() [copy constructor]"<<endl;
}

Paragraph::~Paragraph(){
//delete firstsentNode;
//cout<<"Called Paragraph:: Paragraph() [Destructor]"<<endl;
}

Paragraph  Paragraph::operator=(const Paragraph& p1){
if(this==&p1)
return*this;
firstsentNode = NULL;
sentNode*tmp=new sentNode;
tmp=p1.firstsentNode;
   while(tmp!=NULL){
       this->insert(tmp->thissent);
       tmp=tmp->nextsent;
       }
       return*this;
//cout<<"Called Paragraph operator=(Paragraph)  [assignment operator]" <<endl;
}

Paragraph  Paragraph::operator+(const Paragraph& paragraph){
//cout<<"Called Paragraph operator+(Paragraph)::Will return a new (one pargraph longer) Story." <<endl;
}

Paragraph Paragraph::operator+(int a){
sentNode*tmp=firstsentNode;
if(a==1){
 while(tmp!=NULL){
           
           *(tmp->thissent)+1;
            tmp=tmp->nextsent;
         }
       } 
          return *this; 
 
//cout<<"Called Paragraph::operator+(int): Will return this Paragraph with initial letters of Sentences capitalized." <<endl;
}

 /*Paragraph Paragraph::operator++(){
 bool end = false;
	sentNode* tmp = firstsentNode;
	while(!end){
		if(tmp -> nextsent == NULL){
			++(*(tmp -> thissent));
			end = true;
		}
		else{
			++(*(tmp -> thissent));
			tmp = tmp->nextsent;
		}
	}


	return *this;
//cout<<"Called Paragraph operator++(int):: [prefix ++]. Will return this Paragraph with all Words in Pig Latin."<<endl;
}

Paragraph Paragraph::operator--(){
 bool end = false;
	sentNode* tmp = firstsentNode;
	while(!end){
		if(tmp -> nextsent == NULL){
			--(*(tmp -> thissent));
			end = true;
		}
		else{
			--(*(tmp -> thissent));
			tmp = tmp->nextsent;
		}
	}


	return *this;
//cout<<"Called Paragraph operator--(int):: [prefix --]. Will return this Sentence with all Pig Latin words converted back to English."<<endl;
}   */



Paragraph  Paragraph::operator+( Sentence  sentence){
//cout<<"Called Paragraph operator+(Sentence)::Will return a paragraph conatining two sentences." <<endl;
} 
