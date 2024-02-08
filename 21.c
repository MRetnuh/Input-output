#include<stdio.h>

 int main(int argc, char *argv[]){
  double n;
  double m;
  char op[20];
                                                                  printf("Decime los numeros: ");                                 scanf("%lf", &n);                                               scanf("%lf", &m);                                                                                                               printf("Decime la operacion: ");                                scanf("%s", op);                                                                                                                if(strcmp(op, "resta") == 0) {                                    double resta = n - m;
    printf("La resta de esos numeros da %.2f\n", resta);
  }
  else if(strcmp(op, "suma") == 0) {                                double suma = n + m;
    printf("La suma de esos numeros da %.2f\n", suma);
  }
  else if(strcmp(op, "division") == 0) {
    if (m != 0) {
      double division = n / m;
      printf("La division de esos numeros da %.2f\n", division);
    } else {
      printf("Error: No se puede dividir por cero.\n");
    }
  }
  else if(strcmp(op, "multiplicacion") == 0) {
    double mul = n * m;
    printf("La multiplicacion de esos numeros da %.2f\n", mul);
  }
  else {
    printf("Operacion no reconocida.\n");
  }

  return 0;
 }
