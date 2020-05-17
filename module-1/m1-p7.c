/*
* module 1
* problem 7
*
* Ask for the **value** of an item to the cashier and the **cash**
* amount that the buyer gave, show as answer how much **cash**
* needs to be given back to the buyer.
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    float efectivo = 0, cambio = 0, precio = 0, total = 0;

    printf("Precio del Producto\n");
    scanf(" %f", &precio);

    printf("Efectivo Recibido\n");
    scanf(" %f", &efectivo);

    /* eats extra \n */

    total = (precio * 0.07) + precio;
    cambio = efectivo - total;

    printf("Total =============== $%.2f\nCambio =============== $%.2f\nGRACIAS POR SU COMPRA!\n", total, cambio);
    getchar();

    return 0;
}