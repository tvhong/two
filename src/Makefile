CFLAGS=-g
CC=g++

all: main

main: game.o main.o screen/init_screen.o
	$(CC) $(CFLAGS) game.o main.o screen/init_screen.o -o main -lsfml-graphics -lsfml-window -lsfml-system

game.o: game.cpp
	$(CC) $(CFLAGS) -c game.cpp

main.o: main.cpp game.h
	$(CC) $(CFLAGS) -c main.cpp

screen/init_screen.o: screen/init_screen.h screen/init_screen.cpp
	$(CC) $(CFLAGS) -c screen/init_screen.cpp -o screen/init_screen.o
