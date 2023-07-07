#include <stdio.h>
#include <stdlib.h>

struct producto
{
    int codigo;
    char descripcion[50];
    float precio;
};
int main(){
    struct producto *prod;
    prod=malloc(sizeof(struct producto));
    printf("introduce el codigo\n");
    scanf ("%d",&prod->codigo);
    printf("introduce la descripcion\n");
    scanf ("%s",&prod->descripcion);
    printf("introduce el precio\n");
    scanf ("%f",&prod->precio);

    printf("codigo del articulo %d\n",prod->codigo);
    printf("descripcion %s\n",prod->descripcion);
    printf("precio %f\n",prod->precio);

    free(prod);
    prod=NULL;
}
