#include <iostream>
#include "List.h"
#include "Vector2.h"
#include <time.h> 

using namespace std;
double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main(int argc, char * const argv[])
{
    clock_t start, finish;
    int size[4] = {100, 200, 300, 400};
    Vector <int> v1;
    List <int> l1;   
    Vector <float> v2;
    List <float> l2;

    //type: int
    for(int size_i = 0; size_i < 4; ++size_i)
    {
        cout << "[Mengqi Wang]" << endl;
        cout << "[301405066]" << endl;
        cout << "[mengqiw]" << endl;
        cout << "Program: [part2]" << endl;
        cout << "Type of Elements: [int]" << endl;
        cout << "Number of Elements: [" << size[size_i] << "]" << endl;
        cout << "Time units: [milliseconds]" << endl;

        //vector insert
        start = clock();
        for(int i = 0; i < size[size_i]; ++i)
        {
            v1.push_front(i);
        }
        finish = clock();
        double time_taken = elapsed_time(start,finish);
        cout << "Time for Vector Insertion: [" << time_taken << "]" << endl;

        //list inssert
        start = clock();
        for(int i = 0; i < size[size_i]; ++i)
        {
            l1.push_front(i);
        }
        finish = clock();
        time_taken = elapsed_time(start,finish);
        cout << "Time for List Insertion: [" << time_taken << "]" << endl;

        //vector visiting
        start = clock();
        v1.visitAll();
        finish = clock();
        time_taken = elapsed_time(start,finish);
        cout << "Time for Vector Visiting: [" << time_taken << "]" << endl;

        //list visiting
        start = clock();
        l1.visitAll();
        finish = clock();
        time_taken = elapsed_time(start,finish);
        cout << "Time for List Visiting: [" << time_taken << "]" << endl;

        cout << endl;
    }

    //type: float
    for(int size_i = 0; size_i < 4; ++size_i)
    {
        cout << "[Mengqi Wang]" << endl;
        cout << "[301405066]" << endl;
        cout << "[mengqiw]" << endl;
        cout << "Program: [part2]" << endl;
        cout << "Type of Elements: [float]" << endl;
        cout << "Number of Elements: [" << size[size_i] << "]" << endl;
        cout << "Time units: [milliseconds]" << endl;

        //vector insert
        start = clock();
        for(int i = 0; i < size[size_i]; ++i)
        {
            v2.push_front((float)(rand()%100 + 100));
        }
        finish = clock();
        double time_taken = elapsed_time(start,finish);
        cout << "Time for Vector Insertion: [" << time_taken << "]" << endl;

        //list inssert
        start = clock();
        for(int i = 0; i < size[size_i]; ++i)
        {
            l2.push_front((float)(rand()%100 + 100));
        }
        finish = clock();
        time_taken = elapsed_time(start,finish);
        cout << "Time for List Insertion: [" << time_taken << "]" << endl;

        //vector visiting
        start = clock();
        v2.visitAll();
        finish = clock();
        time_taken = elapsed_time(start,finish);
        cout << "Time for Vector Visiting: [" << time_taken << "]" << endl;

        //list visiting
        start = clock();
        l2.visitAll();
        finish = clock();
        time_taken = elapsed_time(start,finish);
        cout << "Time for List Visiting: [" << time_taken << "]" << endl;
        cout << endl;
    }

    return 0;
}