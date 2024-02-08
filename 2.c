#include<stdio.h>

int main(void){
int num;
int s = 0;
do {
scanf("%d", &num);
s += num;
} while(num !=0);
printf("%d\n", s);
return 0;
}
