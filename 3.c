#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int num;
    int s = 0;
while (scanf("%d", &num) != EOF) {
    s += num;
}
printf("%d\n", s);
return 0;
}
