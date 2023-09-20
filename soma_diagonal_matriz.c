#include <stdio.h>

#include <stdlib.h>

void le_matriz(int **, int, int);
void exibe_matriz(int **, int, int);
int soma_diagonal(int **, int, int);

int main()
{
    int i, linhas, colunas;

    int **m;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    m = (int **)malloc(linhas * sizeof(int *));

    for (i = 0; i < linhas; i++)
        m[i] = (int *)malloc(colunas * sizeof(int));

    le_matriz(m, linhas, colunas);

    exibe_matriz(m, linhas, colunas);

    printf("\nA soma da diagonal principal e: %d\n", soma_diagonal(m, linhas, colunas));

    return 0;
}

void le_matriz(int **m, int l, int c)
{
    int i, j;

    printf("Digite os elementos da matriz:\n");

    for (i = 0; i < l; i++)
        for (j = 0; j < c; j++)
        {
            printf("m[%d, %d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
}

void exibe_matriz(int **m, int l, int c)
{
    int i, j;

    printf("Matriz:\n");

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
}

int soma_diagonal(int **m, int l, int c)
{
    int s = 0;

    for (int i = 0; i < l; i++)
    {
        s = s + m[i][i];
    }
    return s;
}