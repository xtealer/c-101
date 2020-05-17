/*
* module 2
* problem 3
*
* Given int values for a and b show as result the following values.
*
*   - `100 * b if a = 1`
*   - `100 + b if a = 2`
*   - `100 / b if a = 3`
*   - `0 if any other number`
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int v = 0, num = 0;
    float re = 0;

    printf("Valor de V\n");
    scanf("%d", &v);

    printf("Valor de NUM\n");
    scanf(" %d", &num);

    /* remove \n */
    getchar();

    if (num == 1)
    {
        re = (100 * v);
    }
    else if (num == 2)
    {
        re = (100 + v);
    }
    else if (num == 3)
    {
        re = (100 / v);
    }
    else if (num<1 & num> 3)
    {
        re = 0;
    }
    printf("Respuesta = %.2f\n", re);
    getchar();

    return 0;
}