#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
 int s = 0;
  int n = atoi(argv[1]);
  for(int i = 0; i < n; i++){
int num;
    scanf("%d", &num);
s += num;
        }
 printf("%d\n", s);
  return 0;
  }
