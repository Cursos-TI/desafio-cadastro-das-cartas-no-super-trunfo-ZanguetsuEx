#include <stdio.h>

int main () {
    char Estado [20];
    char Cidade[20];
    char Carta [20];
    int populacao;
    float area;
    double PIB;
    int pontos;
    float resultado;     

    printf("Digite o nome do Estado:");
    scanf("%s", Estado); 

    printf("Digite o nome da Cidade:");
    scanf("%s", Cidade);        

    printf("Digite o Codigo da Carta:");
    scanf("%s", Carta);                 

    printf("Digite a quantidade de habitantes:");
    scanf("%d", &populacao);

    printf("Digite o tamanho da cidade:");
    scanf("%f", &area);

    printf("Digite o PIB da Cidade:");
    scanf("%lf", &PIB);

    printf("Digite a quantidade de pontos turisticos:");
    scanf("%d", &pontos);

    resultado = (float) populacao / area;
    resultado = (float) PIB / populacao;

    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Codigo da Carta: %s\n", Carta);
    printf("Habitantes: %d\n", populacao);
    printf("Tamanho da Cidade: %f\n", area);
    printf("PIB: %lf\n", PIB);
    printf("Pontos Turisticos: %d\n", pontos);
    printf("Densidade Populacional: %.1f habitantes por km²\n", resultado);
    printf("PIB per Capita: %.1f", resultado);

}