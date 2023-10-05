#include <stdio.h>
#include <math.h>
/*programa en C que, al recibir
como dato un número entero, determine e imprima si el mismo es par, impar o nulo.*/

void main(void)
{
    int NUM;
    printf("ingrese el numero: ");
    scanf("%d", &NUM);
    if (NUM == 0)
        printf("\nNulo");
    else
        if (pow (-1, NUM) > 0)
        printf("\nPar");
        else
        printf("\nImpar");
    return 0;
}


