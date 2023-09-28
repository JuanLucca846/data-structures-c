/******************************************************************************

Faca uma funcao e um programa de teste para o calculo do volume de uma esfera.
Sendo que o raio e passado por parametro.
V = 4/3 ∗ π ∗ R3

*******************************************************************************/
#include <stdio.h>
#include <math.h>

float calcRaio(float);

int main()
{
    float r;

    printf("digite o valor do raio: ");
    scanf("%d", &r);

    calcRaio(r);

    return 0;
}

float calcRaio(float r)
{
    float V = 0, pi = 3.1415;

    V = 4.0 / 3.0 * pi * pow(r, 3);

    printf("resultado: %f", V);
    return V;
}
