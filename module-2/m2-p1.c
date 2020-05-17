// Problema 1 Laboratorio 2
#include <stdio.h>
int main(){
    int calif, cic;
    float prome;
    for(cic = 1; cic < 6; cic = cic + 1){
        printf("Ingrese la Calificacion %d\n", cic);
        scanf(" %d", &calif);
        prome = prome + calif;
    }
    prome = (prome / 5);
    if (prome >= 71){
        printf("++++++++++APROBADO++++++++++\nPromedio de %.2f\n", prome);    
    } else if(prome < 71){
        printf("----------REPROBADO----------\nPromedio de %.2f\n", prome);
    }
    getchar(); getchar();
    return 0;
}