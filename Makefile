all: Queen.exe

Queen.exe: main.o Queen.o
	gcc -std=c99 -o Queen.exe main.o Queen.o

main.o: main.c Queen.h
	gcc -std=c99 -c main.c

Queen.o: Queen.c Queen.h
	gcc -std=c99 -c Queen.c

clean:
	@del -f Queen.exe main.o Queen.o rez.txt
