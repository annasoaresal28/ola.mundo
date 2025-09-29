#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta
typedef struct {
    char estado[3];               // Ex: "SP"
    char codigo[4];               // Ex: "A01"
    char cidade[50];              // Nome da cidade
    int populacao;                // População
    float area;                   // Área em km²
    float pib;                    // PIB em bilhões
    int pontosTuristicos;         // Número de pontos turísticos
    float densidadePopulacional;  // População / Área
    float pibPerCapita;           // PIB / População
} Carta;

int main() {
    // Cadastro da primeira carta
    Carta carta1;
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.cidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 699.28; // em bilhões
    carta1.pontosTuristicos = 50;
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib * 1000000000 / carta1.populacao; // PIB convertido para mesma unidade da população

    // Cadastro da segunda carta
    Carta carta2;
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "A02");
    strcpy(carta2.cidade, "Rio de Janeiro");
    carta2.populacao = 6710000;
    carta2.area = 1182.30;
    carta2.pib = 357.02; // em bilhões
    carta2.pontosTuristicos = 40;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib * 1000000000 / carta2.populacao;

    // ===========================================
    // Escolha do atributo para comparação:
    // Troque para "populacao", "area", "pib", 
    // "densidadePopulacional" ou "pibPerCapita"
    // ===========================================
    printf("Comparacao de cartas (Atributo: Populacao):\n\n");

    printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, carta2.populacao);

    // Comparação pelo atributo escolhido
    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
