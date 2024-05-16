#include "array.h"
#include <iostream>

int main() {
    Array arr = Array(-1, -1);
    arr.setValue(6);
    arr.setValue(60);
    arr.setValue(40);
    int arr2[] = { 17, 2, 39, 100, 7 };
    arr.setArray(arr2, 5);
    arr.showElements();
    std::cout << "arr.getSize() " << arr.getSize() << std::endl;
    std::cout << "arr.getElemSize() " << arr.getElemSize() << std::endl;

    return 0;
}