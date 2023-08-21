#include <iostream>

// Função para ordenar um array usando o algoritmo de seleção (Selection Sort)
void selectionSort(int array[], int size) {
    // Loop externo: percorre a matriz da esquerda para a direita
    for (int i = 0; i < size - 1; i++) {
        // Inicializa o índice do menor elemento como o índice atual (i)
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

void main() {
    // Array de exemplo
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    std::cout << "Array inicial: \n";

    // Calcula o tamanho do array
    int arraySize = sizeof(array) / sizeof(array[0]);

    // Exibe o array inicial
    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i];
    }

    // Chama a função selectionSort para ordenar o array
    selectionSort(array, arraySize);
    std::cout << "\nArray final: \n";

    // Exibe o array ordenado
    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i];
    }
}
