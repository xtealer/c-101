/*
* module 4
* problem 10
* 
* Read the data from 50 persons and show as output the following:
*
*   - How many Men that age > 17
*   - How many women that age < 18
*   - Total of persons that age > 17
*   - Total of persons that age < 18
*   - Percentage of persons that age > 17
*   - Percentage of persons that age < 18
*/

/* imported libraries */
#include <stdio.h>
#include <stdlib.h>

struct datos
{
    char nombre[30];
    int edad;
    char sexo;
} * persona;

void read_persons_data(int *rep)
{
    int f, xi;

    for (f = 0; f < *rep; f++)
    {
        do
        {
            printf("\n    Especifique Sexo: (\"h\" = Hombre | \"m\" = Mujer)\n    > ");
            persona[f].sexo = getchar();
            getchar();
        } while (persona[f].sexo != 'h' && persona[f].sexo != 'm');
        lnom(&f);

        printf("\n    Indique Su Edad:\n    > ");
        scanf("%3d", &persona[f].edad);

        /* remove \n */
        getchar();
    }
}

void read_name(int *f)
{
    int g = 0;

    printf("\n    Ingrese Su Nombre:\n    > ");

    do
    {
        if ((persona[*f].nombre[g] = getchar()) == '\n' && (g > 1))
            break;
        g++;
    } while (g < 30);

    persona[*f].nombre[g] = '\0';
}

void get_results(int *rep)
{
    int x, may = 0, men = 0, hmayo = 0, mmenr = 0;

    for (x = 0; x < *rep; x++)
    {
        printf("\n    > ");
        printf("   %s", persona[x].nombre);

        if (persona[x].edad < 18)
        {
            men++;
            if (persona[x].sexo == 'm')
            {
                printf(": Edad %d Y Mujer", persona[x].edad);
                mmenr++;
            }
            else
                printf(": Edad %d Y Hombre", persona[x].edad);
        }
        else
        {
            may++;
            if (persona[x].sexo == 'h')
            {
                hmayo++;
                printf(": Edad %d Y Hombre", persona[x].edad);
            }
            else
                printf(": Edad %d Y Mujer", persona[x].edad);
        }
    }
    printf("\n    ------------------------------------------------\n    >    Personas Mayores De Edad %d\n    >    Personas Menores De Edad %d\n    >    Hombres: Mayores De Edad %d\n    >    Mujeres: Menores De Edad %d", may, men, hmayo, mmenr);
}

int main(int argc, char *argv[])
{
    int s, rep = 0;

    do
    {
        do
        {
            printf("\n    Ingrese La Cantidad De Lecturas A Ejecutar (Cant. < 2 Para Salir)\n    > ");
            scanf("%d", &rep);
            fflush(stdin);
        } while (rep < 0);
        if (rep < 2)
            break;
        persona = malloc(rep * sizeof(struct datos));

        read_persons_data(&rep);
        get_results(&rep);

        printf("\n\n    ******SALIR DEL SISTEMA? s/n******\n    > ");
        s = getchar();

        /* remove \n */
        getchar();

        free(persona);
    } while ((s != 's') && (s != 'S'));

    return 0;
}
