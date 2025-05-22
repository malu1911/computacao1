#include <stdio.h>
#include <math.h>

int calcula_raizes(float a, float b, float c, float *x1, float *x2) {
    float delta = b*b - 4*a*c;

    if (delta < 0)
        return 0; // nenhuma raiz real
    else if (delta == 0) {
        *x1 = -b / (2*a);
        return 1; // uma raiz real
    } else {
        *x1 = (-b + sqrt(delta)) / (2*a);
        *x2 = (-b - sqrt(delta)) / (2*a);
        return 2; // duas raízes reais
    }
}

int main() {
    float a = 1, b = -3, c = 2;
    float x1, x2;
    int resultado = calcula_raizes(a, b, c, &x1, &x2);

    if (resultado == 0)
        printf("Nenhuma raiz real.\n");
    else if (resultado == 1)
        printf("Uma raiz real: x = %.2f\n", x1);
    else
        printf("Duas raizes reais: x1 = %.2f, x2 = %.2f\n", x1, x2);

    return 0;
}
