#include <iostream>
#include <stdlib.h>
#include <ctime>

#define GAME_LENGTH 50
/******************************* 
void advancePlayerA(int* ptrPlayerA)
{
	int advanceA = rand() % 10;
		if (advanceA <=3){
			space[] = space[] + forwardOne;
		}else if (advanceA <=5){
			space[] = space[] + forwardTwo;
		}else if (advanceA <=6){
			space[] = space[] + mountainPass;
		}else if (advanceA <=7){
			space[] = space[] + rainbowTrail;
		}else if (advanceA <=8){
			space[] = space[] - cherryPitfalls;
		}else{
			space[] = space[] - molassesSwamp;  
	advancePlayerB();			 	 	
}
void advancePlayerB(int* ptrPlayerB)
{
	int advanceB = rand() % 10;	
    if (advanceB <=3){
      space[] = space[] + forwardOne;
    }else if (advanceB <=5){
      space[] = space[] + forwardTwo;
    }else if (advanceB <=6){
      space[] = space[] + mountainPass;
    }else if (advanceB <=7){
    }else if (advanceB <=8){
      space[] = space[] - cherryPitfalls;
    }else{
      space[] = space[] - molassesSwamp;
			
}
void printPosition(int* ptrPlayerA, int* ptrPlayerB)
{
	std::cout << space[A] << std::endl;
	std::cout << space[B] << std::endl;
	
	 /******************************* 
  		do {
    	if (aNum < 1) {
      	std::cout << "A\t\n";
      	i - 1;
      	main();

    	} else {
      	std::cout <<"B\t\n";
      	main();
      	i - 1;
      	std::cout << aNum << std::endl;
		while (*space == 0)
}

****************************************/

int main()
{
	srand(time(NULL));
	char space[50];
		for (int i = 0; i < 51; i++){
		 space[i] = ' ';
		}
	int forwardOne = 1;
	int forwardTwo = 2;
	int mountainPass = 3;
	int rainbowTrail = 5;
	int cherryPitfalls = 3;
	int molassesSwamp = 5;
		std::cout << space << '|' << std::endl;
}
