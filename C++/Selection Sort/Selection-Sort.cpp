#include <iostream>

void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}
int main()
{
    int array[] = {9,8,7,6,5,4,3,2,1,0};
    std::cout << "Array inicial: \n";
    int arraySize = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < arraySize; i++ )
    {
        std::cout << array[i];
    }
    selectionSort(array, arraySize);
    std::cout<< "\n Array final: \n";
    for (int i = 0; i < arraySize; i++)
    {
        std::cout<<array[i];
        
    }
    
    return 0;
}
