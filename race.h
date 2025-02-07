//race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race{
	private:
		Horse horses[5];
		const static int trackLength=15;
		const int numHorses=5;
	
	public:
		Race();
		void run();
}; //end Race definitioni

#endif
