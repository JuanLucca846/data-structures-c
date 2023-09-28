/******************************************************************************
Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faca uma funcao
que retorne a soma do dobro dos dois numeros lidos. A funcao devera armazenar o dobro
de A na propria variavel A e o dobro de B na propria variavel B
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int somaDobroInt(int *a, int *b);

int main()
{
    int a, b;

    printf("digite o valor de a: ");
    scanf("%d", &a);
    printf("digite o valor de b: ");
    scanf("%d", &b);

    int resultado = somaDobroInt(&a, &b);
    printf("resultado: %d\n", resultado);
    printf("novo valor de a: %d\n", a);
    printf("novo valor de b: %d\n", b);

    return 0;
}

int somaDobroInt(int *a, int *b)
{
    *a = *a * 2;
    *b = *b * 2;

    return *a + *b;
}
