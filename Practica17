
#include <stdio.h>

int main()
{
    
    float Vector[5];
    float *P_AVector = &Vector[0];
    float Media=0;
    
    for(int i=0; i <5 ; i++){
        printf("Introduce el numero %d\n", i+1);
        scanf("%f",&Vector[i]);
        Media=Media+*(P_AVector + i);
    }
    
    printf("La media es %.2f", Media/5);
    
    return 0;
}
