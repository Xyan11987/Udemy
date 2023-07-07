
#include <stdio.h>

int main()
{
    
    float Numero=1, suma=0, C1=0, promedio=0;
    
   while (Numero!=0){
        printf("ingrese el numero\n");
        scanf("%f",&Numero);
        suma=suma+Numero;
        C1++;
    }
    
    promedio=suma/C1;
    
    printf("La suma de todos los numeros es %2.f y el promedio es %2.f", suma, promedio);
    
    return 0;
}
