// funcion.c

#include "funciones.h"

// Función que pone en uno un bit dado de un entero
int ponerEnUnoBit(int numero, int posicion) {
    return numero | (1 << posicion);
}

// Función que pone en cero un bit dado de un entero
int ponerEnCeroBit(int numero, int posicion) {
    return numero & ~(1 << posicion);
}

// Función que muestra el estado de los 8 bits de un byte
void mostrarEstadoBits(unsigned char byte) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (byte >> i) & 1);
    }
    printf("\n");
}
