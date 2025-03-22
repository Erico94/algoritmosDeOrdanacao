#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b);
void selectionSort(int array[], int tamanho);
void printaArray(int array[], int tamanho);

int main()
{
    int array[] = {7, 9, 15, -3, 6, -48, 0};
    int size = sizeof(array) / sizeof(array[0]);
    printaArray(array, size);
    selectionSort(array, size);
    printf("\nOrganizando a lista em ordem crescente...\n");
    printaArray(array, size);
    return 1;
}

void troca(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int array[], int tamanho)
{
    for (int passo = 0; passo < tamanho - 1; passo++)
    {
        int minimoIndex = passo;
        for (int i = passo + 1; i < tamanho; i++)
        {
            if (array[i] < array[minimoIndex])
            {
                minimoIndex = i;
            }
        }
        troca(&array[minimoIndex], &array[passo]);
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