/*
* module 2
* problem 2
*
* Given a employee's **worked hours**, **per hour salary** and **deductionstions** calculate it's net salary,
* depending on this raise by a defined percentage it's current base salary.
* - `net salary 1000 or less: 25% base salary raise`
* - `salary more than 1000 and up to 1500: 21% base salary raise`
* - `salary more than 1500: 18% base salary raise` 
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int worked_hours = 0;
    float hourly_payment = 0, deductions = 0, net_salary = 0, aumento = 0, saltotal = 0;

    printf("Horas Trabajadas\n");
    scanf("%d", &worked_hours);

    printf("Salario por Hora\n");
    scanf(" %f", &hourly_payment);

    printf("Deduciones\n");
    scanf(" %f", &deductions);

    /* remove extra \n */
    getchar();

    net_salary = (worked_hours * hourly_payment) - deductions;

    if (net_salary <= 1000)
    {
        aumento = ((worked_hours * hourly_payment) * 0.25);
        saltotal = (net_salary + aumento);
        printf("===================================\nAjuste Salarial de 25%%\nSalario Neto-------$%.2f\nAumento-----------$%.2f\nSalario Total------$%.2f\n", net_salary, aumento, saltotal);
    }
    else if (net_salary > 1000 & net_salary <= 1500)
    {
        aumento = ((worked_hours * hourly_payment) * 0.21);
        saltotal = (net_salary + aumento);
        printf("===================================\nAjuste Salarial de 21%%\nSalario Neto-------$%.2f\nAumento-----------$%.2f\nSalario Total------$%.2f\n", net_salary, aumento, saltotal);
    }
    else if (net_salary > 1500)
    {
        aumento = ((worked_hours * hourly_payment) * 0.18);
        saltotal = (net_salary + aumento);
        printf("===================================\nAjuste Salarial de 18%%\nSalario Neto-------$%f.25555\nAumento-----------$%.2f\nSalario Total------$%.2f\n", net_salary, aumento, saltotal);
    }
    getchar();

    return 0;
}