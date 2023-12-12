#ifndef DISPLAYARR
#define DISPLAYARR

#include <iostream>
#include <stdio.h> //print()
#include <vector>
#include <string>
using namespace std;

template<typename T>
class DisplayArr {
    public:
        DisplayArr(string data_type);
        void printArray(const T arr [], int size);
        int getArrMemSize(const T arr[], int size);
        void printMetaArray(T arr[], int size);
        const T * getAddress(T arr[], int index);
    private:
    string data_type; 
}; 
#endif
