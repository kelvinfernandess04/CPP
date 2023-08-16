#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int main(){
    int array[5] = {4,3,2,1,0};;
    int size = sizeof(array)/sizeof(array[0]);
    std::cout <<"Array inicial: \n";
    for (int i = 0; i < size; i++)
    {
        std::cout <<array[i];
    }
    

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[j] > array[j+1])
            {
                int aux = array[j+1];
                array[j+1] = array[j];
                array[j] = aux;
            }
            
        }
    }

    std::cout <<"\nArray final: \n";
    for (int i = 0; i < size; i++)
    {
        std::cout <<array[i];
    }
    
}