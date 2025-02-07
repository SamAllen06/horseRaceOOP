main.o: main.cpp
	g++ -g main.cpp -o main.o

run: main.o
	./main.o

clean: 
	rm *.o


