#include "array.h"
#include <iostream>

using namespace std;

// �����������
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

// ����������
Array::~Array() {
    delete[] arrPtr;
}

// ����� ��� ��������� ������ ������
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

// ����� ��� ������ �������� ������
void Array::showElements() {
    for (int i = 0; i < currentIndex; ++i) {
        cout << arrPtr[i] << " ";
    }
    cout << endl;
}

// ����� ��� ��������� ������ ������
int Array::getSize() {
    return currentSize;
}

// ����� ��� ��������� ���������� ������ ������
int Array::getElemSize() {
    return currentIndex;
}

// ����� ��� ��������� �������� � �����
void Array::setValue(int val) {
    if (currentIndex == currentSize) {
        expandArray(currentSize + step);
    }
    arrPtr[currentIndex++] = val;
}

// ����� ��� ��������� ���������� ������ � Array
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