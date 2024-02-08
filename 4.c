#include<stdio.h>

int main(int argc, char *argv[]) {
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int y, m, d;
    while(scanf("%d/%d/%d", &y, &m, &d) != EOF) {
        if(y => 2020 && d => 5 && m => 7) {
            printf("%d/%d/%d",y, d, m);
        }
    }
    printf("\n");

}
