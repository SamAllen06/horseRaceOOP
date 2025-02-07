main.o: main.cpp
	g++ -g main.cpp -o main.o

horse.o: horse.cpp horse.h
	g++ -g horse.cpp -o horse.o

race.o: race.cpp race.h
	g++ -g race.cpp -o race.o

run: main.o
	./main.o

clean: 
	rm *.o


