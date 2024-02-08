#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[]){
char *filename = argv[1]; //funciona para leer archivos
FILE *fp;
if(strcmp(filename, "-") == 0){
    fp = stdin;
}
    else{
        fp = fopen(filename, "r"); // r de read/leer
    }
        int c;
        while((c = fgetc(fp)) != EOF) {
if(c != ' ' && c != '\n' && c != '\t'){
    putchar(c);
}
}
printf("\n");
fclose(fp);
return 0;
}
