#include <stdio.h>

int main(){ 
    int populacao1, populacao2;
    int pontost1, pontost2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    char cidade1[20] = "jampa", cidade2[20] = "fortaleza";
    char carta1[5] = "C01", carta2[20] = "C02";
    char estado1[10] = "paraiba", estado2[10] = "ceara";


    populacao1 = 45789000;
    populacao2 = 33378000;
    pontost1 = 300;
    pontost2= 200;
    area1 = 1509;
    area2 = 1690;
    pib1 = 691922652;
    pib2 = 729213187;
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibpercapita1 = pib1 / (float)populacao1;
    pibpercapita2 = pib2 / (float)populacao2;

    // Quando o Usuário digitar o código pedido todas as informações da carta serão mostradas //
    // Atualização Nivel Aventureiro, implementei os sistemas de Pib per capita e Densidade demográfica /
    // Corrigi alguns erros do primeiro programa //

    printf("----------> JOGO SUPER TRUNFO <-------------\n"); 
    printf("Digite o Código C01: ");
    scanf("%s", carta1);
    printf("A cidade escolhida foi : %s\n", cidade1);
    printf("O codigo desta cidade é: %s\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("A População é: %d\n", populacao1);
    printf("Pib: %.3f bilhões de reais\n", pib1);
    printf("A área em km dessa cidade equivale a: %.2f\n", area1);
    printf("A quantidade de pontos turisticos dessa cidade são: %d\n", pontost1);
    printf("A densidade demográfica da cidade é: %.2f hab/por km²\n", densidade1);
    printf("O Pib per capita ou riqueza média é %.2f\n",pib1, pibpercapita1);
  
    // Aqui na continuação do código quando o usuário digitar o segundo código as informações serão mostradas //

    printf("Digite o Código C02: ");
    scanf("%s", carta2);
    printf("A cidade escolhida foi : %s\n", cidade2);
    printf("O codigo desta cidade é: %s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("A População é: %d\n", populacao2);
    printf("Pib: %.3f bilhões de reais\n", pib2);
    printf("A área em km dessa cidade equivale a: %.2f\n", area2);
    printf("A quantidade de pontos turisticos dessa cidade são: %d\n", pontost2);
    printf("A densidade demográfica da cidade é: %.2f hab/por km²\n", densidade2);
    printf("O Pib per capita ou riqueza média é %.2f\n",pib2, pibpercapita2);

    printf("----------> ÁREA DE COMPARAÇÃO <-------------\n");
    // Aqui eu separei a parte para comparar os resultados e definir o vencedor!!//

        int card1 = 0, card2 = 0;

        if (populacao1 > populacao2) {
            printf("A Cidade 1 tem o maior número de habitantes. \n");
            card1 += 1;
            printf("Carta 1 ganhou +1 ponto. \n", card1);
        }  else {
            printf("A Cidade 2 tem o maior número de habitantes. \n");
            card2 += 1;
            printf("Carta 2 ganhou +1 ponto.\n", card2);
        }
        if (pib1 > pib2) {
            printf("A Cidade 1 tem o maior Pib. \n");
            card1 += 1;
            printf("Carta 1 ganhou +1 ponto. \n", card1);
        }  else {
            printf("A Cidade 2 tem o maior Pib. \n");
            card2 += 1;
            printf("Carta 2 ganhou +1 ponto.\n", card2);
        }
        if (area1 > area2) {
            printf("A Cidade 1 tem a maior área em Km². \n");
            card1 += 1;
            printf("Carta 1 ganhou +1 ponto. \n", card1);
        }  else {
            printf("A Cidade 2 tem a maior área em Km². \n");
            card2 += 1;
            printf("Carta 2 ganhou +1 ponto.\n", card2);
        }
        if (pontost1 > pontost2) {
            printf("A Cidade 1 tem o maior número de pontos turisticos. \n");
            card1 += 1;
            printf("Carta 1 ganhou +1 ponto. \n", card1);
        }  else {
            printf("A Cidade 2 tem o maior número de pontos turisticos. \n");
            card2 += 1;
            printf("Carta 2 ganhou +1 ponto.\n", card2);
        }
        if (densidade1 < densidade2) {
            printf("A Cidade 1 tem o menor número de desindade demográfica. \n");
            card1 += 1;
            printf("Carta 1 ganhou +1 ponto. \n", card1);
        }  else {
            printf("A Cidade 2 tem o menor número de desindade demográfica. \n");
            card2 += 1;
            printf("Carta 2 ganhou +1 ponto.\n", card2);
        }
        if (pibpercapita1 > pibpercapita2) {
            printf("A Cidade 1 tem o maior número de Pib per capita ou riqueza média. \n");
            card1 += 1;
            printf("Carta 1 ganhou +1 ponto. \n", card1);
        }  else {
            printf("A Cidade 2 tem o maior número de Pib per capita ou riqueza média. \n");
            card2 += 1;
            printf("Carta 2 ganhou +1 ponto.\n", card2);
        }

        printf("----------> A CARTA VITORIOSA <-------------\n");       
            if (card1 > card2 ) {
            printf("A carta campeã foi %s.\n", cidade1, card1);
        } else if (card2 > card1) {
            printf("A carta campeã foi a CIDADE 2 (%s) com %d pontos!\n", cidade2, card2);
        } else {
            printf("Empate! Ambas as cidades têm %d pontos.\n", card1);
        }
        return 0;
}