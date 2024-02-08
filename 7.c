#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char *argv[]){
    int num;
    int random = rand() % 1001;
    puts("5 intentos para atinarle al numero");
    for(int i = 1; i <= 5; i++){
        printf("intento numero %d", i);
        scanf("%d", &num);
        int variable = scanf("%d", &num);
        if(variable == 0) {
puts("numeros, no letras. Pierdes por idiota");
return 0;
    }
        if(num > 1001|| num < 1) {
            puts("Chistoso che. Perdes por pelotudo");
            return 0;
        }
if(num == random)
             puts("le atinaste");
         if(num > random)
             puts("te pasaste capo");
          else
           puts("es menor");
 if(i == 5)
     printf("el numero correcto era %d\n", random);
     }
  return 0;
}
