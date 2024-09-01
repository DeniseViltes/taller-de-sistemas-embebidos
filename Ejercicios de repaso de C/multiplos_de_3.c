#include <stdio.h>

int main() {
    int i;

    printf("Los primeros 10 múltiplos de 3 son:\n");

    for (i = 1; i <= 10; i++) {
        printf("%d\n", 3 * i);
    }

    return 0;
}

