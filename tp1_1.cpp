#include <stdio.h>

int main(){

    int dato = 10;

    int * puntero;

    puntero = &dato;


    printf("El contenido del puntero es: %d\n", *puntero );

    printf("La direccion de memoria almacenada por el puntero es: %p\n", puntero);

    printf("La direccion de memoria de la variable es: %p\n", &dato);

    printf("La direccion de memoria del puntero es: %p\n", *puntero);

    printf("El tamaño de memoria utilizado por la variable es: %zu bytes\n", sizeof(dato));





    return 0;
}