all: test1 test2

test1: test1.o
	g++ -o test1 test1.o

test2: test2.o
	g++ -o test2 test2.o

test1.o: test1.cpp exp1.h
	g++ -c test1.cpp

test2.o: test2.cpp exp2.h
	g++ -c test2.cpp

clean:
	rm -rf *.o test1 test2