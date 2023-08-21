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

int main() {
    // Array de exemplo
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    std::cout << "Array inicial: \n";

    // Calcula o tamanho do array
    int arraySize = sizeof(array) / sizeof(array[0]);

    // Exibe o array inicial
    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i];
    }

    // Chama a função insertionSort para ordenar o array
    insertionSort(array, arraySize);
    std::cout << "\nArray final: \n";

    // Exibe o array ordenado
    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i];
    }

    return 0;
}
