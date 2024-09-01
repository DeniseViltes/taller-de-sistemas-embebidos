#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    // Pedimos al usuario que ingrese los lados del triángulo
    printf("Ingrese el primer lado del triángulo: ");
    scanf("%d", &lado1);

    printf("Ingrese el segundo lado del triángulo: ");
    scanf("%d", &lado2);

    printf("Ingrese el tercer lado del triángulo: ");
    scanf("%d", &lado3);

    // Verificamos si los tres lados forman un triángulo válido
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        // Determinamos el tipo de triángulo
        if (lado1 == lado2 && lado2 == lado3) {
            printf("El triángulo es Equilátero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("El triángulo es Isósceles.\n");
        } else {
            printf("El triángulo es Escaleno.\n");
        }
    } else {
        printf("Los lados ingresados no forman un triángulo válido.\n");
    }

    return 0;
}
