/*
* module 2
* problem 8
*
* Ask for the destination of a call and it's length to get to know the final cost based on this table:
*
*   - `12: North Americas: $2.00/min`
*   - `18: South Americas: $2.50/min`
*   - `19: Europe: $3.00/min`
*   - `23: Asia: $3.50/min`
*   - `25: Africa: $4.00/min`
*/
#include <stdio.h>

/* get cost for call and show result */
void costs(int key)
{
    float hourc, callt, tcost;

    while (hourc == 0)
    {
        if (key == 12)
        {
            hourc = (2);
        }
        else if (key == 18)
        {
            hourc = (2.5);
        }
        else if (key == 19)
        {
            hourc = (3);
        }
        else if (key == 23)
        {
            hourc = (3.5);
        }
        else if (key == 25)
        {
            hourc = (4);
        }
        else
        {
            printf("\nRegion Desconocida\nIntente de Nuevo...\n");
            scanf(" %d", &key);

            /* remove \n */
            getchar();
        }
    }

    if (hourc > 0)
    {
        printf("\nDuracion de la Llamada (Horas.Minutos)\n");
        scanf("%f", &callt);

        /* remove \n */
        getchar();

        tcost = (callt * hourc);

        printf("\nCosto de la Llamada -------- $%.2f\n", tcost);
        printf("\n------------------GRACIAS!------------------\n\n\n\n");
        getchar();
    }
}

/* entry point */
int main(int argc, char *argv[])
{
    int key;

    printf("\nDigite la Clave de la Region a Llamar\n============================================\n> 12          America del Norte ($2/Min)\n> 18          America del Sur   ($2.50/Min)\n> 19          Europa            ($3/Min)\n> 23          Asia              ($3.50/Min)\n> 25          Africa            ($4/Min)\n> 0           Salir del Sistema\n--------------------------------------------\n");
    scanf("%d", &key);

    if (key > 0)
    {
        costs(key);
    }
    else
    {
        puts("SALIENDO...");
    }

    return (0);
}