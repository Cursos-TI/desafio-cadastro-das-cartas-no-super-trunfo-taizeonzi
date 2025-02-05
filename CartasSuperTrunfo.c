#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

    char estado;
    char codigoCarta[3];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

int main() {
    //jogo 
    printf("------------Super Trunfo------------\n");
    printf("Vamos começar! Cadastre sua carta\n");

    printf("Digite o Estado (A-H):"); //entrada de dados pelo usuário
    scanf("%c"); // captura do que foi informado
    printf("\nDigite o código da carta:"); //entrada de dados pelo usuário
    scanf("%s"); // captura do que foi informado

    printf("\nDigite o nome da cidade:"); //entrada de dados pelo usuário
    scanf("%s"); // captura do que foi informado

    printf("\nDigite a população:"); //entrada de dados pelo usuário
    scanf("%d"); // captura do que foi informado

    printf("\nDigite a área (km²):"); //entrada de dados pelo usuário
    scanf("%f"); // captura do que foi informado

    printf("\nDigite o PIB:"); //entrada de dados pelo usuário
    scanf("%f"); // captura do que foi informado

    printf("\nDigite o número de pontos turísticos:"); //entrada de dados pelo usuário
    scanf("%i");  // captura do que foi informado
    
    printf("* Carta cadastrada com sucesso! *\n"); //confirmação após carta ser cadastrada com sucesso
    
    printf("Esta é a carta:\n"); //Exibição dos Dados das Cartas
    printf("Estado: %c\n", &estado);
    printf("Código da Carta: %s\n", &codigoCarta);
    printf("Nome da Cidade: %s\n", &nomeCidade);
    printf("População: %d\n", &populacao);
    printf("Área: %f\n", &area, "km²");
    printf("PIB: %f\n", &pib);
    printf("Número de Pontos Turísticos: %i\n", &pontosTuristicos);

    return 0;
}
