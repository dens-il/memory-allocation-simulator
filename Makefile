CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c11

all: memsim

memsim: main.o memory.o
	$(CC) $(CFLAGS) -o memsim main.o memory.o

main.o: main.c memory.h
	$(CC) $(CFLAGS) -c main.c

memory.o: memory.c memory.h
	$(CC) $(CFLAGS) -c memory.c

clean:
	rm -f *.o memsim
