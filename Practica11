#include <stdio.h>

int main()
{
    
    float peso[5], promedio=0, C1=0, C2=0, suma=0;
    
   for(int i=0; i < 5; i++){
       
       printf("ingrese el peso de la persona %i\n", i+1);
       scanf("%f",&peso[i]);
       suma=suma+peso[i];
   }
    
    
    promedio=suma/5;
    
    for(int j=0; j < 5; j++){
       
       if(peso[j]<promedio){
           C1++;
       }
       if(peso[j]>promedio){
           C2++;
       }
   }
   
    printf("El promedio es %.2f, hay %.2f con un peso superior al promedio y %.2f con un peso menor", promedio, C2, C1);
    
    return 0;
}
