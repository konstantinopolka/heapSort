#pragma once

#include <vector>
#include <iostream>
using std::vector;



class heapSorting
{
public:
    //Heapify function to maintain heap property.
    // ��������, ������� ��������� ������ ������� (���� �� ������� ����), � ������ ���� � ���� ��� ����� � ������ �� ���������� ����� � ����
    static void heapify(vector<int>& arr, int n, int i);

    //Function to build a Heap from array.
   
    // ��������� ����: ���������� ���� ��������� ������� �� ����, ������� � �������������� ������ ���� �� ������ �������
    // ��������� ������� � ��� ����� ������������ � ������������� �������
    static void buildHeap(vector<int>& arr);

    //Function to sort an array using Heap Sort.
    static void heapSort(vector<int>& arr);
};