#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int initialSize; // ���������� ����� ������
    int step; // ����, � ���� ����� ����������
    int* arrPtr; // �������� �� �����
    int currentIndex; // ��������� ����� ������ (������ �������� ���������)
    int currentSize; // ����� ������ 


public:
    // �����������
    Array(int initialSize = 10, int step = 5);

    // ����������
    ~Array();

    // ����� ��� ��������� ������ ������
    void expandArray(int size);

    // ����� ��� ������ �������� ������
    void showElements();

    // ����� ��� ��������� ������ ������
    int getSize();

    // ����� ��� ��������� ���������� ������ ������
    int getElemSize();

    // ����� ��� ��������� �������� � �����
    void setValue(int val);

    // ����� ��� ��������� ���������� ������ � Array
    void setArray(int* pArr, int size);
};

#endif // ARRAY_H