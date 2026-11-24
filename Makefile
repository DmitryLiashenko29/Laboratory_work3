.PHONY: clean all

all: a.out

stack.o: stack.h stack.c
	cc -c -o stack.o stack.c

main.o: main.c
	cc -c -o main.o main.c

clean:
	rm -rf a.out *.o

a.out: main.o stack.o
	cc main.o stack.o