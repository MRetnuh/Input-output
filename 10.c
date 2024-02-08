#include<stdio.h>
#include<stdlib.h>
void print_menu() {
    puts("1) Menu 1\n"
            "2) Menu 2\n"
            "3) Menu 3\n"
            "4) Salir\n"
        );
}
int main(void) {
    while(1) {

        system("clear");
        print_menu();
        int opcion;
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
          puts("elegiste menu 1");
                break;
          case 2:
            puts("elegiste menu 2");
                 break;
             case 3:
                puts("elegiste menu 3");
                break;
             case 4:
                 puts("saliendo...");
                  return 0;
             default:
                 puts("no conozco esa opcion");
                  break;
        }
        puts("presione una tecla para continuar");
        getchar();
    }
    return 0;
}
