#include <iostream>
#include <vector>
#include "Header.h"
using namespace std;


int main() {
    vector<int> data = {
        12, 11, 15, 10, 9, 1, 2,
        3, 13, 14, 4, 5, 6, 7, 8
    };
    heapSorting::heapSort(data);
    for (int i : data) 
        cout << i << " ";
}