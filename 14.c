#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
srand(time(NULL));
    int n = atoi(argv[1]);
int m = atoi(argv[2]);

for(int i = 0; i < n; i++){
    printf("%d ", rand() % m);
}
printf("\n");
}

/* viene en dos partes */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int m = atoi(argv[1]);
    int freqs[m];
    for(int i = 0; i < m; i++)
        freqs[i] = 0;
        int n;
        int cant_figuras = 0;
        int completo = 0;
        while(scanf("%d", &n) != EOF && completo == 0){
cant_figuras++;
freqs[n]++;
for(int i = 0; i < m; i++){
    if(freqs[i] != 0) completo = 1;
    else            {completo =0; break;}
}
}
printf("%s el album y compre %d figus\n", completo ? "complete" : "no complete", cant_figuras);
printf("figus -> ");
for(int i = 0; i < m; i++)
printf("%02d ", i);
printf("\ncant -> ");
for (int i = 0; i < m; i++)
printf("%02d ", freqs[i]);
printf("\n");
return 0;
}
