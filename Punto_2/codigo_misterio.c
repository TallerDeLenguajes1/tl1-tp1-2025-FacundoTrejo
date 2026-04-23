#include <stdio.h>


void funcion_invertir(int *p) {
    int temp = *p;
    int rev = 0;
    while (temp > 0) {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }
    *p = rev;
}

void f_div_mitad(int *p) {
    *p = *p / 2;
}

void f_sumarVarMasPuntero(int *p) {
    int temp = *p;
    int suma = 0;
    while (temp > 0) {
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    *p = *p + suma;
}

void procesar_enigma(int *valor_referencia) {
    funcion_invertir(valor_referencia);
    f_div_mitad(valor_referencia);
    f_sumarVarMasPuntero(valor_referencia);
}

int main() {
    
printf ("hola mundo\n");
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}