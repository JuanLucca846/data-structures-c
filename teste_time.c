#include <stdio.h>
#include <time.h>

int main () {
    int i, k;
    for (i=0; i<10; i++){
        for (k=0; k<1500000; k++);
        printf ("%d: %ld\n", i, time(0));
    }
    return 0;
}