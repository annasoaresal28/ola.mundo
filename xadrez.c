#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i; // variável auxiliar para laços de repetição

    // -------------------------------
    // Movimento da Torre (for)
    // -------------------------------
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Movimento do Bispo (while)
    // -------------------------------
    printf("\nMovimento do Bispo:\n");
    i = 1; // reinicia contador
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // -------------------------------
    // Movimento da Rainha (do-while)
    // -------------------------------
    printf("\nMovimento da Rainha:\n");
    i = 1; // reinicia contador
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0;
}
