/*
* module 2
* problem 5
*
* Calculate the **cost** of a two ways plane ticket after asking the distace to be flown and how many
* days the passenger will be staying at it's destination hotel depending on the following criteria:
*
* - if staying more than 7 days and the flight to and from the destination combined is more than 800KMs,
*  apply a 30% discount.
* - The price per KM is \$1.25
*/

/* imported modules */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int destancia;
    float kida, cticket, pf, desc;

    printf("Kilometros del Viaje\n");
    scanf("%f", &kida);

    printf("Dias de Hospedaje\n");
    scanf(" %d", &destancia);

    /* remove \n */
    getchar();

    cticket = (kida * 1.25);

    if (kida > 800 && destancia > 7)
    {
        desc = ((kida * 1.25) * 0.30);
        pf = (cticket - desc);
    }
    else
    {
        desc = 0;
        pf = cticket;
    }
    printf("\nCosto del Boleto ---------- $%.2f\nDescuentos ---------------- $%.2f\nTotal --------------------- $%.2f\n", cticket, desc, pf);
    getchar();

    return 0;
}