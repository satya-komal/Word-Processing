                                                        //Satya Komal Gutta
#include "Word.h"
#include "Sentence.h"
#include "Paragraph.h"
#include "Story.h"

#include <iostream>
#include <stdlib.h>

using namespace std;

/*
	Fill in the following program according to the comments.

	As you add your functionality, remove the print statements, and
	comment out the "incomplete" increment.

	If your program does not have a certain functionality implemented
	leave the print statement instead.

	Also leave the print statement if your implementation is incomplete
	or causes a segfault with your code.
*/

int main()
{
	int fi = 0;

	//--------- FILE IO ----------------------

	cout<<endl<<"----------------------------------------------"<<endl;
	cout<<"FILE IO FUNCTIONS"<<endl;

	//read in file Brady.txt to create a story
	Story myStory("Brady.txt");
		
	//++fi;

	//save story
	//cout<<"Save story not implemented"<<endl;
	myStory.save("outputfile.txt");
	//++fi;

	//print out story
	//cout<<"<< for story not implemented"<<endl;
	cout<<myStory<<endl;
	//++fi;

	cout<<endl<<"----------------------------------------------"<<endl;

	//--------- FIRST FUNCTIONS --------------

	cout<<endl<<"----------------------------------------------"<<endl;
	cout<<"FIRST FUNCTIONS"<<endl;

	//get paragraph using story.first()
	cout<<"story.first() not implemented"<<endl;
	++fi;

	//print out paragraph
	cout<<"<<for para not implemented"<<endl;
	++fi;

	//get sentence using para.first()
	cout<<"para.first() not implemented"<<endl;
	++fi;

	//print out sentence
	cout<<"<<for sentence not implemented"<<endl;
	++fi;

	//get word using sentence.first()
	Sentence s13 ("Getting the first word.");
	Word*w13=s13.first();
        cout<<" "<<endl;
	//++fi;

	//print out word
	w13->show();
	cout<<" "<<endl;
	//++fi;

	cout<<endl<<"----------------------------------------------"<<endl;

	//---------- OPERATORS IN FORM A + B --------

	cout<<endl<<"----------------------------------------------"<<endl;
	cout<<"A+B OPERATORS"<<endl;

	//For this and the following sections either use the above
	//created word/sent/para/story
	//or instantiate them using some other constructor
	//After using each operator, print out the result

	//story + story = story
	cout<<"story + story = story not implemented"<<endl;
	++fi;

	//story + para = story
	cout<<"story + para = story not implemented"<<endl;
	++fi;

	//para + story = story
	cout<<"para + story = story not implemented"<<endl;
	++fi;

	//para + para = para
	cout<<"para + para = para not implemented"<<endl;
	++fi;

	//para + sentence = para
	cout<<"para + sent = para not implemented"<<endl;
	++fi;

	//sent + para = para
	cout<<"sent + para = para not implemented"<<endl;
	++fi; 

	//sent + sent = para
	Sentence s6("adding two.");
        Sentence s7 ("sentences to form a para.") ;
        Paragraph p6;
        p6=s6+s7;
        p6.show();
	cout<<" "<<endl;
	//++fi;

	//sent + word = sent
	Sentence s0("Word added to.");
        Word w("sentence");                                   
        Sentence s11;
        s11=s0+w;
        s11.show();
	cout<<" "<<endl;
	//++fi;

	//word + sent = sent
	Word w6("adding");
        Sentence s9("a word to a sentence.");
        Sentence s10 = w6+s9;
        s10.show();    
	cout<<" "<<endl;
	//++fi;

	//word + word = sent
	Word word("add");
	Word word1("words");
	Sentence s8= word+word1;
	cout<<" "<<endl;
	//++fi;

	cout<<endl<<"----------------------------------------------"<<endl;

	//---------- OPERATORS IN FORM A++ and A-- --------------

	cout<<endl<<"----------------------------------------------"<<endl;
	cout<<"A++ AND A-- OPERATORS"<<endl;

	//word++
	Word w4("living");
        w4++ ;
        w4.show();
	cout<<" "<<endl;
	//++fi;

	//word--
	Word w5("TOGETHER");
        w5-- ;
        w5.show();
	cout<<" "<<endl;
	//++fi;

	//sent++
	Sentence s4("the brady bunch. ");
        s4++;
        s4.show();
	cout<<" "<<endl;
	//++fi;

	//sent--
	Sentence s5("THATS THE WAY WE BECAME THE BRADY BUNCH. ");
        s5--;
        s5.show();
	cout<<" "<<endl;
	//++fi;

	//para++
	cout<<"para in caps not implemented"<<endl;
	++fi;

	//para--
	cout<<"para in lower not implemented"<<endl;
	++fi;

	//story++
	cout<<"story in caps not implemented"<<endl;
	++fi;

	//story--
	cout<<"story in lower not implemented"<<endl;
	++fi;

	cout<<endl<<"----------------------------------------------"<<endl;

	//---------- OPERATORS IN FORM A+1----------

	cout<<endl<<"----------------------------------------------"<<endl;
	cout<<"A+1 OPERATORS"<<endl;

	//word+1
	Word w3("test");
        w3+1;
        w3.show();
        cout<<""<<endl;
	//++fi;

	//sent+1
	Sentence s3("test for sentence.");
        s3+1;
	s3.show();
	cout<<""<<endl;
	//++fi;

	//para+1
	Paragraph p3("the Brady Bunch.thats the way we became the Brady Bunch.");
        p3+1;
	p3.show();
	cout<<""<<endl;
	//cout<<"para + 1 not implemented"<<endl;
	//++fi;

	//story+1
	cout<<"story + 1 not implemented"<<endl;
	++fi;

	cout<<endl<<"----------------------------------------------"<<endl;

	//----------- PIG LATIN OPERATORS -----------

	cout<<endl<<"----------------------------------------------"<<endl;
	cout<<"PIG LATIN OPERATORS"<<endl;

	//word pig latin
	Word w1("autumn");
        ++w1;
        w1.show(); 
	cout<<""<<endl;
	//++fi;

	//word unpig latin
	Word w2("autumnway");
        --w2;
        w2.show();
	cout<<""<<endl;
	//++fi;

	//sent pig latin
	
	Sentence s1("Like this.");
        ++s1;
        s1.show(); 
	
	cout<<""<<endl;
	//++fi;

	//sent unpig latin
	cout<<"sent pig latin undone not implemented"<<endl;
	++fi;

	//para pig latin
	 
	cout<<"para pig latin not implemented"<<endl;
	++fi;

	//para unpig latin
	
	cout<<"para pig latin undone not implemented"<<endl;
	++fi; 

	//story pig latin
	cout<<"story pig latin not implemented"<<endl;
	++fi;

	//story unpig latin
	cout<<"story pig latin undone not implemented"<<endl;
	++fi;

	cout<<endl<<"----------------------------------------------"<<endl;

	cout<<endl<<"TOTAL INCOMPLETE: "<<fi<<endl;
	return 0;
}

