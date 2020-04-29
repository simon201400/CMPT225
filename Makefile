all: part1 part2

part1:
	g++ -std=c++11 part1.cpp -o part1
	./part1

part2:
	g++ -std=c++11 part2.cpp -o part2
	./part2

clean:
	rm -rf *.o part1 part2