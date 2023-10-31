main: main.cpp registros.hpp libregistros.a
	g++ -o main main.cpp -L. -lregistros

libregistros.a: libregistros.o 
	ar cq libregistros.a libregistros.o

libregistros.o: registros.cpp
	g++ -c -o libregistros.o registros.cpp