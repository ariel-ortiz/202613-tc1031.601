CC=g++ -g

main: main.o
	$(CC) main.o -o main

main.o: main.cpp stack.h
	$(CC) -c main.cpp

.PHONY: clean
clean:
	rm -f main main.o
