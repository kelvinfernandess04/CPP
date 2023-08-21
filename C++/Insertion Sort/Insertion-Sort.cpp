#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int insertionSort(int array[], int size){
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;

        // Move os elementos maiores para a direita
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
            
        }

        // Insere o elemento na posição correta
        array[j + 1] = key;
    }
    return 0;
}

void main()
{
    int array[] = {9,8,7,6,5,4,3,2,1,0};
    std::cout << "Array inicial: \n";
    int arraySize = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < arraySize; i++ )
    {
        std::cout << array[i];
    }
    insertionSort(array, arraySize);
    std::cout<< "\n Array final: \n";
    for (int i = 0; i < arraySize; i++)
    {
        std::cout<<array[i];
        
    }
}
