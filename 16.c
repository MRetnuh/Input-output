#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double num;
    char temperatura[2];
    char elegir[3];
     printf("F (Farenheit) o C (Celsius), elige una: ");
    scanf("%s", temperatura);

    if (strcmp(temperatura, "F") != 0 && strcmp(temperatura, "C") != 0) {
        puts("No existe/está disponible esa temperatura");
        return 0;
    }

    printf("Ingresa los grados de la temperatura: ");
    scanf("%lf", &num);

    if (strcmp(temperatura, "F") == 0) {
        printf("La conversión a Celsius equivale a: %.2f\n", (num - 32) * 5 / 9);
    } else if (strcmp(temperatura, "C") == 0) {
        printf("La conversión a Fahrenheit equivale a: %.2f\n", (num * 9 / 5) + 32);
    }

    printf("¿Quieres continuar? (si/no): ");
    scanf("%s", elegir);

    while (strcmp(elegir, "si") == 0) {
        printf("F (Farenheit) o C (Celsius), elige una: ");
        scanf("%s", temperatura);

        if (strcmp(temperatura, "F") != 0 && strcmp(temperatura, "C") != 0) {
            puts("No existe/está disponible esa temperatura");
            return 0;
        }

        printf("Ingresa los grados de la temperatura: ");
        scanf("%lf", &num);

        if (strcmp(temperatura, "F") == 0) {
            printf("La conversión a Celsius equivale a: %.2f\n", (num - 32) * 5 / 9);
        } else if (strcmp(temperatura, "C") == 0) {
            printf("La conversión a Fahrenheit equivale a: %.2f\n", (num * 9 / 5) + 32);
        }

        printf("¿Quieres continuar? (si/no): ");
        scanf("%s", elegir);
    }

    if (strcmp(elegir, "no") == 0) {
        return 0;
    }

    return 0;
}
