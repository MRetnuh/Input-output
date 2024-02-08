#include<stdio.h>
void cant_lineas() {
    int lineas = 0;
    int c = 0;
while((c = getchar()) != EOF) {
    if(c == '\n') {
        lineas++;
    }
}
printf("Cantidad de lineas: %d\n", lineas);
}
int main(void) {
    cant_lineas();
    return 0;
}
