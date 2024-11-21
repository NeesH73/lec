CC = g++

all: main

main: main.o
	$(CC) -o main main.o

main.o: main.cpp
	$(CC) -c main.cpp

run: main
	./main

run-fail: main
	./main ; echo "Exit code: $$?" ; exit 1

clean:
	rm -rf *.o main