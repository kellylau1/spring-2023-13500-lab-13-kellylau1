CXXFLAGS +=-std=c++11

main: main.o recursion.o
	g++ -o main main.o recursion.o

tests: tests.o recursion.o
	g++ -o tests tests.o recursion.o
	
main.o: main.cpp recursion.o

tests.o: tests.cpp doctest.h recursion.h

recursion.o: recursion.cpp recursion.h 
	g++ -g -c recursion.cpp

clean:
	rm -f main.o tests.o recursion.o
