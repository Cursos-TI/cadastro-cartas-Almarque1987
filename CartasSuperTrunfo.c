#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Dados da primeira cidade
    char estado1[50];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1; // em km²
    float pib1;
    int pontosTuristicos1;

  // Dados da Segunda cidade
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2; // em km²
    float pib2;
    int pontosTuristicos2;

  // Área para entrada de dados Estado1
    printf("Digite o nome do estado1: ");
    scanf("%49s", estado1);
    printf("Digite o código do estado1: ");
    scanf("%9s", codigo1);
    printf("Digite o nome da cidade1: ");
    scanf("%49s", cidade1);
    printf("Digite a população da cidade1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo direto das variáveis derivadas
    float densidade1 = populacao1 / area1; // População por km²
    float pibPerCapita1 = pib1 / populacao1; // PIB per capita

  // Área para entrada de dados Estado2
    printf("Digite o nome do estado2: ");
    scanf("%49s", estado2);
    printf("Digite o código do estado2: ");
    scanf("%9s", codigo2);
    printf("Digite o nome da cidade2: ");
    scanf("%49s", cidade2);
    printf("Digite a população da cidade2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade2: ");
    scanf("%d", &pontosTuristicos2);

  // Cálculo direto das variáveis derivadas da cidade2
    float densidade2 = populacao2/ area2; // População por km²
    float pibPerCapita2 = pib2 / populacao2; // PIB per capita

  // Área para exibição dos dados da cidade1
    printf("\nDados da Cidade1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("A densidade populacional da cidade1 é: %.2f habitantes por km²\n", densidade1);
    printf("O PIB per capita da cidade1 é: %.2f\n", pibPerCapita1);

  // Área para exibição dos dados da cidade2
    printf("\nDados da Cidade2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("A densidade populacional da cidade2 é: %.2f habitantes por km²\n", densidade2);
    printf("O PIB per capita da cidade2 é: %.2f\n", pibPerCapita2);

return 0;
} 
