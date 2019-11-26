ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: main.o main.c
	$(CC) -o program main.o

main.o: main.c
	$(CC) -c main.c

run:
	./program

clean:
	rm *.o
	rm *.exe.stackdump
	rm *.exe
	rm a.out
