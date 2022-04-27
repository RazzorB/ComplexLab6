# Makefile NX

complex : mycomplex.o testcmp.o
	g++ - o complex mycomplex.o testcmp.o

mycomplex.o : mycomplex.cpp mycomplex.h
	g++ - c mycomplex.cpp

testcmp.o : testcmp.cpp
	g++ - c testcmp.cpp
