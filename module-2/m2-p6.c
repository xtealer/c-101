/*
* module 2
* problem 6
*
* Give buyers a discount depending on the following criteria:
*
* - `Purchase amount < 500; discound = 0%`
* - `Purchase amount 500 >= and < 1000; discount = 5%`
* - `Purchase amount >= 1000; discount = 11%`
*/

/* taxesorted libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    float mcompra = 0, desc = 0, total = 0, taxes = 0, subt = 0;

    printf("Monto de Compra\n");
    scanf("%f", &mcompra);

    /* remove \n */
    getchar();

    if (mcompra >= 1000 | mcompra >= 2000)
    {
        desc = (mcompra * 0.11);
    }
    else if (mcompra >= 500 & mcompra < 1000)
    {
        desc = (mcompra * 0.05);
    }
    else if (mcompra < 500)
    {
        desc = 0;
    }

    subt = mcompra - desc;
    taxes = subt * 0.07;
    total = subt + taxes;

    printf("\nMonto De La Compra ---- $%.2f\nDescuentos ------------ -$%.2f\nSubtotal -------------- $%.2f\nImpuestos a Pagar ----- $%.2f\n===================================\nTotal                   $%.2f\n", mcompra, desc, subt, taxes, total);
    getchar();

    return 0;
}