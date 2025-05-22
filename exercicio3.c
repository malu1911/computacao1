#include <stdio.h>

void converteHora(int total_segundos, int *hora, int *min, int *seg) {
    *hora = total_segundos / 3600;
    total_segundos %= 3600;
    *min = total_segundos / 60;
    *seg = total_segundos % 60;
}

int main() {
    int total_segundos = 3665;  // Exemplo: 1 hora, 1 minuto e 5 segundos
    int h, m, s;

    converteHora(total_segundos, &h, &m, &s);
    printf("HH:MM:SS = %02d:%02d:%02d\n", h, m, s);

    return 0;
}
