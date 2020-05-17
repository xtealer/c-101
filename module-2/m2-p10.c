/*
* module 2
* problem 10
*
* Calculate the cost per patient in a hospital, given their **discease** and **age**
* using the following params:
*
*   - `if age > 14 and < 22; cost + 10%`
*   - `type 1: $25/day`
*   - `type 2: $16/day`
*   - `type 3: $20/day`
*   - `type 4: $32/day`
*/

/* imported libraries */
#include <stdio.h>

/* calculate total hospitalization costs */
int costod(int tipoe)
{
    int x, edadp, diash, cdia;
    float totalf, cextra;

    while (x == 0)
    {
        if (tipoe == 1)
        {
            cdia = 25;
            x++;
        }
        else if (tipoe == 2)
        {
            cdia = 16;
            x++;
        }
        else if (tipoe == 3)
        {
            cdia = 20;
            x++;
        }
        else if (tipoe == 4)
        {
            cdia = 32;
            x++;
        }
        else
        {
            printf("\nTipo de Enfermedad No Valido\nIntente de Nuevo...\n");
            scanf(" %d", &tipoe);
        }
    }

    printf("\nEdad del Paciente\n");
    scanf(" %d", &edadp);

    printf("\nDias Hospitalizado\n");
    scanf(" %d", &diash);

    /* remove \n */
    getchar();

    totalf = (diash * cdia);

    if (edadp > 13 & edadp < 23)
    {
        cextra = (totalf * 0.10);
        totalf = (totalf + cextra);
    }

    printf("\nNombre del Paciente: xxxx\nEnfermedad: Tipo %d\nEdad: %d\n------------------------------------------------\nCosto Diario Del Paciente ---> %d\nGatos Adicionales -----------> %.2f\n================================================\nTotal                          %.2f\n\n\n\n", tipoe, edadp, cdia, cextra, totalf);
    getchar();

    return (0);
}

/* entry point */
int main(int argc, char *argv[])
{
    int tipoe;

    printf("\nTipo de Enfermedad ( 1, 2, 3, 4 )\n");
    scanf("%d", &tipoe);

    /* remove \n */
    getchar();

    costod(tipoe);
    getchar();

    return (0);
}