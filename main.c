#include <stdio.h>

int main (int argc, char *argv[]) {
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++)
    {
        printf("El elemento es %d del arreglo es: %d\n ",i, a[i]);
    }

    float b[5][4]={{1.2,5.3,4.3,5.4},{12.4,42.2,42.4,2},{3.23,52.3,43,23.3},{5.23,5.2,32.1,5.2},{5.2,6.3,8.01,5.2}};
    for (int i = 0; i < 5 ;i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //printf("El elemento en %d %d de la matriz es: %f\n",i,j,b[i][j]);
            printf("%.2f\t",b[i][j]);
        }
        
    }
    
    
    return 0;
}