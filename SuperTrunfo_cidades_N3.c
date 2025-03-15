#include <stdio.h>

// Super Trunfo Cidades Nivel Iniciante
// Estrutura para armazenar variáveis das cidades

int main() {
    char estado1[30], estado2[30]; // Letra de A a H
    char codigocarta1[4], codigocarta2[4]; // Estado + número de 1 a 04
    char nome1[50], nome2[50]; // Nome da cidade
    int populacao1, populacao2; // População
    float area1, area2; // Área em Km
    float pib1, pib2; // PIB
    int pontosturisticos1, pontosturisticos2; // Quantidade de pontos turísticos
    float densidadepopulacional1, densidadepopulacional2; // Densidade populacional
    float pibpercapita1, pibpercapita2; // PIB per capita

    // Estrutura de coleta de dados para a primeira carta
    printf("Digite o código da carta 1: ");
    scanf("%3s", codigocarta1);

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cálculo da densidade populacional da carta 1
    densidadepopulacional1 = populacao1 / area1;
    // Cálculo do PIB per capita da carta 1
    pibpercapita1 = pib1 / populacao1;

    // Exibir a carta 1
    printf("\n\nSUPER TRUNFO CIDADES\n");
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área em Km: %.2f\n", area1);
    printf("O PIB é: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("PIB per capita: %.2f\n", pibpercapita1);

    // Estrutura de coleta de dados para a segunda carta
    printf("\nDigite o código da carta 2: ");
    scanf("%3s", codigocarta2);

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculo da densidade populacional da carta 2
    densidadepopulacional2 = populacao2 / area2;
    // Cálculo do PIB per capita da carta 2
    pibpercapita2 = pib2 / populacao2;

    // Exibir a carta 2
    printf("\n\nSUPER TRUNFO CIDADES\n");
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área em Km: %.2f\n", area2);
    printf("O PIB é: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    // Função para comparar os atributos das cartas com switch case com os atributos escolhidos pelo jogador
    int atributo;
    printf("\n\nEscolha o atributo para a comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    scanf("%d", &atributo); // Atributo escolhido pelo jogador

    switch (atributo) {
        case 1:
            if (populacao1 > populacao2) {
                printf("O jogador 1 venceu!\n");
            } else if (populacao1 < populacao2) {
                printf("O jogador 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("O jogador 1 venceu!\n");
            } else if (area1 < area2) {
                printf("O jogador 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("O jogador 1 venceu!\n");
            } else if (pib1 < pib2) {
                printf("O jogador 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            if (pontosturisticos1 > pontosturisticos2) {
                printf("O jogador 1 venceu!\n");
            } else if (pontosturisticos1 < pontosturisticos2) {
                printf("O jogador 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            if (densidadepopulacional1 > densidadepopulacional2) {
                printf("O jogador 1 venceu!\n");
            } else if (densidadepopulacional1 < densidadepopulacional2) {
                printf("O jogador 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 6:
            if (pibpercapita1 > pibpercapita2) {
                printf("O jogador 1 venceu!\n");
            } else if (pibpercapita1 < pibpercapita2) {
                printf("O jogador 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Atributo inválido!\n");
    }

    return 0;
}