main: main.o Cows.o Clock.o
	g++ -o main main.o Cows.o Clock.o
main.o: main.cpp Cows.h Clock.h
	g++ -c main.cpp
Cows.o: Cows.cpp Cows.h
	g++ -c Cows.cpp
Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp
clean:
	rm main.o Cows.o Clock.o
