/*
* module 4
* problem 4
*
* Show the letters inside a given word in alphabetic order.
*/

/* imported libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *par = NULL;

void orda()
{
    int x, y, z, let, temp = 0;
    par = malloc(sizeof(char) * (20 + 1));

    printf("\n    Ingrese Una Palabra Y Presione Enter!\n    > ");
    gets(par);
    y = strlen(par);

    for (x = 0; x < y - 1; x++)
    {
        for (z = x + 1; z < y; z++)
        {
            let = tolower(par[x]) - tolower(par[z]);
            if (let == 0)
            {
                let = par[x] - par[z];
            }

            if (let > 0)
            {
                temp = par[x];
                par[x] = par[z];
                par[z] = temp;
            }
        }
    }

    printf("    > %s", par);
    free(par);
}

/* entry point */
int main(int argc, char *argv[])
{
    int crej = NULL;

    do
    {
        orda();
        printf("\n\n    Volver A Ejecutar? s/n\n    >");
        crej = getch();
    } while (crej == 's' || crej == 'S');

    printf("\n\n    ****Presione Cualquier Tecla Para Cerrar****");
    getch();
    return 0;
}