#include <stdio.h>

int main(void) {
    float ladoA, ladoB, ladoC, perimetro;
    printf("Ingrese los lados en centrimetos separados por espacio en blanco \n");
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

    if(ladoA == ladoB && ladoB == ladoC) {
        printf("El triangulo es equilatero \n");
    }
    else if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
        printf("El triangulo es isosceles \n");
    }
    else {
        printf("El triangulo es escaleno \n");
    }

    perimetro = ladoA + ladoB + ladoC;
    printf("El perimetro del triangulo es: %.2f", perimetro);

    return 0;
}