#include <stdio.h>

int main(void) {
    double peso, altura, imc;

    printf("Ingrese su peso en kg: ");
    scanf("%lf", &peso);

    printf("Ingrese su altura en metros: ");
    scanf("%lf", &altura);

    if (altura > 0) {
        imc = peso / (altura * altura);
        printf("Su IMC es: %.2f\n", imc);
    } else {
        printf("La altura debe ser mayor a cero.\n");
    }

    return 0;
}
