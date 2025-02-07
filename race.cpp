#include "race.h"
#include "horse.cpp"

Race::Race(){
	const int numHorses = 5;
	const static int trackLength = 15;
	Horse horses[] = [0, 0, 0, 0, 0];

} //end constructor definition

void Race::run(){
	int i;
	for (i = 0; i < Race::numHorses; i++){
		horses[i].horseNum = i;
	} //end for statement

} // end run definition
