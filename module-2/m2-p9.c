/*
* m2-p8
*
* Convert the following measure units from - to as follow:
*
*  - `1 inch = 25.40mm`
*  - `1 yard = 0.9144M`
*  - `1 mile = 1.6093KMs`
*/
#include <stdio.h>

/* get converted measures */
int fcre(int fco)
{
    float resu, med;

    if (fco == 0)
    {
        return (0);
    }

    else
    {
        printf("\n----------------------------------------\n                 Medida\n----------------------------------------\n");
        scanf(" %f", &med);
        /* remove \n */
        getchar();
        printf("========================================\n");
    }

    if (fco == 1)
    {
        resu = (med * 25.40);
        printf("%.2f Pulgadas = %.2f Milimetros", med, resu);
    }
    else if (fco == 2)
    {
        resu = (med * 0.9144);
        printf("%.2f Yardas = %.2f Metros", med, resu);
    }
    else if (fco == 3)
    {
        resu = (med * 1.6093);
        printf("%.2f Millas = %.2f Kilometros", med, resu);
        return (0);
    }
    printf("\n\n");
}

/* entry point */
int main(int argc, char *argv[])
{
    int fco;

    printf("\nConvertir\n========================================\n> 1 --- Pulgadas a Milimetros\n> 2 --- Yardas a Metros\n> 3 --- Millas a Kilometros\n> 0 --- Salir del Sistema\n========================================\n");
    scanf("%d", &fco);

    /* remove \n */
    getchar();

    fcre(fco);
    getchar();

    return (0);
}