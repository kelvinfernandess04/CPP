#include <iostream>

using namespace std;

// Função para trocar dois elementos de um array
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Função para encontrar o pivô e rearranjar os elementos
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Escolha o último elemento como pivô
    int i = (low - 1);     // O índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
        // Se o elemento atual for menor ou igual ao pivô
        if (arr[j] <= pivot) {
            i++;  // Incrementa o índice do menor elemento
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Função principal do Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Encontre o pivô e obtenha o índice do elemento pivô
        int pi = partition(arr, low, high);

        // Classifique os elementos antes e depois do pivô
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


