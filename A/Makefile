main: main.o Cows.o
	g++ -o main main.o Cows.o
main.o: main.cpp Cows.h
	g++ -c main.cpp
Cows.o: Cows.cpp Cows.h
	g++ -c Cows.cpp
clean:
	rm main.o Cows.o
