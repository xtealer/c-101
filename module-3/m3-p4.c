/*
* module 3
* problem 4
*
* Ask for one **int value** between 1 and 9 inclusive, then calculate it's exponentiation up to 2000.
*/

/* imported libraries */
#include <stdio.h>
#include <math.h>

/* entry point */
int main(int argc, char *argv[])
{
    int num = 0, poten = 0, rpo = 0;

    printf("\n------------------------------\n Ingrese un Numero del 1 al 9\n------------------------------\n");
    scanf("%d", &num);

    /* remove \n */
    getchar();

    /* spacing before new text */
    printf("\n\n");

    if (num == 1 || !num)
    {
        printf("El Numero %d Siempre Resulta %d!", num);
    }
    else
    {
        for (poten = 1;; poten++)
        {
            rpo = pow(num, poten);
            if (rpo <= 2000)
            {
                printf("Numero %d  #  Elevado a %d  #  Igual a: %d\n", num, poten, rpo);
            }
            else
            {
                break;
            }
        }
    }
    getchar();

    return 0;
}