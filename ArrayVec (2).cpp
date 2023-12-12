#include "ArrayVec.h"

/**
 * @brief Default Constuctor
 *
 */
template<typename T> 
ArrayVec<T>::ArrayVec()
{

}

/**
 * @brief modifies arr to contain up to n integers ranging
 * from 0 to exclusive_range (aka [0,exclusive_range))
 *
 * @param arr
 * @param n
 * @param exclusive_range
 */
template<typename T> 
void ArrayVec<T>::randGenArr(T arr[], int n, int exclusive_range){
    for(int i = 0; i < n; i++){
        arr[i] = rand() % exclusive_range;
    }
}

/**
 * @brief modifies v to contain up to n integers ranging
 * from 0 to exclusive_range (aka [0,exclusive_range))
 *
 * @param v
 * @param n
 * @param exclusive_range
 */
template<typename T> 
void ArrayVec<T>::randGenVec(vector<T> & v, int n, int exclusive_range){
    for(int i = 0; i < n; i++){
        // v[i] = rand() % exclusive_range;
        v.push_back(rand() % exclusive_range);
    }
}
/**
 * @brief returns the size of the array, which is at most cap
 *
 * @param arr
 * @param cap (capacity)
 * @return int
 */
template<typename T> 
int ArrayVec<T>::getSize(const T arr[], int cap){
    int size = 0;
    for(int i = 0; i < cap; i++){
        if (arr[i] == -1){
            break;
        }
        size++;
    }
    return size;
}


template class ArrayVec<int>;
template class ArrayVec<float>;
template class ArrayVec<double>;
