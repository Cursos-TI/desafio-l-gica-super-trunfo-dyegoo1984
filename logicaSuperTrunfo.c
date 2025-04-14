// Autor: Diego dos Santos Oliveira 
// Matrícula: 2025 0372 2821
// Introdução à Programação de Computadores
// Tema 2 - Desafio Nível Novato: Comparando as Cartas do Super Trunfo

#include <stdio.h>

int main() {
    //Declaração de variáveis

    char estado1[2] = "RS";
    char estado2[2] = "SC";
    char codigo1[3] = "RS5";
    char codigo2[3] = "SC8";
    char nomeCidade1[20] = "Santiago";
    char nomeCidade2[20] = "Pomerode";
    int numPontosTur1 = 15;
    int numPontosTur2 = 10;
    int menu;
    unsigned long int populacao1 = 48938;
    unsigned long int populacao2 = 34289;
    float area1 = 2413.075;
    float area2 = 214.299;
    float pib1 = 2055396000;
    float pib2 = 2784118328.63;
    float densidadePop1, densidadePop2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;

    densidadePop1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) pib1 / populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + numPontosTur1 + pibPerCapita1 + (1/densidadePop1);

    densidadePop2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2 / populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + numPontosTur2 + pibPerCapita2 + (1/densidadePop2);

    //Apresentação dos dados
    printf("*===========================================================*\n");
    printf("*                   SUPER TRUNFO - PAÍSES                   *\n");
    printf("*===========================================================*\n");
    printf("* CARTA 1\n");
    printf("* Código: %s\n", codigo1);
    printf("* Estado: %s\n", estado1);
    printf("* Cidade: %s\n", nomeCidade1);
    printf("*===========================================================*\n");
    printf("* CARTA 2\n");
    printf("* Código: %s\n", codigo2);
    printf("* Estado: %s\n", estado2);
    printf("* Cidade: %s\n", nomeCidade2);
    printf("*===========================================================*\n");
    printf("* OPÇÕES DE DISPUTA:\n");
    printf("* [1] População\n* [2] Área\n* [3] PIB\n* [4] Densidade Populacional\n* [5] PIB per Capita\n* [6] Número de pontos turísticos\n* [7] Super Poder\n");
    printf("*\n* Insira a opção desejada:_");
    scanf("%d", menu);

    switch(menu) {
        case 1:
            if(populacao1 > populacao2){
                printf("** População: %s VENCE com a população de %u\n", nomeCidade1,populacao1);
            } else if(populacao1 == populacao2){
                printf("** População: %s EMPATA com %s.\n", nomeCidade1, nomeCidade2);
            }else{
                printf("** População: %s VENCE com a população de %u\n", nomeCidade2, populacao2);
            }
        break;
        case 2:
            if(area1 > area2){
                printf("** Área: Carta 1 VENCE com a área de %.2f\n", area1);
            } else if(area1 == area2){
                printf("** Área: Carta 1 EMPATA com a Carta 2.\n");
            }else{
                printf("** Área: Carta 2 VENCE com a área de %.2f\n", area2);
            }
        break;
        case 3:
            if(pib1 > pib2){
                printf("** PIB: Carta 1 VENCE com o PIB de R$%.2f\n", pib1);
            } else if(pib1 == pib2){
                printf("** PIB: Carta 1 EMPATA com a Carta 2.\n");
            }else{
                printf("** PIB: Carta 2 VENCE com o PIB de R$%.2f\n", pib2);
            }
        break;
        case 4:
            if(densidadePop1 < densidadePop2){
                printf("** Densidade Populacional: Carta 1 VENCE com %.2f habitantes por km².\n", densidadePop1);
            } else if(densidadePop1 == densidadePop2){
                printf("** Densidade Populacional: Carta 1 EMPATA com a Carta 2.\n");
            }else{
                printf("** Densidade Populacional: Carta 2 VENCE com %.2f habitantes por km².\n", densidadePop2);
            }
        break;
        case 5:
            if(pibPerCapita1 > pibPerCapita2){
                printf("** PIB per Capita: Carta 1 VENCE com o PIB de R$%.2f para cada habitante\n", pibPerCapita1);
            } else if(pibPerCapita1 == pibPerCapita2){
                printf("** PIB per Capita: Carta 1 EMPATA com a Carta 2.\n");
            }else{
                printf("** PIB per Capita: Carta 2 VENCE com o PIB de R$%.2f para cada habitante\n", pibPerCapita2);
            }
        break;
        case 6:
            if(numPontosTur1 > numPontosTur2){
                printf("** Número de pontos turísticos: Carta 1 VENCE com o total de %d pontos turísticos.\n", numPontosTur1);
            } else if(numPontosTur1 == numPontosTur2){
                printf("** Número de pontos turísticos: Carta 1 EMPATA com a Carta 2.\n");
            }else{
                printf("** Número de pontos turísticos: Carta 2 VENCE com o total de %d pontos turísticos.\n", numPontosTur2);
            }
        break;
        case 7:
            if(superPoder1 > superPoder2){
                printf("** Super Poder: Carta 1 VENCE com %.2f pontos de SUPER PODER.\n", superPoder1);
            } else if(superPoder1 == superPoder2){
                printf("** Super Poder: Carta 1 EMPATA com a Carta 2.\n");
            }else{
                printf("** Super Poder: Carta 2 VENCE com %.2f pontos de SUPER PODER.\n", superPoder2);
            }
        break;
        default:
            printf("Opção inválida, tente novamente.\n");

    }
}