#include <stdio.h>

int main (int argc, char *argv[]) {

    int a[10];
    a[0]=1;
    a[1]=1;
    a[2]=1;
    a[3]=1;
    a[4]=1;
    a[5]=1;
    a[6]=1;
    a[7]=1;
    a[8]=1;
    a[9]=1;
    for (int i = 0; i <10 ; i++) {
        printf("El elemento es %d del arreglo es: %d\n",i, a[i]);
    }
    return 0;
}