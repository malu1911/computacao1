#include <stdio.h>
#include <string.h>

#define TAM_NOME 100
#define QTD_NOMES 3

int main() {
    char nomes[QTD_NOMES][TAM_NOME];
    char nome_digitado[TAM_NOME];
    int i, encontrado = 0;

    // Leitura dos três nomes
    printf("Digite tres nomes:\n");
    for (i = 0; i < QTD_NOMES; i++) {
        fgets(nomes[i], TAM_NOME, stdin);
        // Remover o '\n' que fgets pode deixar
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    // Loop de leitura até encontrar um nome correspondente
    while (1) {
        printf("\nDigite um nome: ");
        fgets(nome_digitado, TAM_NOME, stdin);
        nome_digitado[strcspn(nome_digitado, "\n")] = '\0';  // Remover '\n'

        encontrado = 0;
        for (i = 0; i < QTD_NOMES; i++) {
            if (strcmp(nome_digitado, nomes[i]) == 0) {
                encontrado = 1;
                break;
            }
        }

        if (encontrado) {
            printf("\nEste nome esta entre os tres nomes.\n");
            break;
        } else {
            printf("\nEste nome nao esta entre os tres nomes.\n");
        }
    }

    printf("\nFim do programa.\n");
    return 0;
}
