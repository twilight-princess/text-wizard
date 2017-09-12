//   Honor Pledge: I  pledge that I have neither
//   given nor receieved any help on this assignment.
//
//   daelevan

//   Assignment #1
//   Created By: Darlene Evans

#include <stdio.h>
#include <string.h>

// assigning variables to empty strings or values
char input[0];
int beginning = 0;
int placeHolder = 0;
int end = 0;

//   This function uses recursion to reverse a word in C.
void  reversedWord (char input [], int size)
{
	// if the the first half of the word gets bigger than the last half of the word then it will print the reversedWord
	if (beginning >= end){ 
		printf("%s\n", input);
 		
		// if user enters Y then it will match the variable yes  
		char yesOrNo[0];
		char yes[] = "Y";
	
		printf("Would you like to continue? (Y/N)\n");
		scanf("%s", yesOrNo);
		
		// if they do not enter Y then it will quit
		if (yesOrNo[0] != yes[0]){
			printf("Okay, bye!\n");
		} else {
    	
			// if they do enter yes then the variables are reset and the main function restarts
			beginning = 0;
    	placeHolder = 0;
    	end = 0;
			main ();
		};	
		
	// the places in the array where the entered word is stored will switch
	} else {
		
		// temporarily stores beginning in a variable then places that into the end
		placeHolder = input[beginning];
		input[beginning] = input[end];
		input[end] = placeHolder;
		
		// adds one or subtracts one to move inward
		beginning = beginning+1;
		end = end-1;
		
		// repeats the function	
		reversedWord(input, end);
	};
}

//   This is our main method that is responsible for running our program.
int main ()
{
	
	// stores user input and length of the entered word
	printf("Enter a word to reverse:\n");
  scanf("%s", input);
	
	// sets variable end equal to position in the array
	end = strlen(input)-1;

	reversedWord(input, end);
	
	return(0);
			
}
