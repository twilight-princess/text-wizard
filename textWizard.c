//   Honor Pledge: I  pledge that I have neither
//   given nor receieved any help on this assignment.
//
//   daelevan

//   Assignment #1
//   Created By: Darlene Evans

#include <stdio.h>
#include <string.h>

//   This function uses recursion to reverse a word in C.
void reversedWord (char input [], int size)
{
        printf("Enter a word to reverse:\n");
        scanf("%s", input);
        printf("your word in reverse is %s\n", input);
	printf("%d\n", nameLen);
}

//   This is our main method that is responsible for running our program.
int main ()
{
	//int nameLen = 0;
	char input[0];
	char yesOrNo [0];		
	int nameLen = strlen(input);
	reversedWord(input, nameLen);
	return(0);
			
}
