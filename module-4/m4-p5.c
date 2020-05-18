/*
* module 4
* problem 5
*
* Store 5 int values in a vector and solve the following operations:
*
*   - `print the items on screen`
*   - `sum and the items and show on screen`
*   - `find the average of these`
*   - `find the amount of even numbers`
*   - `find the amount of odd number`
*   - `find the amount of negative numbers`
*   - `find the amount of positive numbers`
*   - `find the sum of numbers between 50 and 100 (inclusive)`
*   - `find the average of numbers between 100 and 200 (inclusive)`
*/

/* imported libraries */
#include <stdio.h>
#include <stdlib.h>
int nums[10] = {};

void carga(void)
{
    int z;
    for (z = 0; z < 10; z++)
    {
        printf("\n\n    Ingrese El Numero %d\n    > ", z + 1);
        scanf("%d", &nums[z]);
    }
}

void prelem(void)
{
    int z;
    printf("\n    > Los Numeros Ingresados Son:");
    for (z = 0; z < 10; z++)
    {
        printf(" %d", nums[z]);
    }
}

void sumar(void)
{
    int z, sum = 0;
    for (z = 0; z < 10; z++)
    {
        sum += nums[z];
    }
    printf("\n    > La Suma De Los Elementos Ingresados Es %d", sum);
}

void nparim(void)
{
    int z, par = 0, impar = 0;

    for (z = 0; z < 10; z++)
    {
        if ((nums[z] % 2) == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    if (par == 1)
    {
        printf("\n    > %d Numero Par |", par);
    }
    else
    {
        printf("\n    > %d Numeros Pares |", par);
    }

    if (impar == 1)
    {
        printf(" %d Numero Impar", impar);
    }
    else
    {
        printf(" %d Numeros Impares");
    }
}

void nponeg(void)
{
    int z, posit = 0, negat = 0, zero = 0;
    for (z = 0; z < 10; z++)
    {
        if (nums[z] > 0)
        {
            posit++;
        }
        else if (nums[z] < 0)
        {
            negat++;
        }
        else
        {
            zero++;
        }
    }

    if (posit == 1)
    {
        printf("\n    > %d Numero Positivo |", posit);
    }
    else
    {
        printf("\n    > %d Numeros Positivos |", posit);
    }

    if (negat == 1)
    {
        printf(" %d Numero Negativo |", negat);
    }
    else
    {
        printf(" %d Numeros Negativos |", negat);
    }

    if (zero == 1)
    {
        printf(" %d Vez El Numero 0", zero);
    }
    else
    {
        printf(" %d Veces El Numero 0", zero);
    }
}

void sumfihu(void)
{
    int z, suma = 0;
    for (z = 0; z < 10; z++)
    {
        if ((nums[z] >= 50) && (nums[z] <= 100))
        {
            suma += nums[z];
        }
    }
    printf("\n    > %d << Suma De Numeros Entre El 50 Al 100", suma);
}

void divhutwo(void)
{
    int z, cn = 0, prom = 0;
    for (z = 0; z < 10; z++)
    {
        if ((nums[z] >= 100) && (nums[z] <= 200))
        {
            prom += nums[z];
            cn++;
        }
    }
    prom /= cn;
    printf("\n    > %d << Promedio De Numeros Entre El 100 Y 200", prom);
}

/* entry point */
int main(int argc, char *argv[])
{
    int ci = 0;

    do
    {
        carga();
        prelem();
        sumar();
        nparim();
        nponeg();
        sumfihu();
        divhutwo();
        printf("\n\n      ******PARA CONTINUAR \"s\" O \"n\" PARA SALIR******");
        ci = getch();
    } while (ci != 'n' && ci != 'N');

    return 0;
}