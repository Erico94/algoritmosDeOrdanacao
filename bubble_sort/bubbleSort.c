#include <stdio.h>
#include <stdlib.h>


void bubbleSort(int array[], int tamanho);
void imprimirArray(int array[], int tamanho);

int main (){
    int numeros[] = {7, 0, 4, 6, 2, 98, 56, 43, 2, 1};
    int tam = sizeof(numeros) / sizeof(numeros[0]);
    imprimirArray(numeros, tam);
    printf("\nOrdenacao ocorrendo agora.");
    bubbleSort(numeros, tam);
    imprimirArray(numeros, tam);

}

void bubbleSort(int array[], int tamanho){
    // loop para acessar cada elemento do array
    for (int passo = 0; passo < tamanho - 1; passo++)
    {
        //loop para comparar elementos
        for (int i = 0; i < tamanho - passo - 1; i++)
        {
            //compara dois elementos adjacentes
            if (array[i] > array[i+1])
            {
                //troca se caso os elementos não estiverem em ordem crescente
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
}
void imprimirArray(int array[], int tamanho){
    printf("\n");
    for ( int i = 0; i < tamanho; i++)
    {
        printf("%d,", array[i]);
    }
    printf("\n");
    system("PAUSE");
}