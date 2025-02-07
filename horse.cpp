#include <horse.h>

Horse::Horse(){
	Horse::position = 0;
	Horse::trackLength = 15;
	Horse::horseNum = 0;
} //end constructor

Horse::init(Horse::horseNum, Horse::trackLength){
	Horse::position = 0;
	Horse::horseNum = horseNum;
	Horse::trackLength = trackLength;
} //end initializer

Horse::advance(){
	

} //end advance


