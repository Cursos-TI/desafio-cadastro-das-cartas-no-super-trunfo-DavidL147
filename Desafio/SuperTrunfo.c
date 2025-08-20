#include <stdio.h>

int main (){
    //Cartas 1
    char Estado1;
    char Codigo1[4];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float Pib1;
    int Pontos1;

    printf ("Carta 1 \n");

    printf("Estado (Uma letra de 'A a H'):");
    scanf(" %c", &Estado1);

    printf("Código da Carta (ex:A01):");
    scanf(" %s", Codigo1);

    printf("Nome da Cidade:");
    scanf(" %[^\n]", Cidade1);

    printf("População:");
    scanf(" %d", &Populacao1);

    printf("Área (em km²):");
    scanf(" %f", &Area1);

    printf("PIB:");
    scanf(" %f", &Pib1);

    printf("Número de Pontos Turisticos");
    scanf(" %d", &Pontos1);

    //Saídas

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", Pib1);
    printf("Pontos Turísticos: %d\n", Pontos1);

    return 0;
    
}