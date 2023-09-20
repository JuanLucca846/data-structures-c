#include <stdio.h>

int e_quadrado_perfeito(int);

int main()
{
    int n;

    printf("digite um numero: ");
    scanf("%d", &n);

    if (e_quadrado_perfeito(n) == 1)
    {
        printf("\n%d e quadrado perfeito\n", n);
    }

    else
    {
        printf("\n%d nao e quadrado perfeito\n", n);
    }

    return 0;
}

int e_quadrado_perfeito(int n)
{
    int i = 1;

    while (i * i < n)
    {
        i++;
    }

    if (i * i == n)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}