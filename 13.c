#include<stdio.h>
#include<stdlib.h>

int count_lines(char *filename) {
FILE *fp = fopen(filename, "r");
int c;
int lines = 0;
while((c = fgetc(fp)) != EOF)
if(c == '\n') lines++;
fclose(fp);
return lines;
}
int main(int argc, char *argv[]){
    char *filename = argv[2];
    int nl = atoi(&argv[1][1]);
    int n = count_lines(filename);
    int start = n - (nl + 1);
    FILE *fp = fopen(filename, "r");
    for(int i = 0; i < n; i++){
        char buffer[100];
        fgets(buffer, 100, fp);
        if(i > start) printf("%s", buffer);
    }
    fclose(fp);
        return 0;
}
