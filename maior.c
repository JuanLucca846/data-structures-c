#include <stdio.h>

void troca (int *, int *);
int maior (int a, int b);

int main()
{
    int a = 11, b = 12, ma = 0;

    troca(&a,&b);
    printf("a = %d, b = %d\n", a, b);

    ma = maior(a,b);
    printf("ma = %d", ma);

    return 0;
}

void troca (int *a, int *b){
    int  aux = *a;
    *a = *b;
    *b = aux;
}

int maior ( a, b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

//int maior (a, b){
//    if(a > b){
//        return a;
//   }
//        return b;
//}

//return a>b ? a: b;