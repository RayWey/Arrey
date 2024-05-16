#include "array.h"
#include <iostream>

using namespace std;

// Конструктор
Array::Array(int initialSize, int step) {
    if (initialSize <= 0)
        initialSize = 1;
    if (step <= 0)
        step = 1;
    this->initialSize = initialSize;
    this->step = step;
    arrPtr = new int[initialSize];
    currentIndex = 0;
    currentSize = initialSize;
}

// Деструктор
Array::~Array() {
    delete[] arrPtr;
}

// Метод для збільшення розміру масиву
void Array::expandArray(int size) {
    if (size < 1)
        cout << "size is less than 1" << endl;
    else {
        int* temp = new int[size];
        for (int i = 0; i < currentSize; ++i) {
            temp[i] = arrPtr[i];
        }
        delete[] arrPtr;
        arrPtr = temp;
        currentSize = size;
    }
}

// Метод для показу елементів масиву
void Array::showElements() {
    for (int i = 0; i < currentIndex; ++i) {
        cout << arrPtr[i] << " ";
    }
    cout << endl;
}

// Метод для отримання розміру масиву
int Array::getSize() {
    return currentSize;
}

// Метод для отримання фактичного розміру масиву
int Array::getElemSize() {
    return currentIndex;
}

// Метод для додавання елемента в масив
void Array::setValue(int val) {
    if (currentIndex == currentSize) {
        expandArray(currentSize + step);
    }
    arrPtr[currentIndex++] = val;
}

// Метод для додавання звичайного масиву в Array
void Array::setArray(int* pArr, int size) {
    if (size > 0) {
        expandArray(currentSize + size);
        for (int i = 0; i < size; ++i) {
            setValue(pArr[i]);
        }
    }
    else
        cout << "size is less than 1" << endl;
}