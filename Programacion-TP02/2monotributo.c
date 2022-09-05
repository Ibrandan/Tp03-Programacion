#include <stdio.h>

int main(void) {
    int energiaAnual;
    float ingresosBrutos;

    printf("Ingrese la energia consumuida anualmente \n");
    scanf("%d", &energiaAnual);

    printf("Ingrese sus ingresos brutos anuales \n");
    scanf("%f", &ingresosBrutos);

    if (energiaAnual <= 3300 && ingresosBrutos <= 748382.07)
    {
        printf("Es categoria A");
    }
    else if (energiaAnual <= 5000 && ingresosBrutos <= 1112459.83)
    {
        printf("Es categoria B");
    }
    else if (energiaAnual <= 6700 && ingresosBrutos <= 1557443.75)
    {
        printf("Es categoria C");
    }         
    else if (energiaAnual <= 10000 && ingresosBrutos <= 1934273.04)
    {
        printf("Es categoria D");
    }    
    else if (energiaAnual <= 20000 && ingresosBrutos <= 3416526.83)
    {
        printf("Es categoria G");
    }    
    else if (energiaAnual <= 20000 && ingresosBrutos <= 4229985.60)
    {
        printf("Es categoria H");
    }    
    else
    {
        printf("Pertenece al regimen general");
    }

    return 0;
}