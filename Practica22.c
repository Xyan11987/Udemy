#include <stdio.h>
int main()
{
    struct hE
    {
        int hora;
        int minuto;
    };
    struct entrada {
        struct hE h1;
        int asistentes;
        float precio;
    };
    struct entrada el;
    char continuar='s';
    while (continuar=='s')
    {
        printf("Introduce la hora de entrada\n");
        scanf("%d",&el.h1.hora);
        printf("Introduce el minuto de entrada\n");
        scanf("%d",&el.h1.minuto);
        printf("Introduce el numero de asistentes\n");
        scanf("%d",&el.asistentes);
        
        int total=0;
        for (int i = 0; i < el.asistentes; i++)
        {
            int edad;
            printf("introduce la edad del asistente %d \n", i+1);
            scanf("%d",&edad);
            if (edad<6){
                total=total+0;
            }
            else if (edad>=6 && edad<=15){
                total=total+5;
            }
            else if (edad>=16 && edad<=26||edad>65){
                total=total+8;
            }
            else {
                total=total+10;
            }
        }
        if (el.asistentes>=5 )
        {
            el.precio=total*0.9;
        }
        else{
            el.precio=total;
        }
         

        printf("hora de entrada del grupo %d\n",el.h1.hora);
        printf("minuto de entrada del grupo %d\n",el.h1.minuto);
        printf("precio de entrada del grupo %f\n",el.precio);
        
        printf("desea continuar con otro grupo?(s/n)\n");
        scanf ("%c",&continuar);
        scanf ("%c",&continuar);

    }
    }
