#include <stdio.h>

int main(void) {
    // Variáveis para o Cavalo
    int casasBaixo = 2;
    int casasEsquerda = 1;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    int i;
    for (i = 0; i < 3; i++) {
        printf("Direita\n");
    }
    for (i = 0; i < 3; i++) {
        printf("Baixo\n");
    }

    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    int k = 0;
    while (k < 3) {
        printf("Baixo\n");
        printf("Direita\n");
        k++;
    }

    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    int l = 0;
    do {
        printf("Direita\n");
        l++;
    } while (l < 2);

    for (int m = 0; m < 2; m++) {
        printf("Baixo\n");
    }

    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    for (i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }

    int j = 0;
    while (j < casasEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
