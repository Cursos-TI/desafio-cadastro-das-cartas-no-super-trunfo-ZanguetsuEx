#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int população;
    float area;
    double PIB;
    char opcao;
    char nome[20];

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Digite o código da cidade: \n");
    scanf("%s\n", &nome);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d\n", &população);

    printf("Digite o tamanho da cidade: \n");
    scanf("%f\n", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f\n", &PIB);

    return 0;