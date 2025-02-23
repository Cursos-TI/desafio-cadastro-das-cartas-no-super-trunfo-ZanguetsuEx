#include <stdio.h>

int main() {
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
    int opcao1, opcao2;

    do {
        printf("Escolha uma opção:\n");
        printf("1. Iniciar o jogo\n");
        printf("2. Regras\n");
        printf("3. Sair\n");
        scanf("%d", &opcao1);

        switch (opcao1) {
            case 1:
                printf("Iniciando o jogo...\n");
                // Código para iniciar o jogo

                printf("********************************\n");
                printf("Digite o nome do 1° Estado: ");
                scanf("%19s", Estado1);
                printf("Digite o nome da 1° Cidade: ");
                scanf("%19s", Cidade1);
                printf("Digite o Código da 1° Carta: ");
                scanf("%19s", Carta1);
                printf("Digite a quantidade de habitantes: ");
                scanf("%d", &populacao1);
                printf("Digite o tamanho da cidade: ");
                scanf("%f", &area1);
                printf("Digite o PIB da Cidade: ");
                scanf("%lf", &PIB1);
                printf("Digite a quantidade de pontos turísticos: ");
                scanf("%d", &pontos1);

                DensidadePopulacional1 = (int)populacao1 / area1;
                PIBperCapita1 = (int)PIB1 / populacao1;
                SuperPoder1 = (int)populacao1 + area1 + PIB1 + pontos1;

                printf("********************************\n");
                printf("Digite o nome do 2° Estado: ");
                scanf("%19s", Estado2);
                printf("Digite o nome da 2° Cidade: ");
                scanf("%19s", Cidade2);
                printf("Digite o Código da 2° Carta: ");
                scanf("%19s", Carta2);
                printf("Digite a quantidade de habitantes: ");
                scanf("%d", &populacao2);
                printf("Digite o tamanho da cidade: ");
                scanf("%f", &area2);
                printf("Digite o PIB da Cidade: ");
                scanf("%lf", &PIB2);
                printf("Digite a quantidade de pontos turísticos: ");
                scanf("%d", &pontos2);

                DensidadePopulacional2 = (int)populacao2 / area2;
                PIBperCapita2 = (int)PIB2 / populacao2;
                SuperPoder2 = (int)populacao2 + area2 + PIB2 + pontos2;

                printf("********************************\n");
                printf("Estado: %s\n", Estado1);
                printf("Cidade: %s\n", Cidade1);
                printf("Código da Carta: %s\n", Carta1);
                printf("Habitantes: %d\n", populacao1);
                printf("Tamanho da Cidade: %.1f km²\n", area1);
                printf("PIB: %.1lf Milhões\n", PIB1);
                printf("Pontos Turísticos: %d\n", pontos1);
                printf("Densidade Populacional: %d habitantes por km²\n", DensidadePopulacional1);
                printf("PIB per Capita: %d reais\n", PIBperCapita1);
                printf("Super Poder: %d\n", SuperPoder1);

                printf("********************************\n");
                printf("Estado: %s\n", Estado2);
                printf("Cidade: %s\n", Cidade2);
                printf("Código da Carta: %s\n", Carta2);
                printf("Habitantes: %d\n", populacao2);
                printf("Tamanho da Cidade: %.1f km²\n", area2);
                printf("PIB: %.1lf Milhões\n", PIB2);
                printf("Pontos Turísticos: %d\n", pontos2);
                printf("Densidade Populacional: %d habitantes por km²\n", DensidadePopulacional2);
                printf("PIB per Capita: %d reais\n", PIBperCapita2);
                printf("Super Poder: %d\n", SuperPoder2);

                do {
                    printf("Escolha qual atributo das cartas será avaliado:\n");
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Pontos Turísticos\n");
                    printf("5. Densidade Demográfica\n");
                    scanf("%d", &opcao2);

                    switch (opcao2) {
                        case 1:
                            printf("********************************\n");
                            printf("Quem tem a maior população?\n");
                            printf("População: %s : %d \n", Cidade1, populacao1);
                            printf("População: %s : %d \n", Cidade2, populacao2);
                            if (populacao1 > populacao2)
                                printf("Resultado: %s venceu!\n", Cidade1);
                            else if (populacao1 < populacao2)
                                printf("Resultado: %s venceu!\n", Cidade2);
                            else
                                printf("Empate!\n");
                            break;
                        case 2:
                            printf("********************************\n");
                            printf("Quem tem a maior Área?\n");
                            printf("Área: %s : %f \n", Cidade1, area1);
                            printf("Área: %s : %f \n", Cidade2, area2);
                            if (area1 > area2)
                                printf("Resultado: %s venceu!\n", Cidade1);
                            else if (area1 < area2)
                                printf("Resultado: %s venceu!\n", Cidade2);
                            else
                                printf("Empate!\n");
                            break;
                        case 3:
                            printf("********************************\n");
                            printf("Quem tem o maior PIB?\n");
                            printf("PIB: %s : %lf \n", Cidade1, PIB1);
                            printf("PIB: %s : %lf \n", Cidade2, PIB2);
                            if (PIB1 > PIB2)
                                printf("Resultado: %s venceu!\n", Cidade1);
                            else if (PIB1 < PIB2)
                                printf("Resultado: %s venceu!\n", Cidade2);
                            else
                                printf("Empate!\n");
                            break;
                        case 4:
                            printf("********************************\n");
                            printf("Quem tem mais Pontos Turisticos?\n");
                            printf("Pontos Turisticos: %s : %d \n", Cidade1, pontos1);
                            printf("Pontos Turisticos: %s : %d \n", Cidade2, pontos2);
                            if (pontos1 > pontos2)
                                printf("Resultado: %s venceu!\n", Cidade1);
                            else if (pontos1 < pontos2)
                                printf("Resultado: %s venceu!\n", Cidade2);
                            else if (pontos1 == pontos2)
                                printf("Empate!\n");
                            // Comparação entre a quantidade de pontos turisticos da 1° Carta e 2° Carta//
                            break;
                        case 5:
                            printf("********************************\n");
                            printf("Quem tem a maior Densidade Demografica?\n");
                            printf("Densidade Demografica: %s : %d \n", Cidade1, DensidadePopulacional1);
                            printf("Densidade Demografica: %s : %d \n", Cidade2, DensidadePopulacional2);
                            if (DensidadePopulacional1 > DensidadePopulacional2)
                                printf("Resultado: %s venceu!\n", Cidade1);
                            else if (DensidadePopulacional1 < DensidadePopulacional2)
                                printf("Resultado: %s venceu!\n", Cidade2);
                            else if (DensidadePopulacional1 == DensidadePopulacional2)
                                printf("Empate!\n");
                            // Comparação entre a Densidade Demografica da 1° Carta e 2° Carta//
                            break;
                        default:
                            printf("Opção Inválida. Tente novamente!\n");
                    }
                }  while (opcao2 < 1 || opcao2 >5);
                break;
            case 2:
                printf("Regras do jogo:\n");
                printf("1° - Informe os dados solicitados de cada carta do jogo!\n");
                printf("2° - Escolha qual atributo das cartas serão avaliadas!\n");
                printf("3° - Vence a carta com maior atributo!\n");
                printf("4° - Em caso de empate, pontos para as duas cartas!\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção Inválida. Tente novamente!\n");
      }          
}while (opcao1 != 3);

    return 0;
}