#include <iostream>

// Função para ordenar um array usando o algoritmo de inserção (Insertion Sort)
int insertionSort(int array[], int size) {
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
