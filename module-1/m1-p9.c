/*
* module 1
* problem 9
*
* Convert the **price** in **liters** of machines in a fuel shop to **gallons** and calculate
* the **amount** to be paid by the customer in gallons. `(1L = $1.025) and (1Gallon = 3.785L)`.
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, float *argv[])
{
    float gal = 0, total = 0;

    printf("\nGalones de Combustible Despachados\n");
    scanf("%f", &gal);

    /* eat extra \n */
    getchar();

    total = gal * (3.785 * 1.025);

    printf("===================================\nCuenta a Pagar $%.2f\n\n\n\n", total);
    getchar();

    return 0;
}