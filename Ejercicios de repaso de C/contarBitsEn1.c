#include <stdio.h>

// Función que cuenta la cantidad de bits en 1
int contarBitsEn1(int numero) {
    int count = 0;
    
    while (numero) {
        count += numero & 1; // Suma 1 si el bit menos significativo es 1
        numero >>= 1;        // Desplaza los bits a la derecha
    }
    
    return count;
}


// Función que convierte un número decimal a binario
void decimalABinario(int numero) {
    int binario[32];  // Array para almacenar los dígitos binarios (máximo 32 bits para un entero)
    int i = 0;

    if (numero == 0) {
        printf("0");
        return;
    }

    // Proceso de conversión de decimal a binario
    while (numero > 0) {
        binario[i] = numero % 2;  // Almacena el bit menos significativo
        numero /= 2;              // Divide el número por 2
        i++;
    }

    // Imprime los dígitos binarios en orden inverso
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
}

int main() {
    int numero;
    
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);
    decimalABinario(numero);
    printf("\n");
    int cantidadBitsEn1 = contarBitsEn1(numero);
    
    printf("El número %d tiene %d bits en 1.\n", numero, cantidadBitsEn1);
    
    return 0;
}
