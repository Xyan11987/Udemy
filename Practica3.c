
#include <stdio.h>

int main()
{
    float c1,c2,c3;
    printf("Ingrese la altura y luego la base\n");
    scanf("%f %f",&c1, &c2);
    
    c3=c1*c2;
    
    printf("el area es %.2f",c3);

    return 0;
}
