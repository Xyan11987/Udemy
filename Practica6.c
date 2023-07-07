
#include <stdio.h>

int main()
{
    float c1,c2,c3;
    printf("Ingrese el precio base del coche\n");
    scanf("%f",&c1);
    
    printf("Ingrese el numero de kilometros del coche\n");
    scanf("%f",&c2);
    
    printf("Ingrese el consumo del coche\n");
    scanf("%f",&c3);
    
    if(c2<20000 && c3<=5){
        c1=c1*1.2;
    }
    
    if(c2>20000 && c3<=5){
        c1=c1*1.1;
    }
    
    if(c3>5){
        c1=c1*1.05;
    }
    printf("el precio del coche es %.2f",c1);

    return 0;
}
