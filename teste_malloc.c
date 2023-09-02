#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v, i;
    for (i=1; i<1000000; i++){
        v = (int*)malloc (50000 * sizeof(int));
        printf ("%p\n", v);
        free(v); //liberar a memória apontada por v
}
return 0;
}