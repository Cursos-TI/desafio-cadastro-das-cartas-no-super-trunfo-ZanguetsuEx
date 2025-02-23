#include <stdio.h>

int main() {
    char Estado1[20], Estado2[20];
    char Cidade1[20], Cidade2[20];
    char Carta1[20], Carta2[20];
    int populacao1, populacao2;
    float area1, area2;
    double PIB1, PIB2;
    int pontos1, pontos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    double PIBperCapita1, PIBperCapita2;
    double SuperPoder1, SuperPoder2;
    int opcao1, opcao2_1, opcao2_2;
    double TotalAtributos1, TotalAtributos2;

    do {
        // Exibição do Menu 
        printf("Escolha uma opção:\n");
        printf("1. Iniciar o jogo\n");
        printf("2. Regras\n");
        printf("3. Sair\n");
        scanf("%d", &opcao1);

        switch (opcao1) {
            case 1:
                printf("Iniciando o jogo...\n");

                printf("********************************\n");
                printf("Digite o nome do 1° Estado: ");
                scanf("%s", Estado1);
                printf("Digite o nome da 1° Cidade: ");
                scanf("%s", Cidade1);
                printf("Digite o Código da 1° Carta: ");
                scanf("%s", Carta1);
                printf("Digite a quantidade de habitantes: ");
                scanf("%d", &populacao1);
                printf("Digite o tamanho da cidade: ");
                scanf("%f", &area1);
                printf("Digite o PIB da Cidade: ");
                scanf("%lf", &PIB1);
                printf("Digite a quantidade de pontos turísticos: ");
                scanf("%d", &pontos1);

                DensidadePopulacional1 = (float)populacao1 / area1;
                PIBperCapita1 = PIB1 / populacao1;
                SuperPoder1 = populacao1 + area1 + PIB1 + pontos1;

                printf("********************************\n");
                printf("Digite o nome do 2° Estado: ");
                scanf("%s", Estado2);
                printf("Digite o nome da 2° Cidade: ");
                scanf("%s", Cidade2);
                printf("Digite o Código da 2° Carta: ");
                scanf("%s", Carta2);
                printf("Digite a quantidade de habitantes: ");
                scanf("%d", &populacao2);
                printf("Digite o tamanho da cidade: ");
                scanf("%f", &area2);
                printf("Digite o PIB da Cidade: ");
                scanf("%lf", &PIB2);
                printf("Digite a quantidade de pontos turísticos: ");
                scanf("%d", &pontos2);

                DensidadePopulacional2 = (float)populacao2 / area2;
                PIBperCapita2 = PIB2 / populacao2;
                SuperPoder2 = populacao2 + area2 + PIB2 + pontos2;

                printf("********************************\n");
                printf("Estado: %s\n", Estado1);
                printf("Cidade: %s\n", Cidade1);
                printf("Código da Carta: %s\n", Carta1);
                printf("Habitantes: %d\n", populacao1);
                printf("Tamanho da Cidade: %.1f km²\n", area1);
                printf("PIB: %.1lf Milhões\n", PIB1);
                printf("Pontos Turísticos: %d\n", pontos1);
                printf("Densidade Populacional: %.2f habitantes por km²\n", DensidadePopulacional1);
                printf("PIB per Capita: %.2lf reais\n", PIBperCapita1);
                printf("Super Poder: %.2lf\n", SuperPoder1);

                printf("********************************\n");
                printf("Estado: %s\n", Estado2);
                printf("Cidade: %s\n", Cidade2);
                printf("Código da Carta: %s\n", Carta2);
                printf("Habitantes: %d\n", populacao2);
                printf("Tamanho da Cidade: %.1f km²\n", area2);
                printf("PIB: %.1lf Milhões\n", PIB2);
                printf("Pontos Turísticos: %d\n", pontos2);
                printf("Densidade Populacional: %.2f habitantes por km²\n", DensidadePopulacional2);
                printf("PIB per Capita: %.2lf reais\n", PIBperCapita2);
                printf("Super Poder: %.2lf\n", SuperPoder2);

                printf("********************************\n");
                printf("Soma dos Atributos das Cartas!\n");
                TotalAtributos1 = populacao1 + area1 + PIB1 + pontos1 + DensidadePopulacional1;
                TotalAtributos2 = populacao2 + area2 + PIB2 + pontos2 + DensidadePopulacional2;
                printf("Soma: %s : %lf \n", Cidade1, TotalAtributos1);
                printf("Soma: %s : %lf \n", Cidade2, TotalAtributos2);
                if (TotalAtributos1 > TotalAtributos2)
                    printf("Resultado: %s venceu!\n", Cidade1);
                else if (TotalAtributos1 < TotalAtributos2)
                    printf("Resultado: %s venceu!\n", Cidade2);
                else
                    printf("Empate!\n");

                do {
                    printf("********************************\n");
                    printf("Escolha qual atributo das cartas será avaliado:\n");
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Pontos Turísticos\n");
                    printf("5. Densidade Demográfica\n");
                    printf("Primeiro Atributo: ");
                    scanf("%d", &opcao2_1);

                    if (opcao2_1 < 1 || opcao2_1 > 5) {
                        printf("Opção Inválida. Tente Novamente!\n");
                    }
                } while (opcao2_1 < 1 || opcao2_1 > 5);

                do {
                    printf("Segundo Atributo: ");
                    scanf("%d", &opcao2_2);

                    if (opcao2_2 < 1 || opcao2_2 > 5) {
                        printf("Opção Inválida. Tente Novamente!\n");
                    }
                    if (opcao2_2 == opcao2_1){
                        printf("Os Atributos devem ser diferentes\n");
                    }
                } while (opcao2_2 < 1 || opcao2_2 > 5 || opcao2_1 == opcao2_2);

                // Comparação dos atributos
                switch (opcao2_1) {
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
                        printf("Área: %s : %.1f \n", Cidade1, area1);
                        printf("Área: %s : %.1f \n", Cidade2, area2);
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
                        printf("PIB: %s : %.1lf \n", Cidade1, PIB1);
                        printf("PIB: %s : %.1lf \n", Cidade2, PIB2);
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
                        else
                            printf("Empate!\n");
                        break;
                    case 5:
                        printf("********************************\n");
                        printf("Quem tem a maior Densidade Demografica?\n");
                        printf("Densidade Demografica: %s : %.2f \n", Cidade1, DensidadePopulacional1);
                        printf("Densidade Demografica: %s : %.2f \n", Cidade2, DensidadePopulacional2);
                        if (DensidadePopulacional1 > DensidadePopulacional2)
                            printf("Resultado: %s venceu!\n", Cidade1);
                        else if (DensidadePopulacional1 < DensidadePopulacional2)
                            printf("Resultado: %s venceu!\n", Cidade2);
                        else
                            printf("Empate!\n");
                        break;
                    default:
                        printf("Opção Inválida. Tente novamente!\n");
                }

                switch (opcao2_2) {
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
                        printf("Área: %s : %.1f \n", Cidade1, area1);
                        printf("Área: %s : %.1f \n", Cidade2, area2);
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
                        printf("PIB: %s : %.1lf \n", Cidade1, PIB1);
                        printf("PIB: %s : %.1lf \n", Cidade2, PIB2);
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
                        else
                            printf("Empate!\n");
                        break;
                    case 5:
                        printf("********************************\n");
                        printf("Quem tem a maior Densidade Demografica?\n");
                        printf("Densidade Demografica: %s : %.2f \n", Cidade1, DensidadePopulacional1);
                        printf("Densidade Demografica: %s : %.2f \n", Cidade2, DensidadePopulacional2);
                        if (DensidadePopulacional1 > DensidadePopulacional2)
                            printf("Resultado: %s venceu!\n", Cidade1);
                        else if (DensidadePopulacional1 < DensidadePopulacional2)
                            printf("Resultado: %s venceu!\n", Cidade2);
                        else
                            printf("Empate!\n");
                        break;
                    default:
                        printf("Opção Inválida. Tente novamente!\n");
                }
                break;

            case 2:
                printf("********************************\n");
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
    } while (opcao1 != 3);

    return 0;
}