#include <iostream>
using namespace std;
#include "C++\Bubble Sort\Bubble-Sort.cpp"
#include "C++\Insertion Sort\Insertion-Sort.cpp"
#include "C++\Selection Sort\Selection-Sort.cpp"
#include "C++\Merge Sort\Merge-Sort.cpp"
#include "C++\Quick  Sort\Quick-Sort.cpp"

int main() {
    bool exitProgram = false;
    do
    {
        
        system("cls");
        int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
        int arrSize = sizeof(arr) / sizeof(arr[0]);

        cout << "arr inicial: \n";
        for (int i = 0; i < arrSize; i++) {
            cout << arr[i];
        }

        // mensagem para o usuário
        cout << "\nEscolha um método de organização"<<
        "\nBubble Sort[1]"<<
        " \nSelection Sort[2]"<<
        "\nInsertion Sort[3]"<<
        "\nMerge Sort[4]"<<
        "\nQuick Sort[5]"<<
        "\nSair[Aperte outra tecla]\n"; 

        int choice;
        cin >> choice; // entrada de dados
        switch (choice) { // estrutura de controle para cada caso
        case 1: 
        bubbleSort(arr, arrSize);
        break; 
        
        case 2: 
        selectionSort(arr, arrSize);
        break; 
        
        case 3: 
        insertionSort(arr, arrSize);
        break; 

        case 4: 
        mergeSort(arr, 0, arrSize);
        break; 

        case 5:
        quickSort(arr, 0, arrSize - 1);
        break;
        
        default: //qualquer outro número
        cout << "Saindo\n";
        exit(0);
        }
        
        
        // Exibe o arr ordenado
        cout << "\narr final: \n";
        for (int i = 0; i < arrSize; i++) {
            cout << arr[i];
        }
        cout<<"\nAperte qualquer tecla para refazer ou [S] para Sair\n";
        char entrada[1];
        cin >> entrada[0];
        if (entrada[0] == 's') 
            exitProgram = true;
        
    } while (!exitProgram);
    
    return 0;
}





