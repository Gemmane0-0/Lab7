//Lab_7.cpp
/***
 * CSE 2010 Fall 2023
 * Lab #{7}
 * {Emmanuel Garcia } #{007266812}
 * {12/8/2023}
 *
 * The Following is the Final submission of lab 7
 *
 * At the moment there wasn't that much challenging obstacles as I am getting comfortable compiling and running the code.
 *
***/

#include <iostream>
#include <typeinfo> // Include the necessary header for typeid
#include "ArrayVec.h"
#include "DisplayArr.h"
using namespace std;

template <typename T>
void processArray() {
    const int CAPACITY = 10;
    T test_arr[CAPACITY];

    // Convert typeid(T).name() to string for concatenation
    string data_type = "Array of " + string(typeid(T).name());

    // Initialize ArrayVec and DisplayArr
    DisplayArr<T> disp = DisplayArr<T>(data_type);
    ArrayVec<T> av = ArrayVec<T>();

    // Populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenArr(test_arr, num_elem, range);

    // Display contents
    int test_arr_size = av.getSize(test_arr, CAPACITY);
    cout << "Array Elements\n";
    disp.printArray(test_arr, test_arr_size);
    cout << "Array Memsize\n";
    disp.printMetaArray(test_arr, test_arr_size);
}

int main() {
    // Call the processArray function with the desired data type
    processArray<double>();  // Example with double data type
    return 0;
}
