// main.c

#include "funciones.h"

int main() {
    int numero, posicion;
    unsigned char byte;

    // Prueba de la función ponerEnUnoBit
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);
    printf("Ingrese la posición del bit que desea poner en 1 (0-31): ");
    scanf("%d", &posicion);
    numero = ponerEnUnoBit(numero, posicion);
    printf("El nuevo número con el bit en la posición %d puesto en 1 es: %d\n", posicion, numero);

    // Prueba de la función ponerEnCeroBit
    printf("Ingrese la posición del bit que desea poner en 0 (0-31): ");
    scanf("%d", &posicion);
    numero = ponerEnCeroBit(numero, posicion);
    printf("El nuevo número con el bit en la posición %d puesto en 0 es: %d\n", posicion, numero);

    // Prueba de la función mostrarEstadoBits
    printf("Ingrese un valor entre 0 y 255 (un byte): ");
    scanf("%hhu", &byte);
    printf("El estado de los 8 bits del byte es: ");
    mostrarEstadoBits(byte);

    return 0;
}
