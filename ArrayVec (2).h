#ifndef ARRAYVEC
#define ARRAYVEC

#include <vector>
#include <cstdlib>
using namespace std;


template<typename T> 
class ArrayVec{
    public:
        ArrayVec();
        void randGenArr(T arr[], int n, int exclusive_range);
        void randGenVec(vector<T> & v, int n, int exlcusive_range);
        int getSize(const T arr[], int cap);
    private:
};
#endif
