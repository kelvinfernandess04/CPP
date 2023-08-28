#include <iostream>

// Função para mesclar duas partes ordenadas de um arr em uma única parte ordenada.
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1; // Tamanho da primeira metade do arr.
    int n2 = right - middle;    // Tamanho da segunda metade do arr.

    // Criação de arrs temporários para armazenar as metades do arr original.
    int leftArr[n1], rightArr[n2];

    // Copia os elementos da primeira metade para o arr temporário esquerdo.
    for (i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];

    // Copia os elementos da segunda metade para o arr temporário direito.
    for (j = 0; j < n2; j++)
        rightArr[j] = arr[middle + 1 + j];

    i = 0; // Índice atual para a primeira metade.
    j = 0; // Índice atual para a segunda metade.
    k = left; // Índice atual para o arr original.

    // Mescla os elementos dos arrs temporários de volta para o arr original.
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

    // Copia os elementos restantes, se houver, da primeira metade para o arr original.
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copia os elementos restantes, se houver, da segunda metade para o arr original.
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Função principal de ordenação "Merge Sort".
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2; // Encontra o ponto médio do arr.

        // Chama recursivamente o mergeSort para ordenar as metades esquerda e direita.
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Mescla as duas metades ordenadas em uma única metade ordenada.
        merge(arr, left, middle, right);
    }
}

