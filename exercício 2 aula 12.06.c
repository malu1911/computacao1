#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 50

// Função para verificar se o caractere é uma vogal
int eh_vogal(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Função para verificar se o caractere é uma consoante
int eh_consoante(char c) {
    c = tolower(c);
    return (isalpha(c) && !eh_vogal(c));
}

// Função para inverter uma string
void inverter_string(char str[]) {
    int i, j;
    char temp;
    int len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char matriz[3][3][TAM];
    char matriz_modificada[3][3][TAM];

    // Preenchimento da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite a string da posicao [%d][%d]: ", i, j);
            scanf("%49s", matriz[i][j]);
            strcpy(matriz_modificada[i][j], matriz[i][j]); // Copiar para a matriz modificada
        }
    }

    // Modificação das strings conforme regras
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int len = strlen(matriz_modificada[i][j]);
            if (len > 0 && eh_vogal(matriz_modificada[i][j][0]) && eh_consoante(matriz_modificada[i][j][len - 1])) {
                inverter_string(matriz_modificada[i][j]);
            }
        }
    }

    // Exibição das matrizes
    printf("\nMatriz Original:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%s ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Modificada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%s ", matriz_modificada[i][j]);
        }
        printf("\n");
    }

    return 0;
}

