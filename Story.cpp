#include "Story.h"
using namespace std;


#include <fstream>


void Story::show(){
//cout<< "This is a show function in Story"<<endl;
}

Story::Story(){
firstparaNode= NULL;
lastparaNode= NULL;
//cout<<"default constructor"<<endl;
}

Story::Story( const char* textfile)
{
firstparaNode= NULL;
lastparaNode= NULL;
int i=0,prev=0,len; 
int array_size=4000;
char* inputStory=new char[array_size];

ifstream myStory(textfile);
   
    if(myStory.is_open())
    {
       while(!myStory.eof())
               {
                 myStory.get(inputStory[i]);
                 if(inputStory[i] == '\n'){
                 len=i-prev;
                 char*p= new char[len];
                 memcpy(p,&inputStory[prev],len);
	         Paragraph*newpara = new Paragraph(p);
                 insert(newpara);
                 prev=i;
                
                }
                 
	i++;															      
      }										 
  																				                                     ////
   }
   myStory.close();
 //for(i=0;inputStory[i]!='\0';i++)  cout<< inputStory[i] ;  
//cout<<"Called Story:: Story() [Default constructor]"<<endl;
}

void Story::save( const char* outfile)
{
ofstream myStory;
myStory.open("outfile.txt");
paraNode* node=firstparaNode;
     while(node!=NULL){
                  //cout<<"testing3"<<endl;
		  myStory<< *(node->thispara)<<"\n";
		  node=node->nextpara;
                       }
myStory.close();
} 


 ostream& operator<<(ostream& os, const Story& story)
{
  paraNode*node=story.firstparaNode;
  while(node!=NULL)
        {
	  os<<(*(node->thispara))<<"\n";
	  node=node->nextpara;
        }
  return os;
} 

void Story::insert(Paragraph* p) {

paraNode*tmp =new paraNode;
tmp->thispara= p;
tmp->nextpara=NULL;
if(firstparaNode==NULL){
              firstparaNode=tmp;
              lastparaNode= tmp;
             // tmp->nextpara=NULL;
                       }
                else{
                    lastparaNode->nextpara = tmp; 
                    lastparaNode = tmp;
                    
                    }

}


Story::Story(const Story& st1){

firstparaNode = NULL;
paraNode*tmp=new paraNode;
tmp=st1.firstparaNode;
   while(tmp!=NULL){
       this->insert(tmp->thispara);
       tmp=tmp->nextpara;
                   }
//cout<<"Called Story::Story() [copy constructor]"<<endl;
}

 Story::~Story(){
//delete firstparaNode;
//cout<<"Called Story::Story():[Destructor]"<<endl;
}


Story Story::operator+(const Paragraph& paragraph){
//cout<<"Called Story operator+(Paragraph) :: Will return a new (one paragraph longer) Story." <<endl;
}

Story Story::operator=(const Story& st1){
if(this==& st1)
return*this;
firstparaNode = NULL;
paraNode*tmp=new paraNode;
tmp=st1.firstparaNode;
   while(tmp!=NULL){
       this->insert(tmp->thispara);
       tmp=tmp->nextpara;
     }
       return *this;

//cout<<"Called Story operator=(Story) :: [assignment operator] " <<endl;
}
