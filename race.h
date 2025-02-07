//race.h

class Race(){
	private:
		Horse horses[];
		const static int trackLength;
		const int numHorses;
	
	public:
		Race();
		void run();
}; //end Race definition
