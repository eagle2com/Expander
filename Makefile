
all: main.o

Literal.o: Literal.cpp Literal.h
	g++ Literal.cpp -o Literal.o
	
LiteralElement.o: LiteralElement.cpp LiteralElement.h Literal.o
	g++ LiteralElement.cpp Literal.o -o LiteralElement.o
	
LinearSystem.o: LinearSystem.cpp LinearSystem.h LiteralElement.o Literal.o
	g++ LinearSystem.cpp LiteralElement.o Literal.o -o LinearSystem.o
