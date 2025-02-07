#include "horse.h"

#include <random>
#include <iostream>

Horse::Horse(){
	Horse::position = 0;
	Horse::trackLength = 15;
	Horse::horseNum = 0;
} //end constructor

void Horse::init(int horseNum, int trackLength){
	position = Horse::position;
	Horse::horseNum = horseNum;
	Horse::trackLength = trackLength;
} //end initializer

void Horse::advance(){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);
	int isAdvance = dist(rd);
	
	if (isAdvance == 1){
		Horse::position++;
	} //end if statement

} //end advance

void Horse::printLane(){
	int i;
	for (i=0; i < trackLength; i++){
		if (i == Horse::position){
			std::cout << horseNum;
		}//end if statement
		else{
			std::cout << ".";
		}//end else statement
	}//end for statement
	std::cout << std::endl;
}//end printlane definition

bool Horse::isWinner(){
	bool isWinner;
	if (Horse::position == Horse::trackLength){
		isWinner = true;
	}//end if statement
	return isWinner;
}//end isWinner definition
