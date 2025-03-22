#include <stdio.h>
#include <stdlib.h>

void insertionSort(int array[], int tamanho);
void printaArray(int array[], int tamanho);


int main()
{
    int array[] = {7, 9, 15, -3, 6, -48, 0};
    int size = sizeof(array) / sizeof(array[0]);
    printaArray(array, size);
    insertionSort(array, size);
    printf("\nOrganizando a lista em ordem crescente...\n");
    printaArray(array, size);
    return 1;
}

void insertionSort(int array[], int tamanho)
{
    for (int passo = 1; passo < tamanho; passo++)
    {
        int key = array[passo];
        int anterior = passo - 1;

        // compara e troca variável key com cada elemento de sua
        //  esquerda enquanto um elemento menor do que ele não for encontrado.
        while (anterior >= 0 && key < array[anterior])
        {
            array[anterior + 1] = array[anterior];
            anterior--;
        }
        array[anterior + 1] = key;
    }
}
void printaArray(int array[], int tamanho)
{
    printf("\nArray:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d, ", array[i]);
    }
    system("PAUSE");
}