#include <iostream>
#include <cstdlib>
#include "dsexceptions.h"
#include "AvlTreeB.h"
#include <random>
using namespace std;

int main()
{
    //modified insert & remove outcome
    AvlTree<int> tree1;
    AvlTree<int> tree2;
    float arr[5000];
    for(int i = 0; i < 5000; i++)
    {
        int element = rand()%5000;
        tree1.insert_modified(element);
        tree2.insert_original(element);
        arr[i] = element;
    }
    cout << "Using the original insert, to insert 5000 float numbers needs " << tree2.num_of_balance_original << " times of balance"<<endl;
    cout << "Using the modified insert, to insert 5000 float numbers needs " << tree1.num_of_balance_modified << " times of balance"<<endl;
    tree2.num_of_balance_original= 0;
    tree1.num_of_balance_modified = 0;
    for(int i = 5000; i >= 0; i--)
    {
        tree1.remove_modified(arr[i]);
        tree2.remove_original(arr[i]);
    }
    cout << "Using the original remove, to remove 5000 float numbers needs " << tree2.num_of_balance_original << " times of balance"<<endl;
    cout << "Using the modified remove, to remove 5000 float numbers needs " << tree1.num_of_balance_modified << " times of balance"<<endl;   
    return 0;
}

