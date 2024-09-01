#include <stdio.h>

// Función callback para manejar el evento numeroEncontrado
void numeroEncontrado(int numero, int posicion) {
    printf("Número %d encontrado en la posición %d del vector.\n", numero, posicion);
}

// Función para buscar un número en un vector
void buscarNumero(int vector[], int tamano, int numero, void (*callback)(int, int)) {
    for (int i = 0; i < tamano; i++) {
        if (vector[i] == numero) {
            // Llama a la función callback si el número es encontrado
            callback(numero, i);
            return;
        }
    }
    printf("Número %d no encontrado en el vector.\n", numero);
}

int main() {
    int vector[] = {10, 20, 30, 40, 50};
    int tamano = sizeof(vector) / sizeof(vector[0]);
    int numero;

    printf("Ingrese un número para buscar en el vector: ");
    scanf("%d", &numero);

    // Llama a la función buscarNumero y pasa la función callback numeroEncontrado
    buscarNumero(vector, tamano, numero, numeroEncontrado);

    return 0;
}

