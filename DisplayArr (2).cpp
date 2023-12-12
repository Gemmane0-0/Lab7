#include "DisplayArr.h"


/**
 * @brief Construct a new Display:: Display object
 *
 */
template<typename T>
DisplayArr<T>::DisplayArr(string data_type){
  this->data_type = data_type;
}
/**
 * @brief prints the integers in the arr
 *
 * @param arr
 * @param size
 */
template<typename T>
void DisplayArr<T>::printArray(const T * arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}

/**
 * @brief returns the memory size of the array
 *
 * @param arr
 * @param size
 * @return float
 */
template<typename T>
int DisplayArr<T>::getArrMemSize(const T arr[], int size){
    int mem_size = 0;
    for (int i = 0; i < size; i++){
        mem_size += sizeof(arr[i]);
    }
    return mem_size;
}
/**
 * @brief returns pointer to the address of an element in arr at the index-th
 *
 * @param arr
 * @param index
 * @return const int*
 */
template<typename T>
const T * DisplayArr<T>::getAddress(T arr[], int index){
    T * addr =  &arr[index];
    return addr;
}

/**
 * @brief prints the total size of the arr and the memory locations of the
 * first, second, and last element in arr
 *
 * @param arr
 * @param size
 */
template<typename T>
void DisplayArr<T>::printMetaArray(T arr[], int size){ // what happens when Display:: is removed?
    int mem_size = getArrMemSize(arr, size);
    int int_size = sizeof(arr[0]);
    printf("Array has %i number of %s. Each %s is worth %i bytes, totaling up to %i bytes of memory.\n", size,data_type.c_str(), data_type.c_str(), int_size, mem_size);
    printf("Element at index %i is located at (%p)\n", 0, getAddress(arr, 0));
    printf("Element at index %i is located at (%p)\n", 1, getAddress(arr, 1));
    printf("Element at index %i is located at (%p)\n", size-1 ,getAddress(arr, size-1));

}

//Explicit instantiations for linking 
template class DisplayArr <int>; 
template class DisplayArr <float>;
template class DisplayArr <double>;
