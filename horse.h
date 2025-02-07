//horse.h

#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse{
	private:
		int position;
		int trackLength;
		int horseNum;
	
	public:
		Horse();
		void init(int horseNum, int trackLength);
		void advance();
		void printLane();
		bool isWinner();

}; //end Horse definition


#endif
