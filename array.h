#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int initialSize; // Початковий розмір масиву
    int step; // Крок, з яким масив збільшується
    int* arrPtr; // Вказівник на масив
    int currentIndex; // Фактичний розмір масиву (скільки елементів збережено)
    int currentSize; // Розмір масиву 


public:
    // Конструктор
    Array(int initialSize = 10, int step = 5);

    // Деструктор
    ~Array();

    // Метод для збільшення розміру масиву
    void expandArray(int size);

    // Метод для показу елементів масиву
    void showElements();

    // Метод для отримання розміру масиву
    int getSize();

    // Метод для отримання фактичного розміру масиву
    int getElemSize();

    // Метод для додавання елемента в масив
    void setValue(int val);

    // Метод для додавання звичайного масиву в Array
    void setArray(int* pArr, int size);
};

#endif // ARRAY_H