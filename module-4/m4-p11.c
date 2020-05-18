/*
* module 4
* problem 11
*
* Ask the montly total sales of a store and show the following:
*
*   - `The Month with more sales`
*   - `The Month with less sales`
*   - `Total sales during the year`
*   - `Year sales average`
*/

/* imported libraries */
#include <stdio.h>
#include <stdlib.h>
char meses[12][12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

void poss(int *mes, float *vntas)
{
    int x, z, ram = 0;

    for (x = 0; x < 12; x++)
    {
        while (1)
        {
            printf("\n    Ingrese El Numero Del Mes (1 a 12)\n    > ");
            scanf("%d", &ram);

            /* remove \n */
            getchar();

            if (ram < 1 || ram > 12)
            {
                printf("\n    El Mes Ingresado No Existe!\n");
            }
            else
            {
                for (z = 0; z < 12; z++)
                {
                    if (ram == mes[z])
                    {
                        printf("\n    El Mes Ingresado Ya Fue Leido!\n");
                        z = 0;
                        break;
                    }
                }
            }
            if (z == 12)
            {
                break;
            }
        }

        mes[ram - 1] = ram;

        printf("\n    Ingrese El Monto De Ventas\n    > ");
        scanf("%f", &vntas[ram - 1]);

        /* remove \n */
        getchar();
    }
}

float odar(float vtol, int *mes, float *vntas)
{
    int x, nmay = 0, nmen = 0;

    for (x = 0; x < 12; x++)
    {
        if (x > 0 && vntas[x - 1] < vntas[x])
        {
            nmay = mes[x] - 1;
        }
        else if (x == 0)
        {
            nmay = mes[x] - 1;
        }

        if (x > 0 && vntas[x - 1] > vntas[x])
        {
            nmen = mes[x] - 1;
        }
        else if (x == 0)
        {
            nmen = mes[x] - 1;
        }
        vtol += vntas[x];

        printf("\n    Mes %d, Ventas %.2f", mes[x], vntas[x]);
    }

    printf("\n\n    Mes Con Mayor Ingreso: %s -- $%.2f\n    Mes Con Menor Ingreso: %s -- $%.2f", meses[nmay], vntas[nmay], meses[nmen], vntas[nmen]);

    return vtol;
}

/* entry point */
int main(int argc, char *argv[])
{
    int con = 0, mes[12], x;
    float vtol, vntas[12];

    do
    {
        vtol = 0;
        for (x = 0; x < 12; x++)
        {
            mes[x] = 0;
            vntas[x] = 0;
        }

        poss(mes, vntas);

        vtol = odar(vtol, mes, vntas);

        printf("\n    Promedio De Ventas Mensuales: $%.2f\n    Total De Ventas Anual: $%.2f", vtol / 12, vtol);
        printf("\n\n\n    *****SALIR DEL PROGRAMA? s/n*****\n    >");

        con = getchar();

        /* remove \n */
        getchar();
    } while (con != 's' && con != 'S');

    return 0;
}

/*
* Enrique Shunnar
* Lic. En Ingenieria De Sistemas Computacionales
* Grupo 9IL112
* Panama
*/