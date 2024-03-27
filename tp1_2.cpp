#include <stdio.h>

int CuadradoNumero(int n)
{
    int elevadoCuadrado;

    elevadoCuadrado = n * n;

    return elevadoCuadrado;
}

void CuadradoNumeroVoid(int n)
{
    int elevadoCuadrado;

    elevadoCuadrado = n * n;

    printf("El numero elevado al cuadrado es:%d\n", elevadoCuadrado);
}

void mostrar(int n)
{

    printf("La direccion de memoria es:%p\n", &n);

    printf("El contenido de la variable es:%d\n", n);
}

void invertir(int a, int b)
{
    int aux;

    aux = a;

    a = b;

    b = aux;

    printf("El valor de a es:%d\n", a);
    printf("El valor de b es:%d\n", b);
}

void orden(int a, int b)
{

    int aux;

    if (a > b)
    {
        aux = a;

        a = b;

        b = aux;
    }
    else
    {

        a = a;

        b = b;
    }

    printf("El valor mas chico es:%d\n", a);
    printf("El valor mas grande es:%d\n", b);
}

int main()
{

     int a, b;

    // Solicitar al usuario que ingrese los valores
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    invertir(a, b);

    orden(a,b);

    int elevadoCuadrado;

    elevadoCuadrado = CuadradoNumero(6);

    printf("El cuadrado es:%d\n", elevadoCuadrado);

    CuadradoNumeroVoid(10);

    mostrar(9);

    

    return 0;
}