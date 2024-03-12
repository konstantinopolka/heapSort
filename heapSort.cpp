#include "heapSort.h"


// алгоритм, который принимает индекс массива (либо же элемент кучи), и ставит себя и всех его детей в дереве на правильное место в куче
void heapSorting::heapify(vector<int>& arr, int n, int i) // n <= arr.size()
{
    using std::swap;
    int leftKind, rightKind, largest;

    while (i < n) {
        largest = i;
        leftKind = 2 * i + 1;
        rightKind = 2 * i + 2;

        // 
        if (leftKind < n)
            if (arr[leftKind] > arr[largest])
                largest = leftKind;
        if (rightKind < n)
            if (arr[rightKind] > arr[largest])
                largest = rightKind;

        if (largest == i)
            return;
        swap(arr[largest], arr[i]);
        i = largest;
    }
}


void heapSorting::buildHeap(vector<int>& arr)
{
    int last_in_penultimateLevel_of_heap = arr.size() / 2 - 1;
    // постройка кучи: растановка всех элементов массива по куче, начиная с предпоследнего уровня кучи до самого первого
    // последний уровень и так будет сравниваться с предпоследним уровнем
    for (int i = last_in_penultimateLevel_of_heap; i >= 0; i--)
        heapify(arr, arr.size(), i);
}


void  heapSorting::heapSort(vector<int>& arr)
{
    using std::swap;
    buildHeap(arr);
    // корректировка только одного элемента из кучи, самого верхнего, ведь он сейчас взят с самого конца
    // после корректировки снова самый старший элемент на верху кучи
    for (int end = arr.size() - 1; end > 0; --end) {
        swap(arr[0], arr[end]);
        heapify(arr, end, 0);
        
    }
}

