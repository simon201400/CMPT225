all: TestLeaves TestDeep TestBalance

TestLeaves: BinarySearchTree1.h TestLeaves.cpp
	g++ -std=c++11 TestLeaves.cpp -o TestLeaves

TestDeep: BinarySearchTree2.h TestDeep.cpp
	    g++ TestDeep.cpp -std=c++11 -o TestDeep

TestBalance: AvlTreeB.h TestBalance.cpp
	    g++ TestBalance.cpp -std=c++11 -o TestBalance

clean:
	rm -rf *.0 TestLeaves TestDeep TestBalance