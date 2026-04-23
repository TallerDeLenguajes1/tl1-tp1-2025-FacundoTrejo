// codigo_roto.c
#include <stdio.h> //agrego stdio.h



void duplicar_numero(int *numero) {
    *numero = (*numero) * 2;
}

int main() {
    int valor1;
    int valor2;

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    int suma = valor1 + valor2;  //agrego punto y coma a la variable int suma.
    printf("La suma es: %d\n", suma);

    duplicar_numero(&valor1); //le paso la direccion de memoria a la funcion porque la funcion no tiene un return.
    printf("El primer valor duplicado es: %d\n", valor1);

    return 0; //agrego punto y coma al return.
}