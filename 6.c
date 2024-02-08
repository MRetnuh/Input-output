#include<stdio.h>
#include<time.h>
int main(int argc, char *argv[]){
srand(time(NULL));
    int num;
int random = rand() % 1001;
puts("5 intentos para adivinar un numero entre 1 y 1000");
    for(int i = 1; i <= 5; i++){
        printf("intento numero: %d", i);
     scanf("%d", &num);
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
