#include <iostream>
#include "horse.cpp"

int main(){
	bool keepGoing = true;
	int i = 0;
	Horse testHorse;
	while (keepGoing){
		testHorse.advance();
		testHorse.init(1, 15);
		testHorse.printLane();
		i++;
		if (i == 15){
			keepGoing = false;
		}//end if statement
	}//end while loop
	return 0;
}//end main
