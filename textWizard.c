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
	//int size = strln(input);
	printf("%d\n", size);
}

//   This is our main method that is responsible for running our program.
int main ()
{
	int size = 0;
	char input[100];
	char yesOrNo[10];
		
	printf("what's yo name?\n");
	scanf("%s", input);
	printf("your name is %s\n", input);
	printf("want to reverse your name? y/n\n");
	scanf("%s\n", yesOrNo);
	if (yesOrNo != "y"){
		printf("ok bye");
	}else{
		void reversedWord(char input [], int size);
		};
	return 0;
			
}
