#include <iostream>

void bubbleSort(int array[], int size) {
    //Bubble Sort
    std::cout<<"Bubble sort passo a passo:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) { //size - 1, pois não é necessário comparar com o último elemento
            if (array[j] > array[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                int aux = array[j + 1];
                array[j + 1] = array[j];
                array[j] = aux;
            }
        }
    }
}
