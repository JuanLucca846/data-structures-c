/******************************************************************************
Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereco de cada posicao desse array
*******************************************************************************/
#include <stdio.h>
#include <math.h>

void imprimirEnderecos(float array[], int tamanho);

int main()
{
    float array1[10];

    for (int i = 0; i < 10; i++)
    {
        array1[i] = i;
        printf("array: %d %.1f\n", i, array1[i]);
    }

    imprimirEnderecos(array1, 10);

    return 0;
}

void imprimirEnderecos(float array[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Endereço do elemento %d: %p\n", i, (void *)&array[i]);
    }
}
