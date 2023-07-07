
#include <stdio.h>

int main()
{
    float c1;
    printf("Ingrese su nota\n");
    scanf("%f",&c1);
    
    if(c1<5){
        printf("Suspendiste");
    }
    
    if(c1==5){
        printf("Sacaste la nota suficiente");
    }
    
    if(c1>5 && c1<=6){
        printf("Bien");
    }
    
    if(c1>6 && c1<=8){
        printf("Notable");
    }
    
    if(c1>8 && c1<=10){
        printf("Sobresaliente");
    }
    return 0;
}
