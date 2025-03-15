#include <stdio.h>

//Super Trunfo Cidades Nivel Iniciante
// Estrutura de armazenagem de informações das cidades

int main() {
    char estado1[30], estado2[30]; // Letra de A a H
    char codigocarta1[4], codigocarta2[4]; //  Estado + numero de 1 a 04
    char nome1[50], nome2[50]; // Nome da cidade
    int populacao1, populacao2; // População
    float area1, area2; // Área em Km
    float pib1, pib2; // PIB
    int pontosturisticos1, pontosturisticos2; // Quantidade de pontos turísticos

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

    // Exibir a carta 1
    printf("\n\nSUPER TRUNFO CIDADES\n");
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área em Km: %.2f\n", area1);
    printf("O PIB é: %.2f\n", pib1);
    printf("Numero de Pontos Turísticos: %d\n", pontosturisticos1);

    // Estrutura de coleta de dados para a segunda carta
    
    printf("\nDigite o código da ciarta 2: ");
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

    // Exibir a carta 2
    printf("\n\nSUPER TRUNFO CIDADES\n");
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área em Km: %.2f\n", area2);
    printf("O PIB é: %.2f\n", pib2);
    printf("Numero de Pontos Turísticos: %d\n", pontosturisticos2);


    return 0;
}