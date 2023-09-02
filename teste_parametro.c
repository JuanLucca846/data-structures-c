#include <stdio.h>

void f1 (int a) {
    a =a + 1;
    printf ("a dentro de f1, alternado: %d\n", a);
}
void f2 (int *a) {
    *a = *a + 1;
    printf ("conteudo referenciado pelo ponteiroa de f2:%d\n", *a);
}
int main () {
    int a=10;
    f1(a);
    printf ("a depois de f1, NAO alternado: %d\n", a);
    f2(&a);
    printf ("conteudo de a alterado na funcao f2, por referencia: %d\n", a);
    return 0;
}