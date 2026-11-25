.PHONY: clean all

all: a.out

stack.o: stack.h stack.c
	cc -c -o stack.o stack.c

main.o: main.c
	cc -c -o main.o main.c

sort.o: sort.c sort.h
	cc -c -o sort.o sort.c

clean:
	rm -rf a.out *.o

a.out: main.o stack.o sort.o
	cc main.o stack.o sort.o

