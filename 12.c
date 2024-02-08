#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
int n = atoi(&argv[1][1]);
char *filename = argv[2];
FILE *fp = fopen(filename, "r");
char buffer[250];

for(int i = 0; i < n; i++){
fgets(buffer, 250, fp);

printf("%s\n", buffer);
}
return 0;
}
