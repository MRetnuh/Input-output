#include<stdio.h>
//no es necesario asignarle a c el valor de getchar.Sin c funciona igual
int main(void) {
    int c;
    int cant_chars = 0;
    while((c = getchar()) != EOF) {
        cant_chars++;
    }
    printf("%d\n", cant_chars);
    return 0;
}
