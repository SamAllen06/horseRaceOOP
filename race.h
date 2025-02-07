//race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race(){
	private:
		Horse horses[];
		const static int trackLength;
		const int numHorses;
	
	public:
		Race();
		void run();
}; //end Race definitioni

#endif
