
#include <stdio.h>

int main()
{
    int c1;
    
    printf("Ingrese un numero del 1 al 7\n");
    scanf("%i",&c1);
    
    switch(c1){
    case(1):
        printf("Lunes");
        break;
    case(2):
        printf("Martes");
        break;
    case(3):
        printf("Miercoles");
        break;
    case(4):
        printf("Jueves");
        break;
    case(5):
        printf("Viernes");
        break;
    case(6):
        printf("Sabado");
        break;
    case(7):
        printf("Domingo");
        break;
    default:
        printf("Valor no valido");
        break;
    }
    return 0;
}
