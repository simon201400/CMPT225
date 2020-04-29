#include "BinarySearchTree2.h"
#include <iostream>

using namespace std;
int main() {
    BinarySearchTree<int> tree;
    cout <<"The correct output should be 0, and my output is "<<tree.countDeep(1)<<endl;
    tree.insert(13);
    cout <<"The correct output should be 0, and my output is "<<tree.countDeep(1)<<endl;
    tree.insert(11);
    cout <<"The correct output should be 0, and my output is "<<tree.countDeep(1)<<endl;
    tree.insert(10);
    cout <<"The correct output should be 1, and my output is "<<tree.countDeep(1)<<endl;
    tree.insert(9);
    cout <<"The correct output should be 2, and my output is "<<tree.countDeep(1)<<endl;
    tree.insert(16);
    cout <<"The correct output should be 2, and my output is "<<tree.countDeep(1)<<endl;
    tree.insert(15);
    cout <<"The correct output should be 3, and my output is "<<tree.countDeep(1)<<endl;
    tree.insert(19);
    cout <<"The correct output should be 4, and my output is "<<tree.countDeep(1)<<endl;
    tree.insert(12);
    cout <<"The correct output should be 5, and my output is "<<tree.countDeep(1)<<endl;
    return 0;
}
