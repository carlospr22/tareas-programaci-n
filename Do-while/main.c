#include <stdio.h>
/* Suma pagos.
El programa obtiene la suma de los pagos realizados el �ltimo mes.
PAG y SPA: variables de tipo real.*/

void main(void)
{
    float PAG, SPA = 0;
    printf("ingrese el primer pago:\t");
    scanf("%f", &PAG);
    do
    {
        SPA = SPA + PAG;
        printf("ingrese el siguente pago -0 para terminar-:\t");
        scanf("%f", &PAG);

    }

   while (PAG);
   printf("\nEl total de pagos del mes es: %.2f", SPA);
}
