#include "race.h"
#include <iostream>

Race::Race(){
	Horse horses[5] = {Horse(), Horse(), Horse(), Horse(), Horse()};
	const static int trackLength = 15;
	const int numHorses = 5;

} //end constructor definition

void Race::run(){
	int i;
	bool keepGoing = true;
	for (i = 0; i < Race::numHorses; i++){
		horses[i].init(i, Race::trackLength);
	} //end for loop
	while (keepGoing){
		for (i = 0; i < Race::numHorses; i++){
			horses[i].advance();
			horses[i].printLane();
			if (horses[i].isWinner()){
				std::cout << "Horse " << i << " wins the race!" << std::endl;
				keepGoing = false;
			}//end if statement
		}//end for loop
		if (keepGoing){
			std::cout << "Press Enter to play another round!" << std::endl;
			std::cin.ignore();
		}//end if statement
	}//end while loop
} // end run definition
