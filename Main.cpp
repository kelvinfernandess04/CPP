#include <iostream>
using namespace std;
#include "C++\Bubble Sort\Bubble-Sort.cpp"
#include "C++\Insertion Sort\Insertion-Sort.cpp"
#include "C++\Selection Sort\Selection-Sort.cpp"

int main() {
    system("cls");
    int array[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int arraySize = sizeof(array) / sizeof(array[0]);

    cout << "Array inicial: \n";
    for (int i = 0; i < arraySize; i++) {
        cout << array[i];
    }

    int choice;
    cout << "\nEscolha um método de organização:\nBubble Sort[1] \nSelection Sort[2] \nInsertion Sort[3]\n"; // mensagem para o usuário
    cin >> choice; // entrada de dados
    do
    {
        switch (choice) { // estrutura de controle para cada caso
        case 1: //1
        bubbleSort(array, arraySize);
        break; 
        
        case 2: //2
        selectionSort(array, arraySize);
        break; 
        
        case 3: //3
        insertionSort(array, arraySize);
        break; 
        
        default: //qualquer outro número
        cout << "Escolha inválida\n"; 
        choice = -1;
        }

        /* code */
    } while (choice == -1);
    
    
    // Exibe o array ordenado
    cout << "\nArray final: \n";
    for (int i = 0; i < arraySize; i++) {
        cout << array[i];
    }

    return 0;
}





