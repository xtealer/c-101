/*
* module 2
* problem 7
*
* Given the **cost** of a vehicle and it's **brand**, calculate a discount based on the following table:
*
*  - `toyota: 8%`
*  - `suzuki: 10%`
*  - `nissan: 12%`
*  - `dodge: 15%`
*/

/* imported libraries */
#include <stdio.h>
#include <string.h>

/* entry point */
int main(int argc, char *argv[])
{
    int comre = 0, co = 0;
    float preciov = 0, desc = 0, itbms = 0, total = 0;
    char mar[10], marca[10][4] = {"Toyota", "Suzuki", "Nissan", "Dodge"};

    printf("\nIngrese La Marca Del Vehiculo\n");
    scanf("%s", &mar);

    printf("\nIngrese el Costo del Vehiculo\n");
    scanf(" %f", &preciov);

    /* remove \n */

    for (co = 0; co < 4; co++)
    {
        comre = (strcmp(marca[co], mar));
        if (co == 0 & comre == 0)
        {
            desc = (preciov * 0.08);
        }
        else if (co == 1 & comre == 0)
        {
            desc = (preciov * 0.10);
        }
        else if (co == 2 & comre == 0)
        {
            desc = (preciov * 0.12);
        }
        else if (co == 3 & comre == 0)
        {
            desc = (preciov * 0.15);
        }
    }

    itbms = ((preciov - desc) * 0.07);
    total = (preciov - desc) + itbms;

    printf("\nPrecio del Vehiculo Marca %s ------ $%.2f\nDescuentos a Realizar ----------------- $%.2f\nITBMS --------------------------------- $%.2f\nPrecio Final -------------------------- $%.2f\n", mar, preciov, desc, itbms, total);
    getchar();

    return 0;
}