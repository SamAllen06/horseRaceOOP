#include "race.h"
#include "horse.cpp"

Race::Race(){
	const int numHorses = 5;
	const static int trackLength = 15;
	Horse horses[numHorses] = [0, 0, 0, 0, 0];

} //end constructor definition

void Race::run(){
	int i;
	bool keepGoing = true;
	for (i = 0; i < Race::numHorses; i++){
		horses[i].init(1, trackLength);
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
		std::cout << "Press Enter to play another round!" << std::endl;
		std::cin.ignore();
	}//end while loop
} // end run definition
