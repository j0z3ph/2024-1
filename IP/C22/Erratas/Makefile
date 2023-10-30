run: main
	./main

main: main.c matrix.h libmatrix.a
	gcc -o main main.c -L. -lmatrix

libmatrix.a: matrix.o
	ar -cq libmatrix.a matrix.o

matrix.o: matrix.c
	gcc -Wall -c matrix.c