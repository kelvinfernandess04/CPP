#include <iostream>
#include <stdio.h>
#include "C++\Bubble Sort\Bubble-Sort.cpp"
#include "C++\Insertion Sort\Insertion-Sort.cpp"
#include "C++\Selection Sort\Selection-Sort.cpp"

int reorganize(int array[], int size){
    for (int i = 0; i < size/2; i++)
    {
        int temp = array[i];
        array[i] = size-i;
        array[size-i] = temp;
    }
    return 0;
}

int main() {
    // Array de exemplo
    int array[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    std::cout << "Array inicial: \n";
    // Calcula o tamanho do array
    int arraySize = sizeof(array) / sizeof(array[0]);

    // Exibe o array inicial
    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i];
    }

    // Chama as funções para ordenarem o array
    bubbleSort(array, arraySize);
    std::cout <<"\nordenação por Bubble sort\n";
    reorganize(array, arraySize);
    selectionSort(array, arraySize);
    std::cout <<"ordenação por Selection sort\n";
    reorganize(array, arraySize);
    insertionSort(array, arraySize);
    std::cout <<"ordenação por Insertion sort\n";
    std::cout << "\nArray final: \n";

    // Exibe o array ordenado
    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i];
    }

    std::cout << "final";
    return 0;
}





