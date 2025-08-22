#include <stdio.h>   // biblioteca para entrada e saída de dados

int main() {

    // variáveis para a carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // variáveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    // Estava com problema de quebra de linha apos a area1, então adicionei o codigo while para limpar o buffer
    while (getchar() != '\n');

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    // Utilizei %[^\n]s para ler cidades como Rio de Janeiro 

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);
    while (getchar() != '\n');

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area1);
    while (getchar() != '\n');

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    while (getchar() != '\n');

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    while (getchar() != '\n');
    // continuei adicionando a limpeza de buffer apos ler float e int para evitar problemas

    // Leitura dos dados da carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    while (getchar() != '\n');

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);
    while (getchar() != '\n');

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);
    while (getchar() != '\n');

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    while (getchar() != '\n');

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    while (getchar() != '\n');

    // Informações da carta 1
    printf("\n Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Informações da carta 2
    printf("\n Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0; 

}
