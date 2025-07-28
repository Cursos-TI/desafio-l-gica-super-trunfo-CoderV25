#include <stdio.h>

int main() {

    // Variáveis

    //Estados.
    char estado1, estado2;

    //Códigos das Cartas.
    char cod1[4], cod2[4];

    //Nomes das Cidades.
    char cidade1[20], cidade2[20];

    //População.
    unsigned long int popu1, popu2;

    // Áreas.
    float area1, area2;

    //PIBs.
    double pib1, pib2;

    //Pontos Turísticos.
    int pontosT1, pontosT2;

    //Densidade Populacional.
    float densip1, densip2;

    //PIB per Capita.
    double pibpc1, pibpc2;

    //Opções do Menu Interativo.
    int opcao1, opcao2;

    //Resultados das Comparações.
    int result1, result2, empate1, empate2;
    float soma1, soma2;

    // Cadastro das Cartas.

    printf("\n=== Cadastro de Cartas ===\n");

    // Entrada dos dados.

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


    //  Menu interativo de comparação com dois atributos.
    printf("\n=== Menu de Comparação ===\n");

    // Primeira Opção de Comparação
    printf("Escolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &opcao1);

    
    switch (opcao1)
    {
    case 1:

        //Segunda opção de Comparação
        printf("Escolha o segundo atributo para comparação:\n");
        printf("1. Área\n");
        printf("2. PIB\n");
        printf("3. Número de pontos turísticos\n");
        printf("4. Densidade Populacional\n");
        scanf("%d", &opcao2);

        switch (opcao2)
        {

        case 1:
            printf("Comparação de População e Área:\n");
            printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
            printf("--------------------\n");

            //Funções

            result1 = popu1 > popu2 ? 1 : 0 ;
            result2 = area1 > area2 ? 1 : 0 ;
            empate1 = popu1 == popu2 ? 1 : 0 ;
            empate2 = area1 == area2 ? 1 : 0 ;

            //Comparação de População e Área

            //População

            if (empate1 == 0) {

                printf("Comparação de População: \n");

                if (result1 == 1){
                    printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            //Área

            if (empate2 == 0) {

                printf("Comparação de Áreas: \n");

                if (result2 == 1){
                    printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            // Soma dos Atributos
            soma1 = (float) popu1 + area1;
            soma2 = (float) popu2 + area2;

            if (soma1 > soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
            } else if (soma1 < soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
            } else {
                printf("As somas dos atributos são iguais. Empate!\n");
            }
            
        break;

        case 2:
            printf("Comparação de População e PIB:\n");
            printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
            printf("--------------------\n");

            //Funções

            result1 = popu1 > popu2 ? 1 : 0 ;
            result2 = pib1 > pib2 ? 1 : 0 ;
            empate1 = popu1 == popu2 ? 1 : 0 ;
            empate2 = pib1 == pib2 ? 1 : 0 ;

            //Comparação de População e PIB

            //População

            if (empate1 == 0) {

                printf("Comparação de População: \n");

                if (result1 == 1){
                    printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            //PIB

            if (empate2 == 0) {

                printf("Comparação de PIBs: \n");

                if (result2 == 1){
                    printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            // Soma dos Atributos
            soma1 = (float) popu1 + pib1;
            soma2 = (float) popu2 + pib2;

            if (soma1 > soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);

            } else if (soma1 < soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);

            } else {
                printf("As somas dos atributos são iguais. Empate!\n");
            }

        break;

        case 3:
            printf("Comparação de População e Pontos Turísticos:\n");
            printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
            printf("--------------------\n");

            //Funções

            result1 = popu1 > popu2 ? 1 : 0 ;
            result2 = pontosT1 > pontosT2 ? 1 : 0 ;
            empate1 = popu1 == popu2 ? 1 : 0 ;
            empate2 = pontosT1 == pontosT2 ? 1 : 0 ;

            //Comparação de População e Pontos Turísticos

            //População

            if (empate1 == 0) {

                printf("Comparação de População: \n");

                if (result1 == 1){
                    printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            //Pontos Turísticos

            if (empate2 == 0) {

                printf("Comparação de Pontos Turísticos: \n");

                if (result2 == 1){
                    printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            // Soma dos Atributos
            soma1 = (float) popu1 + pontosT1;
            soma2 = (float) popu2 + pontosT2;

            if (soma1 > soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
            } else if (soma1 < soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
            } else {
                printf("As somas dos atributos são iguais. Empate!\n");
            }

        break;

        case 4:
            printf("Comparação de População e Densidade Populacional:\n");
            printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
            printf("--------------------\n");

            //Funções

            result1 = popu1 > popu2 ? 1 : 0 ;
            result2 = densip1 < densip2 ? 1 : 0 ; // Menor é melhor
            empate1 = popu1 == popu2 ? 1 : 0 ;
            empate2 = densip1 == densip2 ? 1 : 0 ;

            //Comparação de População e Densidade Populacional

            //População

            if (empate1 == 0) {

                printf("Comparação de População: \n");

                if (result1 == 1){
                    printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            //Densidade Populacional

            if (empate2 == 0) {

                printf("Comparação de Densidades Populacionais: \n");

                if (result2 == 1){
                    printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            // Soma dos Atributos
            soma1 = (float) popu1 + densip1;
            soma2 = (float) popu2 + densip2;

            if (soma1 > soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
            } else if (soma1 < soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
            } else {
                printf("As somas dos atributos são iguais. Empate!\n");
            }

        break;

        default:
            printf("Opção Inválida!");
        break;
        }
        break;

    case 2:

        //Segunda opção de Comparação
        printf("Escolha o segundo atributo para comparação:\n");
        printf("1. População\n");
        printf("2. PIB\n");
        printf("3. Número de pontos turísticos\n");
        printf("4. Densidade Populacional\n");
        scanf("%d", &opcao2);

        switch (opcao2)
        {
        case 1:
            printf("Comparação de Área e População:\n");
            printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
            printf("--------------------\n");
            
            //Funções

            result1 = area1 > area2 ? 1 : 0 ;
            result2 = popu1 > popu2 ? 1 : 0 ;
            empate1 = popu1 == popu2 ? 1 : 0 ;
            empate2 = area1 == area2 ? 1 : 0 ;

            //Comparação de Área e População

            //Área

            if (empate1 == 0) {

                printf("Comparação de Áreas: \n");

                if (result1 == 1){
                    printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            //População

            if (empate2 == 0) {

                printf("Comparação de População: \n");

                if (result2 == 1){
                    printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            // Soma dos Atributos

            soma1 = (float) area1 + popu1;
            soma2 = (float) area2 + popu2;

            if (soma1 > soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);

            } else if (soma1 < soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);

            } else {
                printf("As somas dos atributos são iguais. Empate!\n");
            }
            
        break;
        case 2:
            printf("Comparação de Área e PIB:\n");
            printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
            printf("--------------------\n");

            //Funções

            result1 = area1 > area2 ? 1 : 0 ;
            result2 = pib1 > pib2 ? 1 : 0 ;
            empate1 = area1 == area2 ? 1 : 0 ;
            empate2 = pib1 == pib2 ? 1 : 0 ;

            //Comparação de Área e PIB

            //Área

             if (empate1 == 0) {

                printf("Comparação de Áreas: \n");

                if (result1 == 1){
                    printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            //PIB

            if (empate2 == 0) {

                printf("Comparação de PIBs: \n");

                if (result2 == 1){
                    printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");

                } else {
                    printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            // Soma dos Atributos
            soma1 = (float) area1 + pib1;
            soma2 = (float) area2 + pib2;

            if (soma1 > soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
            } else if (soma1 < soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
            } else {
                printf("As somas dos atributos são iguais. Empate!\n");
            }

        break;
        case 3:
            printf("Comparação de Áreas e Pontos Turísticos:\n");
            printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
            printf("--------------------\n");

            //Funções

            result1 = area1 > area2 ? 1 : 0 ;
            result2 = pontosT1 > pontosT2 ? 1 : 0 ;
            empate1 = area1 == area2 ? 1 : 0 ;
            empate2 = pontosT1 == pontosT2 ? 1 : 0 ;

            //Comparação de Área e Pontos Turísticos

            //Área

            if (empate1 == 0) {

                printf("Comparação de Áreas: \n");

                if (result1 == 1){
                    printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            //Pontos Turísticos

            if (empate2 == 0) {

                printf("Comparação de Pontos Turísticos: \n");

                if (result2 == 1){
                    printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            // Soma dos Atributos
            soma1 = (float) area1 + pontosT1;
            soma2 = (float) area2 + pontosT2;

            if (soma1 > soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
            } else if (soma1 < soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
            } else {
                printf("As somas dos atributos são iguais. Empate!\n");
            }

        break;
        case 4:
            printf("Comparação de Áreas e Densidades Populacionais:\n");
            printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
            printf("--------------------\n");

            //Funções

            result1 = area1 > area2 ? 1 : 0 ;
            result2 = densip1 < densip2 ? 1 : 0 ;
            empate1 = area1 == area2 ? 1 : 0 ;
            empate2 = densip1 == densip2 ? 1 : 0 ;

            //Comparação de Área e Densidade Populacional

            //Área

            if (empate1 == 0) {

                printf("Comparação de Áreas: \n");

                if (result1 == 1){
                    printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            //Densidade Populacional

            if (empate2 == 0) {

                printf("Comparação de Densidades Populacionais: \n");

                if (result2 == 1){
                    printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            // Soma dos Atributos
            soma1 = (float) area1 + densip1;
            soma2 = (float) area2 + densip2;

            if (soma1 > soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
            } else if (soma1 < soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
            } else {
                printf("As somas dos atributos são iguais. Empate!\n");
            }

        break;

        default:
            printf("Opção Inválida!");

        break;

        }
        break;

    case 3:

        //Segunda opção de Comparação
        printf("Escolha o segundo atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. Número de pontos turísticos\n");
        printf("4. Densidade Populacional\n");
        scanf("%d", &opcao2);

        //Comparação de PIBs

        switch (opcao2)
        {
        case 1:
            printf("Comparação de PIBs e População:\n");
            printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
            printf("--------------------\n");

            //Funções
            result1 = pib1 > pib2 ? 1 : 0 ;
            result2 = popu1 > popu2 ? 1 : 0 ;
            empate1 = pib1 == pib2 ? 1 : 0 ;
            empate2 = popu1 == popu2 ? 1 : 0 ;

            //Comparação de PIBs e População

            //PIB
            if (empate1 == 0) {

                printf("Comparação de PIBs: \n");

                if (result1 == 1){
                    printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            // Soma dos Atributos
            soma1 = (float) area1 + popu1;
            soma2 = (float) area2 + popu2;

            if (soma1 > soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
            } else if (soma1 < soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
            } else {
                printf("As somas dos atributos são iguais. Empate!\n");
            }

            //População
            if (empate2 == 0) {

                printf("Comparação de População: \n");

                if (result2 == 1){
                    printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            break;
        case 2:
            printf("Comparação de PIBs e Áreas:\n");
            printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
            printf("--------------------\n");

            //Funções
            result1 = pib1 > pib2 ? 1 : 0 ;
            result2 = area1 > area2 ? 1 : 0 ;
            empate1 = pib1 == pib2 ? 1 : 0 ;
            empate2 = area1 == area2 ? 1 : 0 ;

            //Comparação de PIBs e Áreas

            //PIB
            if (empate1 == 0){

                printf("Comparação de PIBs: \n");

                if (result1 == 1){
                    printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");

                } else {
                    printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            //Áreas
            if (empate2 == 0){

                printf("Comparação de Áreas: \n");

                if (result2 == 1){
                    printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
            }

            // Soma dos Atributos
            soma1 = (float) pib1 + area1;
            soma2 = (float) pib2 + area2;

            if (soma1 > soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
                
            } else if (soma1 < soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);

            } else {
                printf("As somas dos atributos são iguais. Empate!\n");
            }

            break;

        case 3:
            printf("Comparação de PIBs e Pontos Turísticos:\n");
            printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
            printf("--------------------\n");

            //Funções
            result1 = pib1 > pib2 ? 1 : 0 ;
            result2 = pontosT1 > pontosT2 ? 1 : 0 ;
            empate1 = pib1 == pib2 ? 1 : 0 ;
            empate2 = pontosT1 == pontosT2 ? 1 : 0 ;

            //Comparação de PIBs e Pontos Turísticos

            //PIB
            if (empate1 == 0){

                printf("Comparação de PIBs: \n");

                if (result1 == 1){
                    printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            //Pontos Turísticos
            if (empate2 == 0){

                printf("Comparação de Pontos Turísticos: \n");

                if (result2 == 1){
                    printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            // Soma dos Atributos
            soma1 = (float) pib1 + pontosT1;
            soma2 = (float) pib2 + pontosT2;

            if (soma1 > soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
            } else if (soma1 < soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
            } else {
                printf("As somas dos atributos são iguais. Empate!\n");
            }

            break;

        case 4:
            printf("Comparação de PIBs e Densidade Populacional:\n");
            printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
            printf("--------------------\n");

            //Funções
            result1 = pib1 > pib2 ? 1 : 0 ;
            result2 = densip1 < densip2 ? 1 : 0 ;
            empate1 = pib1 == pib2 ? 1 : 0 ;
            empate2 = densip1 == densip2 ? 1 : 0 ;

            //Comparação de PIBs e Densidade Populacional

            //PIB
            if (empate1 == 0){

                printf("Comparação de PIBs: \n");

                if (result1 == 1){
                    printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
            }

            //Densidade Populacional
            if (empate2 == 0){

                printf("Comparação de Densidades Populacionais: \n");

                if (result2 == 1){
                    printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                    printf("A Carta 1 (%s) venceu!\n", cidade1);
                    printf("--------------------\n");
                } else {
                    printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                    printf("A Carta 2 (%s) venceu!\n", cidade2);
                    printf("--------------------\n");
                }

            } else {
                printf("Os dois atributos são iguais. Empate!\n");
                printf("--------------------\n");
            }

            // Soma dos Atributos
            soma1 = (float) pib1 + densip1;
            soma2 = (float) pib2 + densip2;

            if (soma1 > soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
            } else if (soma1 < soma2) {
                printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
            } else {
                printf("As somas dos atributos são iguais. Empate!\n");
            }

            break;
        default:
            printf("Opção Inválida!");
            break;
        }
        break;
    case 4:

        //Segunda opção de Comparação
        printf("Escolha o segundo atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Densidade Populacional\n");
        scanf("%d", &opcao2);

        //Comparação de Pontos Turísticos

        switch (opcao2)
        {
            case 1:
                printf("Comparação de Pontos Turísticos e Populações:\n");
                printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
                printf("--------------------\n");

                //Funções
                result1 = pontosT1 > pontosT2 ? 1 : 0 ;
                result2 = popu1 > popu2 ? 1 : 0 ;
                empate1 = pontosT1 == pontosT2 ? 1 : 0 ;
                empate2 = popu1 == popu2 ? 1 : 0 ;

                //Comparação de Pontos Turísticos e Populações

                //Pontos Turísticos
                if (empate1 == 0) {

                    printf("Comparação de Pontos Turísticos: \n");

                    if (result1 == 1){
                        printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                        printf("A Carta 1 (%s) venceu!\n", cidade1);
                        printf("--------------------\n");
                    } else {
                        printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                        printf("A Carta 2 (%s) venceu!\n", cidade2);
                        printf("--------------------\n");
                    }

                } else {
                    printf("Os dois atributos são iguais. Empate!\n");
                    printf("--------------------\n");
                }

                //População
                if (empate2 == 0) {

                    printf("Comparação de Populações: \n");

                    if (result2 == 1){
                        printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                        printf("A Carta 1 (%s) venceu!\n", cidade1);
                        printf("--------------------\n");
                    } else {
                        printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                        printf("A Carta 2 (%s) venceu!\n", cidade2);
                        printf("--------------------\n");
                    }
                } else {
                    printf("Os dois atributos são iguais. Empate!\n");
                    printf("--------------------\n");
                }

                // Soma dos Atributos
                soma1 = (float) pontosT1 + popu1;
                soma2 = (float) pontosT2 + popu2;

                if (soma1 > soma2) {
                    printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                    printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
                } else if (soma1 < soma2) {
                    printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                    printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
                } else {
                    printf("As somas dos atributos são iguais. Empate!\n");
                }

                break;

            case 2:
                printf("Comparação de Pontos Turísticos e Áreas:\n");
                printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
                printf("--------------------\n");
                
                //Funções
                result1 = pontosT1 > pontosT2 ? 1 : 0 ;
                result2 = area1 > area2 ? 1 : 0 ;
                empate1 = pontosT1 == pontosT2 ? 1 : 0 ;
                empate2 = area1 == area2 ? 1 : 0 ;

                //Comparação de Pontos Turísticos e Áreas

                //Pontos Turísticos
                if (empate1 == 0) {

                    printf("Comparação de Pontos Turísticos: \n");

                    if (result1 == 1){
                        printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                        printf("A Carta 1 (%s) venceu!\n", cidade1);
                        printf("--------------------\n");
                    } else {
                        printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                        printf("A Carta 2 (%s) venceu!\n", cidade2);
                        printf("--------------------\n");
                    }

                } else {
                    printf("Os dois atributos são iguais. Empate!\n");
                    printf("--------------------\n");
                }

                //Áreas
                if (empate2 == 0) {

                    printf("Comparação de Áreas: \n");

                    if (result2 == 1){
                        printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                        printf("A Carta 1 (%s) venceu!\n", cidade1);
                        printf("--------------------\n");
                    } else {
                        printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                        printf("A Carta 2 (%s) venceu!\n", cidade2);
                        printf("--------------------\n");
                    }

                } else {
                    printf("Os dois atributos são iguais. Empate!\n");
                    printf("--------------------\n");
                }

                // Soma dos Atributos
                soma1 = (float) pontosT1 + area1;
                soma2 = (float) pontosT2 + area2;

                if (soma1 > soma2) {
                    printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                    printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
                } else if (soma1 < soma2) {
                    printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                    printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
                } else {
                    printf("As somas dos atributos são iguais. Empate!\n");
                }

                break;

            case 3:
                printf("Comparação de Pontos Turísticos e PIBs:\n");
                printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
                printf("--------------------\n");
                

                //Funções
                result1 = pontosT1 > pontosT2 ? 1 : 0 ;
                result2 = pib1 > pib2 ? 1 : 0 ;
                empate1 = pontosT1 == pontosT2 ? 1 : 0 ;
                empate2 = pib1 == pib2 ? 1 : 0 ;

                //Comparação de Pontos Turísticos e PIBs

                //Pontos Turísticos
                if (empate1 == 0) {

                    printf("Comparação de Pontos Turísticos: \n");

                    if (result1 == 1){
                        printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                        printf("A Carta 1 (%s) venceu!\n", cidade1);
                        printf("--------------------\n");
                    } else {
                        printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                        printf("A Carta 2 (%s) venceu!\n", cidade2);
                        printf("--------------------\n");
                    }

                } else {
                    printf("Os dois atributos são iguais. Empate!\n");
                    printf("--------------------\n");
                }

                //PIBs
                if (empate2 == 0) {

                    printf("Comparação de PIBs: \n");

                    if (result2 == 1){
                        printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                        printf("A Carta 1 (%s) venceu!\n", cidade1);
                        printf("--------------------\n");
                    } else {
                        printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                        printf("A Carta 2 (%s) venceu!\n", cidade2);
                        printf("--------------------\n");
                    }

                } else {
                    printf("Os dois atributos são iguais. Empate!\n");
                    printf("--------------------\n");
                }

                // Soma dos Atributos
                soma1 = (float) pontosT1 + pib1;
                soma2 = (float) pontosT2 + pib2;

                if (soma1 > soma2) {
                    printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                    printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
                } else if (soma1 < soma2) {
                    printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                    printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
                } else {
                    printf("As somas dos atributos são iguais. Empate!\n");
                }

                break;
            case 4:
                printf("Comparação de Pontos Turísticos e Densidade Populacional:\n");
                printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);

                //Funções
                result1 = pontosT1 > pontosT2 ? 1 : 0 ;
                result2 = densip1 < densip2 ? 1 : 0 ;
                empate1 = pontosT1 == pontosT2 ? 1 : 0 ;
                empate2 = densip1 == densip2 ? 1 : 0 ;

                //Comparação de Pontos Turísticos e Densidade Populacional

                //Pontos Turísticos
                if (empate1 == 0) {

                    printf("Comparação de Pontos Turísticos: \n");

                    if (result1 == 1){
                        printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                        printf("A Carta 1 (%s) venceu!\n", cidade1);
                        printf("--------------------\n");
                    } else {
                        printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                        printf("A Carta 2 (%s) venceu!\n", cidade2);
                        printf("--------------------\n");
                    }

                } else {
                    printf("Os dois atributos são iguais. Empate!\n");
                    printf("--------------------\n");
                }

                //Densidade Populacional
                if (empate2 == 0) {

                    printf("Comparação de Densidade Populacional: \n");

                    if (result2 == 1){
                        printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                        printf("A Carta 1 (%s) venceu!\n", cidade1);
                        printf("--------------------\n");
                    } else {
                        printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                        printf("A Carta 2 (%s) venceu!\n", cidade2);
                        printf("--------------------\n");
                    }

                } else {
                    printf("Os dois atributos são iguais. Empate!\n");
                    printf("--------------------\n");
                }

                // Soma dos Atributos
                soma1 = (float) pontosT1 + densip1;
                soma2 = (float) pontosT2 + densip2;

                if (soma1 > soma2) {
                    printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                    printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
                } else if (soma1 < soma2) {
                    printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                    printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
                } else {
                    printf("As somas dos atributos são iguais. Empate!\n");
                }

                break;
            default:
                printf("Opção inválida.");
                break;
            }
        case 5:

        //Segunda opção de Comparação
        printf("Escolha o segundo atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        scanf("%d", &opcao2);

        //Comparação de Densidades

            switch (opcao2)
            {
                case 1:
                    printf("Comparação de Densidade Populacional e População:\n");
                    printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
                    printf("--------------------\n");

                    //Funções
                    result1 = densip1 < densip2 ? 1 : 0 ;
                    result2 = popu1 > popu2 ? 1 : 0 ;
                    empate1 = densip1 == densip2 ? 1 : 0 ;
                    empate2 = popu1 == popu2 ? 1 : 0 ;

                    //Comparação de Densidade Populacional e População

                    //Densidade Populacional
                    if (empate1 == 0) {

                        printf("Comparação de Densidades Populacionais: \n");

                        if (result1 == 1){
                            printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                            printf("A Carta 1 (%s) venceu!\n", cidade1);
                            printf("--------------------\n");
                        } else {
                            printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                            printf("A Carta 2 (%s) venceu!\n", cidade2);
                            printf("--------------------\n");
                        }

                    } else {
                        printf("Os dois atributos são iguais. Empate!\n");
                        printf("--------------------\n");
                    }

                    //População
                    if (empate2 == 0) {

                        printf("Comparação de Populações: \n");

                        if (result2 == 1){
                            printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                            printf("A Carta 1 (%s) venceu!\n", cidade1);
                            printf("--------------------\n");
                        } else {
                            printf("População Carta 1: %lu \nPopulação Carta 2: %lu\n", popu1, popu2);
                            printf("A Carta 2 (%s) venceu!\n", cidade2);
                            printf("--------------------\n");
                        }
                        
                    } else {
                        printf("Os dois atributos são iguais. Empate!\n");
                        printf("--------------------\n");
                    }

                    // Soma dos Atributos
                    soma1 = (float) densip1 + popu1;
                    soma2 = (float) densip2 + popu2;

                    if (soma1 > soma2) {
                        printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                        printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
                    } else if (soma1 < soma2) {
                        printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                        printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
                    } else {
                        printf("As somas dos atributos são iguais. Empate!\n");
                    }

                    break;
                case 2:
                    printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
                    printf("Comparação de Densidade Populacional e Área:\n");
                    printf("--------------------\n");

                    //Funções
                    result1 = densip1 < densip2 ? 1 : 0 ;
                    result2 = area1 > area2 ? 1 : 0 ;
                    empate1 = densip1 == densip2 ? 1 : 0 ;
                    empate2 = area1 == area2 ? 1 : 0 ;

                    //Comparação de Densidade Populacional e Área

                    //Densidade Populacional
                    if (empate1 == 0) {
                        printf("Comparação de Densidades Populacionais: \n");

                        if (result1 == 1){
                            printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                            printf("A Carta 1 (%s) venceu!\n", cidade1);
                            printf("--------------------\n");
                        } else {
                            printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                            printf("A Carta 2 (%s) venceu!\n", cidade2);
                            printf("--------------------\n");
                        }

                    } else {
                        printf("Os dois atributos são iguais. Empate!\n");
                        printf("--------------------\n");
                    }

                    //Áreas

                    if (empate2 == 0) {
                        printf("Comparação de Áreas: \n");

                        if (result2 == 1){
                            printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                            printf("A Carta 1 (%s) venceu!\n", cidade1);
                            printf("--------------------\n");
                        } else {
                            printf("Área Carta 1: %.2f \nÁrea Carta 2: %.2f\n", area1, area2);
                            printf("A Carta 2 (%s) venceu!\n", cidade2);
                            printf("--------------------\n");
                        }

                    } else {
                        printf("Os dois atributos são iguais. Empate!\n");
                        printf("--------------------\n");
                    }

                    // Soma dos Atributos
                    soma1 = (float) densip1 + area1;
                    soma2 = (float) densip2 + area2;

                    if (soma1 > soma2) {
                        printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                        printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
                    } else if (soma1 < soma2) {
                        printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                        printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
                    } else {
                        printf("As somas dos atributos são iguais. Empate!\n");
                    }

                    break;
                case 3:
                    printf("Comparação de Densidade Populacional e PIB:\n");
                    printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
                    printf("--------------------\n");

                    //Funções
                    result1 = densip1 < densip2 ? 1 : 0 ;
                    result2 = pib1 > pib2 ? 1 : 0 ;
                    empate1 = densip1 == densip2 ? 1 : 0 ;
                    empate2 = pib1 == pib2 ? 1 : 0 ;

                    //Comparação de Densidade Populacional e PIB

                    //Densidade Populacional
                    if (empate1 == 0) {
                        printf("Comparação de Densidades Populacionais: \n");

                        if (result1 == 1){
                            printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                            printf("A Carta 1 (%s) venceu!\n", cidade1);
                            printf("--------------------\n");
                        } else {
                            printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                            printf("A Carta 2 (%s) venceu!\n", cidade2);
                            printf("--------------------\n");
                        }

                    } else {
                        printf("Os dois atributos são iguais. Empate!\n");
                        printf("--------------------\n");
                    }

                    //PIB
                    if (empate2 == 0) {
                        printf("Comparação de PIBs: \n");

                        if (result2 == 1){
                            printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                            printf("A Carta 1 (%s) venceu!\n", cidade1);
                            printf("--------------------\n");
                        } else {
                            printf("PIB Carta 1: %.2f \nPIB Carta 2: %.2f\n", pib1, pib2);
                            printf("A Carta 2 (%s) venceu!\n", cidade2);
                            printf("--------------------\n");
                        }

                    } else {
                        printf("Os dois atributos são iguais. Empate!\n");
                        printf("--------------------\n");
                    }

                    // Soma dos Atributos
                    soma1 = (float) densip1 + pib1;
                    soma2 = (float) densip2 + pib2;

                    if (soma1 > soma2) {
                        printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                        printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
                    } else if (soma1 < soma2) {
                        printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                        printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
                    } else {
                        printf("As somas dos atributos são iguais. Empate!\n");
                    }

                    break;
                case 4:
                    printf("Comparação de Densidade Populacional e Pontos Turísticos:\n");
                    printf("Carta 1: (%s) \nCarta 2: (%s)\n", cidade1, cidade2);
                    printf("--------------------\n");

                    //Funções
                    result1 = densip1 < densip2 ? 1 : 0 ;
                    result2 = pontosT1 > pontosT2 ? 1 : 0 ;
                    empate1 = densip1 == densip2 ? 1 : 0 ;
                    empate2 = pontosT1 == pontosT2 ? 1 : 0 ;

                    //Comparação de Densidade Populacional e Pontos Turísticos

                    //Densidade Populacional
                    if (empate1 == 0) {
                        printf("Comparação de Densidades Populacionais: \n");

                        if (result1 == 1){
                            printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                            printf("A Carta 1 (%s) venceu!\n", cidade1);
                            printf("--------------------\n");
                        } else {
                            printf("Densidade Populacional Carta 1: %.2f \nDensidade Populacional Carta 2: %.2f\n", densip1, densip2);
                            printf("A Carta 2 (%s) venceu!\n", cidade2);
                            printf("--------------------\n");
                        }

                    } else {
                        printf("Os dois atributos são iguais. Empate!\n");
                        printf("--------------------\n");
                    }

                    //Pontos Turísticos
                    if (empate2 == 0) {
                        printf("Comparação de Pontos Turísticos: \n");

                        if (result2 == 1){
                            printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                            printf("A Carta 1 (%s) venceu!\n", cidade1);
                            printf("--------------------\n");
                        } else {
                            printf("Pontos Turísticos Carta 1: %d \nPontos Turísticos Carta 2: %d\n", pontosT1, pontosT2);
                            printf("A Carta 2 (%s) venceu!\n", cidade2);
                            printf("--------------------\n");
                        }

                    } else {
                        printf("Os dois atributos são iguais. Empate!\n");
                        printf("--------------------\n");
                    }

                    // Soma dos Atributos
                    soma1 = (float) densip1 + pontosT1;
                    soma2 = (float) densip2 + pontosT2;

                    if (soma1 > soma2) {
                        printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                        printf("A Carta 1 (%s) venceu a rodada!\n", cidade1);
                    } else if (soma1 < soma2) {
                        printf("Soma dos Atributos Carta 1: %.2f \nSoma dos Atributos Carta 2: %.2f\n", soma1, soma2);
                        printf("A Carta 2 (%s) venceu a rodada!\n", cidade2);
                    } else {
                        printf("As somas dos atributos são iguais. Empate!\n");
                    }

                    break;
                default:
                    printf("Opção inválida.");
                    break;
            }
        break;
    default:
        printf("Opção inválida.");
        break;
    }
    return 0;    
}