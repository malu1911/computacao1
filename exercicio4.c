#include <stdio.h>

void removeExtremos(int *n, int *pri, int *ult) {
    int num = *n;
    *ult = num % 10;

    while (num >= 10) {
        num /= 10;
    }

    *pri = num;
}

int main() {
    int numero = 12345;
    int primeiro, ultimo;

    removeExtremos(&numero, &primeiro, &ultimo);
    printf("Numero: %d\n", numero);
    printf("Primeiro digito: %d\n", primeiro);
    printf("Ultimo digito: %d\n", ultimo);

    return 0;
}
