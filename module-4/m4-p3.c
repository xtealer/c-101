/*
* module 4
* problema 3
*
* Fill a 10x10 Matrix with positive int numbers, do the following operations:
*
*  - `Load the first diagonal line in a vector`
*  - `Show the sum of both diagonal`
*  - `Show the sum of the four corners`
*  - `Show the sum of the cross`
*  - `Find an item comparing to the ones readed`
*/

/* imported libraries */
#include <stdio.h>
#include <stdlib.h>

void mat(int (*arp)[10])
{
    int jec = 1, ci, coci = 0, cn, tst = 0;

    for (ci = 0; ci <= 9; ci++)
    {
        if (ci != 0 && ci % 2 == 0)
        {
            printf("\n");
        }
        for (cn = 0; cn <= 9; cn++)
        {
            if (jec == 1)
            {
                coci++;
                printf("\n    Ingrese El Numero %d\n    > ", coci);
                while (scanf(" %d", &arp[cn][ci]) != 1)
                    ;
                system("CLS");
                if (ci == 9 && cn == 9)
                {
                    jec = 0;
                    ci = -1;
                    printf("\n Nums > ");
                }
            }
            else
            {
                printf(" %d ", arp[cn][ci]);
            }
        }
    }
}

void diagp(int (*arp)[10])
{
    int x, i = 0, ac[10];

    printf("\n\n    Diagonal Principal>");
    for (x = 0; x < 10; x++)
    {
        ac[x] = arp[i][x];
        i++;
    }
    for (x = 0; x < 10; x++)
    {
        printf(" %d", ac[x]);
    }
}

void sumdiags(int (*arp)[10])
{
    int x, i = 0, sum = 0, com = 1;

    for (x = 0; x < 10; x++)
    {
        sum += arp[i][x];
        if (com == 1)
        {
            i++;
            if (i == 10)
            {
                i = 9;
                x = 0;
                com = 0;
            }
        }
        else
        {
            i--;
        }
    }

    printf("\n    La Suma De Diagonales Es> %d", sum);
}

void cornsum(int (*arp)[10])
{
    int x, i, sume = 0;

    for (x = 0; x <= 9; x++)
    {
        for (i = 0; i <= 9; i++)
        {
            if (x == 0 || x == 9)
            {
                if (i == 0 || i == 9)
                {
                    sume += arp[i][x];
                }
            }
        }
    }

    printf("\n    La Suma De Las Esquinas Es> %d", sume);
}

void crossu(int (*arp)[10])
{
    int x, i, sumc = 0;

    for (x = 0; x <= 9; x++)
    {
        if (x != 5 || x != 6)
        {
            i = 5;
            sumc += arp[i][x];
            i = 6;
            sumc += arp[i][x];
        }
        else
        {
            for (i = 0; 1 <= 9; i++)
            {
                sumc += arp[i][x];
            }
        }
    }

    printf("\n    La Suma En Cruz Nos Da> %d", sumc);
}

void felmnt(int (*arp)[10])
{
    int nius = 0, colmts, x, i, ejct, next;

    do
    {
        colmts = 0;

        printf("\n    Ingrese El Numero A Buscar\n    > ");
        while (1)
        {
            if (scanf("%d", &nius) < 0 || // 1
                nius < 0 ||               // 2
                ((next = getchar()) != EOF && next != '\n'))
            { // 3
                clearerr(stdin);
                do
                    next = getchar();
                while (next != EOF && next != '\n'); // 4
                clearerr(stdin);
                printf("\n    Ingrese Solo Numeros Enteros\n    >");
            }
            else
            {
                break;
            }
        }

        for (x = 0; x <= 9; x++) // busqueda del elemento en arreglo
        {
            for (i = 0; i <= 9; i++)
            {
                if (nius == (arp[i][x]))
                {
                    colmts++;
                }
            }
        }

        if (colmts > 1) // impresion de resultados
        {
            printf("\n    %d Coincidencias", colmts);
        }
        else if (colmts == 1)
        {
            printf("\n    1 Coincidencia");
        }
        else
        {
            printf("\n    Ninguna Coincidencia");
        }

        printf("\n    Buscar Otro Elemento? s/n\n    >");
        ejct = getch();
    } while (ejct == 's');
}

/* entry point */
int main(int argc, char *argv[])
{
    int selt = 0, arp[10][10] = {{}, {}};

    do
    {
        mat(arp);
        diagp(arp);
        sumdiags(arp);
        cornsum(arp);
        crossu(arp);
        felmnt(arp);
        printf("\n    Continuar? s/n\n    > ");
        selt = getch();
    } while (selt == 's');

    return 0;
}