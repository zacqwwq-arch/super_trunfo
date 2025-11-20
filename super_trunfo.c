#include <stdio.h>

/*
 * super_trunfo.c
 * Nível Novato - Cadastro de duas cartas do Super Trunfo (tema: Países)
 *
 * Regras do desafio:
 * - Ler duas cartas (cada carta com estado, código, nome, população, área, PIB e pontos turísticos)
 * - Exibir os dados lidos de forma legível
 * - Não usar estruturas de repetição nem estruturas de decisão
 *
 * Autor: yago nardin
 */

int main(void) {
    /* ----------- Variáveis - Carta 1 ----------- */
    char estado1;            // 'A' a 'H'
    char codigo1[4];         // ex: "A01" (3 chars + null)
    char nomeCidade1[100];   // nome da cidade (com espaços)
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    /* ----------- Variáveis - Carta 2 ----------- */
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    /* ------------- Entrada - Carta 1 ------------- */
    printf("Cadastro da Carta 1:\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);            // espaço antes do %c para consumir newline

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);             // limita a 3 chars

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);    // lê linha inteira até '\n'

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km2: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* ------------- Entrada - Carta 2 ------------- */
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* ------------- Exibição dos dados ------------- */
    printf("\n====================================\n");
    printf("               CARTA 1\n");
    printf("====================================\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n====================================\n");
    printf("               CARTA 2\n");
    printf("====================================\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
