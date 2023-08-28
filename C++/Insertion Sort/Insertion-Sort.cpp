#include <iostream>

int insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move os elementos maiores para a direita
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insere o elemento na posição correta
        arr[j + 1] = key;
    }
    return 0;
}
