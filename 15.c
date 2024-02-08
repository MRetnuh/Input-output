#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
int previo_c;
    int c;
    int run = 0;
    while((c = getchar()) != EOF) {
        if(previo_c != c){
            if(run != 0) printf("%d", run + 1);
            putchar(c);
            run = 0;
        }
        else{
            run++;
        }
        previo_c = c;
    }
    return 0;
}
