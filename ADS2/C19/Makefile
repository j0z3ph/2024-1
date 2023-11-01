main: main.cpp biblioteca.hpp libbiblioteca.a
	g++ -o main main.cpp -L. -lbiblioteca

libbiblioteca.a: libbiblioteca.o
	ar cq libbiblioteca.a libbiblioteca.o

libbiblioteca.o: biblioteca.cpp
	g++ -c -o libbiblioteca.o biblioteca.cpp