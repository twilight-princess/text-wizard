//   Honor Pledge: I  pledge that I have neither
//   given nor receieved any help on this assignment.
//
//   daelevan

//   Assignment #1
//   Created By: Darlene Evans

#include <stdio.h>
#include <string.h>

char input[0];
int wordLength = (strlen(input));
int beginning = 0;
int placeHolder = 0;
int end = (wordLength-1);

//   This function uses recursion to reverse a word in C.
void  reversedWord (char input [], int size)
{

	do { 
		beginning = placeHolder;
		beginning = end;
		end = placeHolder;
		
	} while (beginning >= end);	

}

//   This is our main method that is responsible for running our program.
int main ()
{
	//char input[0];
	//int wordLength;
	//wordLength = (sizeof(input)/(sizeof(char)));
	//wordLength = (strlen(input));
	printf("Enter a word to reverse:\n");
  scanf("%s", input);

	reversedWord(input, wordLength);
	
	return(0);
			
}
