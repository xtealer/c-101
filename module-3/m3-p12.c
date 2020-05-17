/*
* module 3
* problem 12
*
* Given a bills, calculate how many bills are needed (least amount of them);
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int onebill = 0, fivbill = 0, tenbill = 0, mon = 0, buff;

    printf("\n\nDigite Su Monto\n");
    scanf("%d", &mon);

    /* remove '\n' */
    buff = getchar();

    tenbill = mon / 10;
    fivbill = mon / 5;
    onebill = mon;

    printf("\n\n***********************************\n  En $%d Hay\n***********************************\n", mon);
    printf("  Billetes De $10:  %d\n  Billetes De  $5:  %d\n  Billetes De  $1:  %d\n\n\n", tenbill, fivbill, onebill);
    buff = getchar();

    return 0;
}