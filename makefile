main.o: main.cpp horse.h race.h
	g++ -g main.cpp horse.cpp race.cpp -o main.o

run: main.o
	g++ -g main.cpp horse.cpp race.cpp -o main.o
	./main.o

clean: 
	rm *.o


