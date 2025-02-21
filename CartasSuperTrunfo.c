#include <stdio.h>

int main () {
    char Estado1[20], Estado2[20];
    char Cidade1[20], Cidade2[20];
    char Carta1[20], Carta2[20];
    int populacao1, populacao2;
    float area1, area2;
    double PIB1, PIB2;
    int pontos1, pontos2;
    int DensidadePopulacional1, DensidadePopulacional2;     
    int PIBperCapita1, PIBperCapita2;
    int SuperPoder1, SuperPoder2;

    printf("Digite o nome do 1° Estado:");
    scanf("%s", Estado1); 

    printf("Digite o nome da 1° Cidade:");
    scanf("%s", Cidade1);        

    printf("Digite o Codigo da 1° Carta:");
    scanf("%s", Carta1);                 

    printf("Digite a quantidade de habitantes:");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da cidade:");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade:");
    scanf("%lf", &PIB1);

    printf("Digite a quantidade de pontos turisticos:");
    scanf("%d", &pontos1);

    DensidadePopulacional1 = (int) populacao1 / area1;
    PIBperCapita1 = (int) PIB1 / populacao1;
    SuperPoder1 = (int) populacao1 + area1 + PIB1 + pontos1;

    printf("Digite o nome do 2° Estado:");
    scanf("%s", Estado2); 

    printf("Digite o nome da 2° Cidade:");
    scanf("%s", Cidade2);        

    printf("Digite o Codigo da 2° Carta:");
    scanf("%s", Carta2);                 

    printf("Digite a quantidade de habitantes:");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da cidade:");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade:");
    scanf("%lf", &PIB2);

    printf("Digite a quantidade de pontos turisticos:");
    scanf("%d", &pontos2);

    DensidadePopulacional2 = (int) populacao2 / area2;
    PIBperCapita2 = (int) PIB2 / populacao2;
    SuperPoder2 = (int) populacao2 + area2 + PIB2 + pontos2;

    printf("****************\n"); 
    printf("Dados do 1° Estado\n");    
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("Codigo da Carta: %s\n", Carta1);
    printf("Habitantes: %d\n", populacao1);
    printf("Tamanho da Cidade: %.2f\n", area1);
    printf("PIB: %.2lf\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %d habitantes por km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %d reais\n", PIBperCapita1);
    printf("Super Poder: %d\n", SuperPoder1);

    printf("****************\n");
    printf("Dados do 2° Estado\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Codigo da Carta: %s\n", Carta2);
    printf("Habitantes: %d\n", populacao2);
    printf("Tamanho da Cidade: %.2f\n", area2);
    printf("PIB: %.2lf\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %d habitantes por km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %d reais\n", PIBperCapita2);
    printf("Super Poder: %d\n", SuperPoder2);

    printf("Quem tem o maior Super Poder\n");
    printf("SuperPoder1 > SuperPoder2: %d\n", SuperPoder1 > SuperPoder2);
    printf("SuperPoder1 < SuperPoder2: %d\n", SuperPoder1 < SuperPoder2);
    printf("SuperPoder1 == SuperPoder2: %d\n", SuperPoder1 == SuperPoder2);
    printf("SuperPoder1 != SuperPoder2: %d\n", SuperPoder1 != SuperPoder2);

    return 0;
}