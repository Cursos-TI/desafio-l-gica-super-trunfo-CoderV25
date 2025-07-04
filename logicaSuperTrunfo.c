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


     // Lógica de comparação
    printf("\n=== Comparação das Cartas (Atributo: Área) ===\n");

    if (area1 > area2) {

        printf("A Carta 1 (%s) venceu!\n", cidade1);

    } else if (area1 < area2) {

        printf("A Carta 2 (%s) venceu!\n", cidade2);

    } else {

        printf("Empate!\n");
        
    }

return 0;
}