#include <stdio.h>
#include <math.h>
int main(){
    struct cilindro
    {
        float diametro;
        float carrera;
    };
    struct motor
    {
        int identificador;
        struct cilindro cilindro1;
        int nmCilindro;
        float cilindrada;
    };
    struct motor motor1;

    printf("Introduce el identificador\n");
    scanf("%d",&motor1.identificador);
    printf("Introduce el diametro del cilindro\n");
    scanf("%f",&motor1.cilindro1.diametro);
    printf("Introduce la carrera del cilindro\n");
    scanf("%f",&motor1.cilindro1.carrera);
    printf("Introduce el numero de cilindros\n");
    scanf("%d",&motor1.nmCilindro);
    
    motor1.cilindrada=(motor1.nmCilindro*(motor1.cilindro1.carrera/10)*3.14*pow((motor1.cilindro1.diametro/10),2))/4;
    printf("identificador:%d\n",motor1.identificador);
    printf("diametro(nm):%f\n",motor1.cilindro1.diametro);
    printf("carrera(nm):%f\n",motor1.cilindro1.carrera);
    printf("N° cilindros:%d\n",motor1.nmCilindro);
    printf("cilindrada:%f\n",motor1.cilindrada);
}
