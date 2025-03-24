#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b);
int particao(int array[], int menor, int maior);
void quickSort(int array[], int menor, int maior);
void printaArray(int array[], int tamanho);

int main()
{
    int array[] = {7, 9, 15, -3, 6, -48, 0};
    int size = sizeof(array) / sizeof(array[0]);
    printaArray(array, size);
    quickSort(array, 0, size - 1);
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

int particao(int array[], int menor, int maior)
{
    // elemento mais a direita selecionado como pivô
    int pivo = array[maior];
    // ponteiro para maior elemento
    int i = menor - 1;

    // percorrer cada elemento da matriz
    // e compará-los com o pivô
    for (int j = menor; j < maior; j++)
    {
        if (array[j] <= pivo)
        {
            // se um elemento menor que o pivô for encontrado, será trocado com o
            // maior elemento apontaod por i
            i++;
            troca(&array[i], &array[j]);
        }
    }
    // troca o pivo com o elemento apontado em i
    troca(&array[i + 1], &array[maior]);
    return (i + 1);
}

void quickSort(int array[], int menor, int maior)
{
    if (menor < maior)
    {
        int pi = particao(array, menor, maior);
        quickSort(array, menor, pi - 1);
        quickSort(array, pi + 1, maior);
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