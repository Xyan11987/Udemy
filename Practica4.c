
#include <stdio.h>

int main()
{
    float c1,c2;
    printf("Ingrese la cantidad de euros\n");
    scanf("%f",&c1);
    
    c2=c1*166.386;
    
    printf("%.2f euros son %.2f pecetas",c1, c2);

    return 0;
}
