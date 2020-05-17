/*
* module 3
* problem 6
*
* Get the cost of a product given price and units ordered.
* Discount 10% if costs exceed $500.00 (after taxes)
*/

/* imported libraries */
#include <stdio.h>

/* get bill details */
int factura(float pre_art, int unds)
{
    float itbms = 0, descu = 0, total = 0, subto = 0;

    subto = (pre_art * unds);

    if (subto > 500.00)
    {
        descu = subto * 0.10;
    }

    itbms = (subto * 0.07);
    total = (subto + itbms);

    printf("\n======================================\n               Factura\n======================================\n\n   Precio del Articulo:    $%.2f (%d)\n   Subtotal:               $%.2f\n", pre_art, unds, subto);
    printf("   Descuentos:             $%.2f\n\n======================================\n   Total:                  $%.2f\n", descu, total);

    return 0;
}

/* entry point */
int main(int argc, char *argv[])
{
    int unds = 0;
    float pre_art = 0;

    printf("\n----------------------\n Precio Del Articulo\n----------------------\n");
    scanf("%f", &pre_art);

    printf("\n----------------------\n  Unidades A Comprar\n----------------------\n");
    scanf(" %d", &unds);

    /* remove \n */
    getchar();

    factura(pre_art, unds);
    getchar();

    return 0;
}