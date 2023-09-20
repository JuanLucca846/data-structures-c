#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *v = (int *)malloc(10 * sizeof(int));

    int i;

    printf("Enderecos do vetor:\n");

    for (i = 0; i < 10; i++)
    {

        *(v + i) = i + 2;

        printf("\nposicao %p, valor %d", v + i, *(v + i));
    }

    return 0;
}