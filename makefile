CFLAGS=-c -Wall

all: main

main: main.o Bet.o BetSlip.o
	g++ main.o Bet.o BetSlip.o -o main

main.o: main.cpp
	g++ $(CFLAGS) main.cpp

Bet.o: Bet.cpp
	g++ $(CFLAGS) Bet.cpp

BetSlip.o: BetSlip.cpp
	g++ $(CFLAGS) BetSlip.cpp

clean:
	-rm *o main
