main: main.o functions.o
	gcc -g -Wall -ansi -pedantic main.o functions.o -o main

main.o: main.c data.h
	gcc -c -Wall -ansi -pedantic main.c -o main.o

functions.o: functions.c data.h
	gcc -c -Wall -ansi -pedantic functions.c -o functions.o

