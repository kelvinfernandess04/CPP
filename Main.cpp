#include <iostream>
using namespace std;
#include "C++\Bubble Sort\Bubble-Sort.cpp"
#include "C++\Insertion Sort\Insertion-Sort.cpp"
#include "C++\Selection Sort\Selection-Sort.cpp"
#include "C++\Merge Sort\Merge-Sort.cpp"

int main() {
    bool exit = false;
    do
    {
        
        system("cls");
        int array[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
        int arraySize = sizeof(array) / sizeof(array[0]);

        cout << "Array inicial: \n";
        for (int i = 0; i < arraySize; i++) {
            cout << array[i];
        }

        // mensagem para o usuário
        cout << "\nEscolha um método de organização"<<
        "\nBubble Sort[1]"<<
        " \nSelection Sort[2]"<<
        "\nInsertion Sort[3]"<<
        "\nMerge Sort[4]"<<
        "\nSair[Aperte outra tecla]"; 

        int choice;
        cin >> choice; // entrada de dados
        switch (choice) { // estrutura de controle para cada caso
        case 1: 
        bubbleSort(array, arraySize);
        break; 
        
        case 2: 
        selectionSort(array, arraySize);
        break; 
        
        case 3: 
        insertionSort(array, arraySize);
        break; 

        case 4: 
        mergeSort(array, 0, arraySize);
        break; 
        
        default: //qualquer outro número
        cout << "Saindo\n";
        }
        
        
        // Exibe o array ordenado
        cout << "\nArray final: \n";
        for (int i = 0; i < arraySize; i++) {
            cout << array[i];
        }
        cout<<"\nAperte qualquer tecla para refazer ou [S] para Sair";
        char entrada[1];
        cin >> entrada[0];
        if (entrada[0] == 's') 
            exit = true;
        
    } while (!exit);
    
    return 0;
}





