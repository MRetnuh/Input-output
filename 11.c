#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
int c;
    char *filename = argv[1];
char *Filename = argv[2];
FILE *fp = fopen(argv[1], "r");
FILE *FP = fopen(argv[2], "w");
while((c = fgetc(fp)) != EOF) {
fputc(c, FP);
}
printf("\n");
return 0;
}
