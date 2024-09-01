#include <stdio.h>

// Función recursiva para calcular el número combinatorio C(n, k)
int combinatorio(int n, int k) {
    // Casos base
    if (k == 0 || k == n) {
        return 1;
    }
    // Llamada recursiva
    return combinatorio(n - 1, k - 1) + combinatorio(n - 1, k);
}

int main() {
    int n, k;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    printf("Ingrese el valor de k: ");
    scanf("%d", &k);

    if (k < 0 || k > n) {
        printf("El valor de k debe estar entre 0 y n.\n");
        return 1;
    }

    int resultado = combinatorio(n, k);

    printf("El número combinatorio C(%d, %d) es: %d\n", n, k, resultado);

    return 0;
}
