# include <stdio.h>

void bubbleSort(int array[], int tamanho);

int main (){
int numeros[] = {7, 0, 4, 6, 2, 98, 56, 43, 2, 1};

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