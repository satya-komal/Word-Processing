// Command to compile - make all
// Command to clean -   make clean
// Command to run -  ./Program1 filename.txt
#
# Specifiy the target
all:	sgutta1_grader

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
sgutta1_grader:	Story.o	Paragraph.o	Sentence.o	Word.o	sgutta1_grader.o
	g++ -g	 Story.o	Paragraph.o	Sentence.o	Word.o	sgutta1_grader.o	-o  Program1

# Specify how the object files should be created from source files
Story.o:	Story.cpp
	g++ -g	-c -std=c++11 Story.cpp

Paragraph.o:	Paragraph.cpp
	g++ -g	-c -std=c++11 Paragraph.cpp

Sentence.o:	Sentence.cpp
	g++ -g	-c -std=c++11  Sentence.cpp

Word.o:	Word.cpp
	g++ -g	-c -std=c++11  Word.cpp

sgutta1_grader.o:	sgutta1_grader.cpp
	g++ -g	-c -std=c++11 sgutta1_grader.cpp


# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing

clean:
	rm -f *.o sgutta1_grader Program1
