#include <stdio.h>

int main() {

    // Variáveis
    int pontosT1, pontosT2;
    unsigned long int popu1, popu2;
    float area1, area2, densip1, densip2;
    double pib1, pib2, pibpc1, pibpc2;
    char estado1, estado2, cidade1[20], cidade2[20], cod1[4], cod2[4];

    
    printf("\n=== Cadastro de Cartas ===\n");

    // Entrada dos dados

    // Carta 1
    printf("\n=== Carta 1 ===\n");

    printf("Digite o Estado: \n");
    scanf(" %c", &estado1); // %c e espaço antes
    getchar();

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", cod1);

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", cidade1); // Para ler com espaços

    printf("Digite o número de habitantes da Cidade: \n");
    scanf("%d", &popu1);

    printf("Digite a área da Cidade em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosT1);

    // Carta 2
    printf("\n=== Carta 2 ===\n");

    printf("Digite o Estado: \n");
    scanf(" %c", &estado2); // %c e espaço antes

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", cod2);

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", cidade2); // Para ler com espaços

    printf("Digite o número de habitantes da Cidade: \n");
    scanf("%d", &popu2);

    printf("Digite a área da Cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosT2);


    //Calculando a Densidade Populacional
    
    //Carta 1
    densip1 = (float) popu1 / area1;
    //Carta 2
    densip2 = (float)  popu2 / area2;

    //Calculando o PIB per Capita

    //Carta 1
    pibpc1 = (pib1  / popu1) * 1000000000.0; // PIB em bilhões de reais
    //Carta 2
    pibpc2 = (pib2  / popu2) * 1000000000.0; // PIB em bilhões de reais
    
    // Saída Carta 1
    printf("\n=== Informações da Carta 1 ===\n");
    printf("Estado: %c \nCódigo: %s \nNome da Cidade: %s\n", estado1, cod1, cidade1);
    printf("Área: %.2f km²\n", area1);
    printf("População: %lu \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d\n", popu1, pib1, pontosT1);
    printf("Densidade Populacional: %.2f hab/km²\n", densip1);
    printf("PIB per Capita: %.2f Reais\n", pibpc1);
    
    // Saída Carta 2
    printf("\n=== Informações da Carta 2 ===\n");
    printf("Estado: %c \nCódigo: %s \nNome da Cidade: %s\n", estado2, cod2, cidade2);
    printf("Área: %.2f km²\n", area2);
    printf("População: %lu \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d\n", popu2, pib2, pontosT2);
    printf("Densidade Populacional: %.2f hab/km²\n", densip2);
    printf("PIB per Capita: %.2f Reais\n", pibpc2);


    //  Menu interativo de comparação
    printf("\n=== Menu de Comparação ===\n");

    int opcao;

    printf("Escolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &opcao);

    
    switch (opcao)
    {
    case 1:
        //Comparação de População

        printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
        printf("Comparação de Populações:\n");
        printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);

        if (popu1 > popu2) {

            printf("A Carta 1 (%s) venceu!\n", cidade1);

        } else if (popu1 < popu2) {

            printf("A Carta 2 (%s) venceu!\n", cidade2);

        } else {

            printf("Empate!\n");

        }
        break;

    case 2:
        //Comparação de Áreas

        printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
        printf("Comparação de Áreas:\n");
        printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
        if (area1 > area2) {

            printf("A Carta 1 (%s) venceu!\n", cidade1);

        } else if (area1 < area2) {

            printf("A Carta 2 (%s) venceu!\n", cidade2);

        } else {
            printf("Empate!\n");
        }
        
        break;

    case 3:
        //Comparação de PIBs

        printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
        printf("Comparação de PIBs:\n");
        printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);

        if (pib1 > pib2) {

            printf("A Carta 1 (%s) venceu!\n", cidade1);

        } else if (pib1 < pib2) {

            printf("A Carta 2 (%s) venceu!\n", cidade2);

        } else {

            printf("Empate!\n");

        }
        
        break;
    
    case 4:
        //Comparação de Pontos Turísticos

        printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
        printf("Comparação de Pontos Turísticos:\n");
        printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);

        if (pontosT1 > pontosT2) {
            
            printf("A Carta 1 (%s) venceu!\n", cidade1);

        } else if (pontosT1 < pontosT2) {

            printf("A Carta 2 (%s) venceu!\n", cidade2);

        } else {

            printf("Empate!\n");

        }
        
        break;

    case 5:
        //Comparação de Densidades

        printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
        printf("Comparação de Densidades:\n");
        printf("Densidade Carta 1: %.2f \nDensidade Carta 2: %.2f\n", densip1, densip2);

        if (densip1 < densip2) {

            printf("A Carta 1 (%s) venceu!\n", cidade1);

        } else if (densip1 > densip2) {

            printf("A Carta 2 (%s) venceu!\n", cidade2);

        } else {

            printf("Empate!\n");

        }
        
        break;
    
    default:

        printf("Opção inválida.");

        break;
    }
return 0;
}