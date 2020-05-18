/*
* module 4
* problem 1
*
* Ask for int positive number, show them on screen in ascendant order.
*/

/* imported libraries */
#include <stdio.h>
#include <stdlib.h>

void menor(int *tar, int *nums)
{
    int ci, cin, evnu = 0, acont = 0;

    for (ci = 0; ci < *tar; ci++)
    {
        printf("    Numero %d> ", ci + 1);
        scanf(" %d", &nums[ci]);
    }
    fflush(stdin);

    for (ci = 0; ci < *tar; ci++)
    {
        for (cin = 0; cin < *tar; cin++)
        {
            if (nums[ci] < nums[cin])
            {
                evnu = nums[ci];
                nums[ci] = nums[cin];
                nums[cin] = evnu;
            }
        }
    }

    printf("\n    Numeros Ingresados En Orden Ascendente: ");
    for (ci = 0; ci < *tar; ci++)
    {
        printf(" %d", nums[ci]);
    }
}

void pclr(void)
{
    printf("\n\n\n                    ****FIN DEL PROGRAMA****\n                    ");
    getchar();
}

void leevar(int *num)
{
    int next = 0;

    while (1)
    {
        if (scanf("%d", num) < 0 || *num < 0 || ((next = getchar()) != EOF && next != '\n'))
        {
            clearerr(stdin);
            do
            {
                next = getchar();
            } while (next != EOF && next != '\n');
            clearerr(stdin);
            printf("\n    Ingrese Solo Numeros Enteros\n    >");
        }
        else
        {
            break;
        }
    }
}

/* entry point */
int main(void)
{
    int tar;

    /* array size */
    printf("\n\n     Cantidad De Numeros A Leer?\n    =============================\n     Qty> ");
    leevar(&tar);

    /* init array with dynamic size */
    int nums[tar];

    if (tar > 1)
    {
        menor(&tar, nums);
    }
    pclr();
    return 0;
}