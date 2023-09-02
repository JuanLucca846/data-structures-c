#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void gera (int*, int);

void exibe (char *, int*, int);

void bubble (int *, int, int *, int *); 

int soma (int *, int);

float media (int *, int);

int main() {
    int *v, n, s;
    float m;
    long int ini, fim;
    int trocas, comparacoes;
    printf("Digite o tamanho do vetor, 0 encerra \n");
    scanf("%d", &n);
      //repetir enquanto tamanho > 0; 
    while(n>0){  
        // alocar um vetor dinamicamente,  do tamanhao que o usuário escolher
        v = (int*) malloc(n*sizeof(int));
        // gerar randomicamente os valores para o vetor 
        gera(v, n);
         //inicializando o gerador pseudo radomico       
        srand(time(NULL));
        //exibir
        //exibe ("vetor gerado", v, n);
        //bubble
        trocas=0;
        comparacoes=0;
        ini = time(0);
        bubble (v, n, &trocas, &comparacoes);
        fim = time(0);
        //exibir
        //exibe ("vetor ordenado",  v, n);
        printf ("\ntempo para tamanho %d: %ld", n, fim-ini);
        printf ("\nforam realizadas %d comparacoes %d trocas\n", comparacoes, trocas);

        printf("\nsoma dos elementos: %d", soma(v, n));
        printf("\nmedia dos elementos: %.3f\n", media(v,n));
        //liberar memória 
        free(v);
        //ler novo tamanho
        printf("\nDigite o tamanho do vetor, 0 encerra\n");
        scanf("%d", &n);
    }

    return 0;
}
void gera (int *v, int n){
    int i;
    for(i=0; i<n; i++)
    v[i] = rand() %(n*10 );

}

void exibe(char * msg,int *v, int n){
    int i;
    printf("\n%s\n",msg);
    for(i=0; i<n; i++)
    printf("%d ", v[i]);
    printf("\n");

}
void bubble (int *v, int n, int *trocas, int *comparacoes) {
    int i, j, aux;
       for (i = 1; i < n; i++) {
                for (j = 0; j <n-i; j++) {
                    //contar comparações
                    *comparacoes = *comparacoes + 1;
                        if (v[j] > v[j + 1]) { //troca
                        //contar trocas 
                        *trocas = *trocas + 1;
                aux      = v[j];
                v[j]     = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

int soma (int *v , int n){
    int i, s = 0;
for (i = 0, s = 0; i < n; i++){
    s += v[i];
}
    return s;
}

//for(i=0, s=o; i<n; s+=[i++]);h

float media (int *v4, int n){
    return (float)soma(v4, n)/n;
}