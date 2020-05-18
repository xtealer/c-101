/*
* module 3
* problem 13
*
* Ask for amount of cash (including coins) and verify the number bills of $1, $5, $10, $20
* and the number of coins of value $0.01, $0.05, $0.10, $0.25 and $0.50.
*/

/* imported libraries */
#include <stdio.h>
#include <stdlib.h>

/* entry point */
int main(int argc, char *argv[])
{
    int onebill = 0, fivbill = 0, tenbill = 0, twebill = 0, monb = 0, pencoin = 0, nicoin = 0, dimecoin = 0, qucoin = 0, halfcoin = 0, coinco = 0, coins = 0, csor = 0, buff = 0;

    printf("\n\n    =============================\n    |      Digite Un Monto     |\n    |        (Ej: $1.25)       |\n    =============================\n     Monto/> ");
    scanf(" %d.%d", &monb, &coins); // lectura del monto ingresado como valores enteros independientes para billetes y monedas

    /* remove '\n' */
    buff = getchar();

    if (coins < 10)
    {                // al introducir solo un numero en monedas se interpreta como $0.04
        coins *= 10; // en ese caso se multiplicara coins por 10 para evitar calculos incorrectos
    }
    coinco = coins;

    // numero de billetes

    coinco = coins;
    twebill = monb / 20;
    tenbill = (monb - (twebill * 20)) / 10;
    fivbill = (monb - ((tenbill * 10) + (twebill * 20))) / 5;
    onebill = monb - ((fivbill * 5) + (tenbill * 10) + (twebill * 20));

    // numero de monedas

    for (csor = 1; csor <= 7; csor++)
    {
        if (coinco - 50 >= 0)
        {
            coinco -= 50;
            halfcoin = 1;
        }
        else if (coinco - 25 >= 0)
        {
            coinco -= 25;
            qucoin = 1;
        }
        else if (coinco - 10 >= 0)
        {
            coinco -= 10;
            dimecoin++;
        }
        else if (coinco - 5 >= 0)
        {
            coinco -= 5;
            nicoin++;
        }
        else if (coinco > 0 && coinco <= 4)
        {
            pencoin += coinco;
            coinco -= coinco;
        }
        else
        {
            break;
        }
    }

    // cuadro de resultados

    printf("\n\n\n                     Monto Ingresado  $%d.%d\n    =========================================================\n    |   Cantidad De Billetes Y Monedas Segun Denominacion   |\n    =========================================================\n", monb, coins);
    printf("            $0.01 --> %d        |        $1 ---> %d\n            $0.05 --> %d        |        $5 ---> %d\n            $0.10 --> %d        |        $10 --> %d\n            $0.25 --> %d        |        $20 --> %d\n            $0.50 --> %d        |\n    =========================================================\n", pencoin, onebill, nicoin, fivbill, dimecoin, tenbill, qucoin, twebill, halfcoin);
    printf("\n\n\n       ********Presione Cualquier Tecla Para Salir********");
    buff = getchar();

    return 0;
}