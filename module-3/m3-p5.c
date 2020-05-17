/*
* module 3
* problem 5
*
*Given **n** grades from a student, get the following data:
*
*  - `number of Failed Subjects`
*  - `number of Approved Subjects`
*  - `grades average`
*  - `approved grades average`
*  - `failed grades average`
*/

/* imported libraries */
#include <stdio.h>

/* do calculations and output results */
void promedioe(int cnotas)
{
    int con, notasi, apron = 0, aproc = 0, repron = 0, repc = 0, pro = 0;
    char nombrest[25];

    printf("\nIngrese El Nombre Del Estudiante\n---------------------------------------\n");
    scanf(" %s", &nombrest);

    for (con = 1; con <= cnotas; con++)
    {
        printf("\nIngrese La Calificacion %d\n-----------------------------------\n", con);
        scanf(" %d", &notasi);
        if (notasi > 70)
        {
            apron += notasi;
            aproc++;
        }
        else
        {
            repron += notasi;
            repc++;
        }
    }
    getchar();
    pro = (apron + repron) / cnotas;

    if (aproc > 0 & repc > 0)
    {
        apron /= aproc;
        repron /= repc;
    }
    else if (aproc > 0 & repc == 0)
    {
        pro = apron = (apron / cnotas);
    }
    else
    {
        pro = repron = (repron / cnotas);
    }

    printf("\n===========================================================\nEl Estudiante %s Tiene Las Siguientes Calificaciones:\n===========================================================\nNumero De Notas Aprobadas ==== %d | Promedio De %d\nNumero De Notas Reprobadas === %d | Promedio De %d\n------------------------------------------------\nPromedio Final %d\n\n\n", nombrest, aproc, apron, repc, repron, pro);
}

/* entry point */
int main(int argc, char *argv[])
{
    int cnotas;

    printf("\nIngrese la Cantidad de Notas del Estudiante\n--------------------------------------------\n"); // this is a test of comment
    scanf("%d", &cnotas);

    /* remove \n */
    getchar();

    promedioe(cnotas);
    getchar();

    return 0;
}