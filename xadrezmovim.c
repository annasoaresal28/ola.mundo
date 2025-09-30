#include <stdio.h>

// ------------------------------
// Funções Recursivas
// ------------------------------

// Movimento da Torre (horizontal e vertical)
void moverTorre(int casasDireita, int casasBaixo) {
    if (casasDireita > 0) {
        printf("Direita\n");
        moverTorre(casasDireita - 1, casasBaixo);
    } else if (casasBaixo > 0) {
        printf("Baixo\n");
        moverTorre(0, casasBaixo - 1);
    }
}

// Movimento da Rainha (horizontal e vertical)
void moverRainha(int casasDireita, int casasBaixo) {
    if (casasDireita > 0) {
        printf("Direita\n");
        moverRainha(casasDireita - 1, casasBaixo);
    } else if (casasBaixo > 0) {
        printf("Baixo\n");
        moverRainha(0, casasBaixo - 1);
    }
}

// Movimento do Bispo (recursivo e loops aninhados)
// Vertical: for externo, Horizontal: for interno
void moverBispo(int casasVertical, int casasHorizontal) {
    if (casasVertical > 0) {
        for (int i = 0; i < casasHorizontal; i++) {
            printf("Direita\n");
        }
        printf("Baixo\n");
        moverBispo(casasVertical - 1, casasHorizontal);
    }
}

// ------------------------------
// Movimento do Cavalo com loops complexos
// Cavalo move em "L": duas casas para cima e uma para a direita
// ------------------------------
void moverCavalo() {
    int casasCima = 2;
    int casasDireita = 1;
    int i = 0, j = 0;

    while (1) {
        // Loop vertical
        if (i < casasCima) {
            printf("Cima\n");
            i++;
            continue; // volta para checar i < casasCima
        }

        // Loop horizontal
        if (j < casasDireita) {
            printf("Direita\n");
            j++;
            continue; // volta para checar j < casasDireita
        }

        break; // sai quando movimento completo
    }
}

// ------------------------------
// Função main
// ------------------------------
int main(void) {
    // Valores definidos para as peças
    int torreDireita = 3, torreBaixo = 3;
    int rainhaDireita = 2, rainhaBaixo = 2;
    int bispoVertical = 3, bispoHorizontal = 1;

    // ------------------------------
    printf("Movimento da Torre:\n");
    moverTorre(torreDireita, torreBaixo);
    printf("\n");

    // ------------------------------
    printf("Movimento do Bispo:\n");
    moverBispo(bispoVertical, bispoHorizontal);
    printf("\n");

    // ------------------------------
    printf("Movimento da Rainha:\n");
    moverRainha(rainhaDireita, rainhaBaixo);
    printf("\n");

    // ------------------------------
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
