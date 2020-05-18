/*
* module 4
* program 8
*
* Replace every `c` for a `*` inside a given string. Don't use the replace function.
*/

/* imported libraries */
#include <stdio.h>
#include <stdlib.h>

void rech(void)
{
    int a = 0, clen = 0;
    char cad[101] = "";

    printf("\n    Ingrese Una Cadena Menor A 100 Caracteres (Incluyendo Espacios)\n    > ");
    while ((cad[a] = getchar()) != '\n')
    {
        if (cad[a] == 'c' || cad[a] == 'C')
        {
            cad[a] = '*';
        }
        a++;
    }

    printf("\n    Cadena Ingresada> %s", cad);
}

/* entry point */
int main(void)
{
    int x;

    do
    {
        rech();
        printf("\n\n    *****DESEA CONTINUAR? s/n*****\n     > ");
        x = getchar();
    } while (x != 'n' && x != 'N');

    return 0;
}