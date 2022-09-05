#include <stdio.h>

int main(void) {
    float cuota;
    int nivel, metodoDePago, profesorado;

    printf("Ingrese a que nivel asiste \n");
    printf("1 = Nivel Inicial, 2 = Nivel Primario, 3 = Nivel Secundario, 4 = Nivel Superior \n");
    scanf("&d", &nivel);
    // if(nivel = 4){
    //     printf("Profesorado a cursar \n");
    //     printf("1 = Profesorado de Educacion Fisica, 2 = Profesorado de Lengua, 3 = Profesorado de Matematica, 4 = Profesorado de Ingles \n");
    //     scanf("%c", &profesorado);
    // }
    // printf("1 = un pago, 2 = dos pagos, 3 = tres pagos \n");
    // scanf("&d", &metodoDePago);

    switch (nivel)
    {
    case 1:
        cuota = 4800;
        break;
    case 2:
        cuota = 6250;
        break;
    case 3:
        cuota = 6800;
        break;
    case 4:
        switch (profesorado)
        {
            case 1:
                cuota = 7100;
                break;
            case 2:
                cuota = 8000;
                break;
            case 3:
                cuota = 8000;
                break;
            case 4:
                cuota = 9500;
                break;
        }
        break;
    }

    // switch (metodoDePago)
    // {
    // case 1:
    //     cuota = cuota * 0.85;
    //     break;
    // case 2:
    //     cuota = cuota * 1.10;
    //     break;
    // case 3:
    //     cuota = cuota * 1.15;
    //     break;
    // }

    printf("El monto de la cuota es: %.2f \n", cuota);

    return 0;
}