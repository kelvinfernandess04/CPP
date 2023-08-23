#include <iostream>

// Função para mesclar duas partes ordenadas de um array em uma única parte ordenada.
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1; // Tamanho da primeira metade do array.
    int n2 = right - middle;    // Tamanho da segunda metade do array.

    // Criação de arrays temporários para armazenar as metades do array original.
    int leftArr[n1], rightArr[n2];

    // Copia os elementos da primeira metade para o array temporário esquerdo.
    for (i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];

    // Copia os elementos da segunda metade para o array temporário direito.
    for (j = 0; j < n2; j++)
        rightArr[j] = arr[middle + 1 + j];

    i = 0; // Índice atual para a primeira metade.
    j = 0; // Índice atual para a segunda metade.
    k = left; // Índice atual para o array original.

    // Mescla os elementos dos arrays temporários de volta para o array original.
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes, se houver, da primeira metade para o array original.
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copia os elementos restantes, se houver, da segunda metade para o array original.
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Função principal de ordenação "Merge Sort".
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2; // Encontra o ponto médio do array.

        // Chama recursivamente o mergeSort para ordenar as metades esquerda e direita.
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Mescla as duas metades ordenadas em uma única metade ordenada.
        merge(arr, left, middle, right);
    }
}

