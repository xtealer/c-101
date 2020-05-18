/*
* module 3
* problem 15
*
* Create a program to replicate the following series:
*
*   - 1 + 2 + 3 + 4 + 5 + 6
*   - 2 + 4 + 6 + 8 + 10
*   - 3 + 6 + 9 + 12
*   - (1/1) + (1/2) + (1/3) + (1/4)
*   - 5 - 10 + 15 - 20 + 25 - 30
*   - 1 \* 2 \* 3 \* 4 \* 5 \* 6
*   - 2 \* 4 \* 6 \* 8 \* 10
*   - 1 + (1 + 2) + (1 + 2 + 3) + (1 + 2 + 3 + 4)
*   - 1 \* 3 \* 6 \* 10 \* 15 \* 21
*   - 1 + 2^2 + 3^3 + N^N
*   - 1 + 1/2 + 1/3 + 1/N
*/

/* imported libraries */
#include <stdio.h>
#include <math.h>

int sej = 1;

void serie1()
{
    int vci = 0, cci, resum;

    while (vci < 2 || vci > 999)
    {
        printf("\n\n    ============================================================\n    | Digite Las Veces a Ejecutar El Ciclo (Min. 2 & Max. 999) |    \n    ============================================================\n     > ");
        scanf(" %d", &vci);
    }

    printf("\n\n    ---------------------------------------------------------------\n    |                           Serie 1                           |\n    ---------------------------------------------------------------\n     > ");
    for (cci = 1; cci <= vci; cci++)
    {
        resum += cci;
        printf("%d", cci);
        if (cci < vci)
        {
            printf(" + ");
        }
        if ((cci % 10) == 0 && cci < vci)
        {
            printf("\n       ");
        }
    }

    printf(" <\n    ---------------------------------------------------------------\n     Total/>  %d", resum);
    limpa();
}

void serie2()
{
    int vci = 0, cci, resum;

    while (vci < 2 || vci > 499)
    {
        printf("\n\n    ============================================================\n    | Digite Las Veces a Ejecutar El Ciclo (Min. 2 & Max. 499) |\n    ============================================================\n     > ");
        scanf(" %d", &vci);
    }

    printf("\n\n    ---------------------------------------------------------------\n    |                           Serie 2                           |\n    ---------------------------------------------------------------\n     > ");
    for (cci = 2; cci <= (vci * 2); cci += 2)
    {
        resum += cci;
        printf("%d", cci);
        if (cci < (vci * 2))
        {
            printf(" + ");
        }
        if ((cci % 20) == 0 && cci < (vci * 2))
        {
            printf("\n       ");
        }
    }

    printf(" <\n    ---------------------------------------------------------------\n     Total/>  %d", resum);
    limpa();
}

void serie3()
{
    int vci = 0, cci, resum;

    while (vci < 2 || vci > 333)
    {
        printf("\n\n    ============================================================\n    | Digite Las Veces a Ejecutar El Ciclo (Min. 2 & Max. 333) |\n    ============================================================\n     > ");
        scanf("%d", &vci);
    }

    printf("\n\n    ---------------------------------------------------------------\n    |                           Serie 3                           |\n    ---------------------------------------------------------------\n     > ");
    for (cci = 3; cci <= (vci * 3); cci += 3)
    {
        resum += cci;
        printf("%d", cci);
        if (cci < (vci * 3))
        {
            printf(" + ");
        }
        if (cci % 30 == 0 && cci < (vci * 3))
        {
            printf("\n       ");
        }
    }

    printf(" <\n    ---------------------------------------------------------------\n     Total/>  %d", resum);
    limpa();
}

void serie4()
{
    int nci = 0, ci;
    float result = 0.00;

    while (nci < 2 || nci > 999)
    {
        printf("\n\n    ============================================================\n    | Digite Las Veces a Ejecutar El Ciclo (Min. 2 & Max. 999) |\n    ============================================================\n     > ");
        scanf(" %d", &nci);
    }

    printf("\n\n    ---------------------------------------------------------------\n    |                           Serie 4                           |\n    ---------------------------------------------------------------\n     > ");
    for (ci = 1; ci <= nci; ci++)
    {
        result = result + (1.0 / ci);
        printf("1/%d", ci);
        if (ci < nci)
        {
            printf(" + ");
        }
        if (ci % 7 == 0 && ci < nci)
        {
            printf("\n       ");
        }
    }
    printf(" <\n    ---------------------------------------------------------------\n     Total/>  %.2f", result);
    limpa();
}

void serie5()
{
    int vci = 0, cci, resum = 0, sures = 0;

    while (vci < 2 || vci > 199)
    {
        printf("\n\n    ============================================================\n    | Digite Las Veces a Ejecutar El Ciclo (Min. 2 & Max. 199) |\n    ============================================================\n     > ");
        scanf(" %d", &vci);
    }

    printf("\n\n    ---------------------------------------------------------------\n    |                           Serie 5                           |\n    ---------------------------------------------------------------\n     > ");
    for (cci = 5; cci <= (vci * 5); cci += 5)
    {
        printf("%d", cci);
        if (sures == 0)
        {
            if (cci < (vci * 5))
            {
                printf(" - ");
            }
            resum += cci;
            sures++;
        }
        else if (sures == 1)
        {
            if (cci < (vci * 5))
            {
                printf(" + ");
            }
            resum -= cci;
            sures--;
        }
        else if (cci < 10)
        {
            resum = cci;
        }
        if (cci % 50 == 0 && cci < (vci * 5))
        {
            printf("\n       ");
        }
    }

    printf(" <\n    ---------------------------------------------------------------\n     Total/>  %d", resum);
    limpa();
}

void serie6()
{
    int vci = 0, cci;
    double remult = 1;

    while (vci < 2 || vci > 19)
    {
        printf("\n\n    =============================================================\n    |  Digite Las Veces a Ejecutar El Ciclo (Min. 2 & Max. 19)  |\n    =============================================================\n     > ");
        scanf("%d", &vci);
    }

    printf("\n\n    -------------------------------------------------------------\n    |                          Serie 6                          |\n    -------------------------------------------------------------\n     > ");
    for (cci = 1; cci <= vci; cci++)
    {
        remult *= cci;
        printf("%d", cci);
        if (cci < vci)
        {
            printf(" * ");
        }
        if (cci == 13 && cci < vci)
        {
            printf("\n       ");
        }
    }

    printf(" <\n    -------------------------------------------------------------\n     Total/>  %1.f", remult);
    limpa();
}

void serie7()
{
    int vci = 0, cci;
    double remult = 1;

    while (vci < 2 || vci > 12)
    {
        printf("\n\n    =============================================================\n    |  Digite Las Veces a Ejecutar El Ciclo (Min. 2 & Max. 12)  |\n    =============================================================\n     > ");
        scanf(" %d", &vci);
    }

    printf("\n\n    -------------------------------------------------------------\n    |                          Serie 7                          |\n    -------------------------------------------------------------\n     > ");
    for (cci = 2; cci <= (vci * 2); cci += 2)
    {
        remult *= cci;
        printf("%d", cci);
        if (cci < (vci * 2))
        {
            printf(" * ");
        }
    }

    printf(" <\n    -------------------------------------------------------------\n     Total/>  %1.f", remult);
    limpa();
}

void serie8()
{
    int xcon, tcon, nci = 0, resultasum = 0;

    while (nci < 2 || nci > 12)
    {
        printf("\n\n    =============================================================\n    |  Digite Las Veces a Ejecutar El Ciclo (Min. 2 & Max. 12)  |\n    =============================================================\n     > ");
        scanf(" %d", &nci);
    }

    printf("\n\n    -------------------------------------------------------------\n    |                          Serie 8                          |\n    -------------------------------------------------------------\n     > ");
    for (tcon = 1; tcon <= nci; tcon++)
    {
        if (tcon > 1)
        {
            printf(" + (");
        }
        for (xcon = 1; xcon <= tcon; xcon++)
        {
            printf("%d", xcon);
            if (xcon < tcon)
            {
                printf(" + ");
            }
            resultasum += xcon;
        }
        if (tcon > 1)
        {
            printf(")");
        }
        if (xcon == 5 || xcon > 6 && xcon < 13)
        {
            printf("\n        ");
        }
    }

    printf(" <\n    -------------------------------------------------------------\n     Total/>  %d", resultasum);
    limpa();
}

void serie9()
{
    int vci, cci, resulnum = 1;
    double remult = 1;

    while (vci < 2 || vci > 24)
    {
        printf("\n\n    =============================================================\n    |  Digite Las Veces a Ejecutar El Ciclo (Min. 2 & Max. 24)  |\n    =============================================================\n     > ");
        scanf(" %d", &vci);
    }

    printf("\n\n    -------------------------------------------------------------\n    |                          Serie 9                          |\n    -------------------------------------------------------------\n     > ");
    for (cci = 1; cci <= vci; cci++)
    {
        resulnum = (cci * (cci + 1)) / 2;
        remult *= resulnum;
        printf("%d", resulnum);
        if (cci < vci)
        {
            printf(" * ");
        }
        if ((cci % 10) == 0 && cci < vci)
        {
            printf("\n       ");
        }
    }
    printf(" <\n    -------------------------------------------------------------\n     Total/>  %1.f", remult);
    limpa();
}

void serie10()
{
    int unum = 0, elnum, nzic, chck = 0;
    double sumre = 0;

    while (chck < 2)
    {
        if (unum < 2 || unum > 30)
        {
            printf("\n\n    =============================================================\n    |  Digite Las Veces a Ejecutar El Ciclo (Min. 2 & Max. 30)  |\n    =============================================================\n     > ");
            chck = scanf(" %d", &unum);
        }
        else if (elnum == 0 || elnum > 30 || elnum < -30)
        {
            printf("\n    Ingrese El Valor De N (Diferente De 0 & Rango Max. De -30/30)\n     > ");
            chck = scanf(" %d", &elnum);
        }
        else
        {
            chck++;
        }
    }

    printf("\n\n    -----------------------------------------------------------------\n    |                          Serie 10                             |\n    -----------------------------------------------------------------\n     >");
    for (nzic = 1; nzic <= unum; nzic++)
    {
        printf(" %d^%d +", nzic, nzic);
        sumre += pow(nzic, nzic);
        if (nzic % 8 == 0 && nzic < unum)
        {
            printf("\n      ");
        }
    }
    printf(" %d^%d", elnum, elnum);

    sumre += pow(elnum, elnum);

    printf(" <\n    -----------------------------------------------------------------\n     Total/>  %1.f", sumre);
    limpa();
}

void serie11()
{
    int nci, ci, nnum, chck = 0;
    float result = 0.00;

    while (chck < 2)
    {
        if (nci < 2 || nci > 99)
        {
            printf("\n\n    =============================================================\n    |  Digite Las Veces a Ejecutar El Ciclo (Min. 2 & Max. 99)  |\n    =============================================================\n     > ");
            scanf(" %d", &nci);
        }
        else if (nnum == 0 || nnum > 99 || nnum < -99)
        {
            printf("\n    Ingrese El Valor De N (Diferente De 0 & Rango Max. De -99/99)\n     > ");
            scanf(" %d", &nnum);
        }
        else
        {
            break;
        }
    }

    printf("\n    -----------------------------------------------------------------\n    |                          Serie 11                          |\n    -----------------------------------------------------------------\n     > ");
    for (ci = 1; ci <= nci; ci++)
    {
        printf("1/%d +", ci);
        result = result + (1.0 / ci);
        if (ci % 10 == 0 && ci < nci)
        {
            printf("\n       ");
        }
    }
    printf(" 1/%d", nnum);

    result += (1.0 / nnum);

    printf(" <\n    -----------------------------------------------------------------\n     Total/>  %.2f", result);
    limpa();
}

void limpa(void)
{
    int buff = 0;

    if (sej)
    {
        printf("\n\n\n   ***********Pulse Cualquier Tecla Para Volver Al Menu Principal***********\n");
    }
    else
    {
        printf("\n\n\n   **************Pulse Cualquier Tecla Para Salir Del Programa**************\n");
    }

    buff = getchar();
}

/* entry point */
int main(int argc, char *argv[])
{
    while (sej != 0)
    {
        printf("\n    ***********************************************************************\n    |                  Seleccione El Programa A Ejecutar                  |\n    ***********************************************************************\n");
        printf("    |  1   << Serie 1: (1 + 2 + 3 + 4 + 5 + 6...)                         |\n    |  2   << Serie 2: (2 + 4 + 6 + 8 + 10...)                            |\n    |  3   << Serie 3: (3 + 6 + 9 + 12...)                                |\n");
        printf("    |  4   << Serie 4: (1/1) + (1/2) + (1/3) + (1/4)...                   |\n    |  5   << Serie 5: (5 - 10 + 15 - 20 + 25 - 30...)                    |\n    |  6   << Serie 6: (1 * 2 * 3 * 4 * 5 * 6...)                         |\n");
        printf("    |  7   << Serie 7: (2 * 4 * 6 * 8 * 10...)                            |\n    |  8   << Serie 8: (1 + (1 + 2) + (1 + 2 + 3) + (1 + 2 + 3 + 4) +...) |\n    |  9   << Serie 9: (1 * 3 * 6 * 10 * 15 * 21...)                      |\n");
        printf("    |  10  << Serie 10: (1 + 2^2 + 3^3...+ N^N)                           |\n    |  11  << Serie 11: (1 + (1/2) + (1/3)...+ 1/N)                       |\n    |  0   << Para Salir Del Sistema                                      |\n");
        printf("    |_____________________________________________________________________|\n     Index/> ");
        scanf("%d", &sej);

        /* remove \n */
        getchar();

        while (sej < 0 || sej > 11)
        {
            printf("\n\n                 **Programa Desconocido, Intente De Nuevo...**\n\n     Index/> ");
            scanf(" %d", &sej);
        }

        switch (sej)
        {
        case 1:
            serie1();
            break;
        case 2:
            serie2();
            break;
        case 3:
            serie3();
            break;
        case 4:
            serie4();
            break;
        case 5:
            serie5();
            break;
        case 6:
            serie6();
            break;
        case 7:
            serie7();
            break;
        case 8:
            serie8();
            break;
        case 9:
            serie9();
            break;
        case 10:
            serie10();
            break;
        case 11:
            serie11();
            break;
        case 0:
            break;
        }
    }

    /* --------------------- End of Program ---------------------- */
    limpa();
    return 0;
}

/*
*  -----------------------  Student  -----------------------
*  Enrique Shunnar
*  II Semestre 2018
*  Grupo 9IL112
*  Ingenieria De Sistemas Y Computacion
*  Laboratorio 3.
*/