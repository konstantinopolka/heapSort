#pragma once

#include <vector>
#include <iostream>
using std::vector;



class heapSorting
{
public:
    //Heapify function to maintain heap property.
    // алгоритм, который принимает индекс массива (либо же элемент кучи), и ставит себя и всех его детей в дереве на правильное место в куче
    static void heapify(vector<int>& arr, int n, int i);

    //Function to build a Heap from array.
   
    // постройка кучи: растановка всех элементов массива по куче, начиная с предпоследнего уровня кучи до самого первого
    // последний уровень и так будет сравниваться с предпоследним уровнем
    static void buildHeap(vector<int>& arr);

    //Function to sort an array using Heap Sort.
    static void heapSort(vector<int>& arr);
};