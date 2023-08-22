#include <iostream>

void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        // Loop interno: encontra o índice do menor elemento na parte não ordenada da matriz
        for (int j = i + 1; j < size; j++) {
            // Compara o elemento no índice j com o elemento no minIndex
            if (array[j] < array[minIndex]) {
                // Se array[j] for menor, atualiza minIndex para j
                minIndex = j;
            }
        }

        // Verifica se minIndex é diferente de i (ou seja, se um elemento menor foi encontrado)
        if (minIndex != i) {
            // Troca os elementos nos índices i e minIndex para colocar o menor elemento na posição correta
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}