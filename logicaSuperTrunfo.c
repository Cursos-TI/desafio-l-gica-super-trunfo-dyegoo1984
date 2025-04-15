// Autor: Diego dos Santos Oliveira 
// Matrícula: 2025 0372 2821
// Introdução à Programação de Computadores
// Tema 2 - Desafio Nível Novato: Comparando as Cartas do Super Trunfo

#include <stdio.h>

int main() {
    //Declaração de variáveis

    char estado1[2] = "RS";
    char codigo1[3] = "A01";
    char nomeCidade1[20] = "Santiago";
    int numPontosTur1 = 15;
    unsigned long int populacao1 = 48938;
    float area1 = 2413.075;
    float pib1 = 2055396000;

    char estado2[2] = "SC";
    char codigo2[3] = "B02";
    char nomeCidade2[20] = "Pomerode";
    int numPontosTur2 = 10;
    unsigned long int populacao2 = 34289;
    float area2 = 214.299;    
    float pib2 = 2784118328.63;
    float densidadePop1, densidadePop2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;
    int menu;

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
    printf("* [1] População\n* [2] Área\n* [3] PIB\n* [4] Densidade Populacional\n* [5] PIB per Capita\n* [6] Número de pontos turísticos\n");
    printf("*\n* Insira a opção desejada:_");
    scanf("%d", &menu);

    switch(menu) {
        case 1:
            if(populacao1 > populacao2){
                printf("** População: %s VENCE com a população de %p\n", nomeCidade1,populacao1);
            } else if(populacao1 == populacao2){
                printf("** População: %s EMPATA com %s.\n", nomeCidade1, nomeCidade2);
            }else{
                printf("** População: %s VENCE com a população de %p\n", nomeCidade2, populacao2);
            }
        break;
        case 2:
            if(area1 > area2){
                printf("** Área: %s VENCE com a área de %.2f\n",nomeCidade1, area1);
            } else if(area1 == area2){
                printf("** Área: %s EMPATA com %s.\n", nomeCidade1, nomeCidade2);
            }else{
                printf("** Área: %s VENCE com a área de %.2f\n", nomeCidade2, area2);
            }
        break;
        case 3:
            if(pib1 > pib2){
                printf("** PIB: %s VENCE com o PIB de R$%.2f\n", nomeCidade1, pib1);
            } else if(pib1 == pib2){
                printf("** PIB: %s EMPATA com %s.\n", nomeCidade1, nomeCidade2);
            }else{
                printf("** PIB: %s VENCE com o PIB de R$%.2f\n", nomeCidade2, pib2);
            }
        break;
        case 4:
            if(densidadePop1 < densidadePop2){
                printf("** Densidade Populacional: %s VENCE com %.2f habitantes por km².\n", nomeCidade1, densidadePop1);
            } else if(densidadePop1 == densidadePop2){
                printf("** Densidade Populacional: %s EMPATA com a %s.\n", nomeCidade1, nomeCidade2);
            }else{
                printf("** Densidade Populacional: %s VENCE com %.2f habitantes por km².\n", nomeCidade2, densidadePop2);
            }
        break;
        case 5:
            if(pibPerCapita1 > pibPerCapita2){
                printf("** PIB per Capita: %s VENCE com o PIB de R$%.2f para cada habitante\n", nomeCidade1, pibPerCapita1);
            } else if(pibPerCapita1 == pibPerCapita2){
                printf("** PIB per Capita: %s EMPATA com %s.\n", nomeCidade1, nomeCidade2);
            }else{
                printf("** PIB per Capita: %s VENCE com o PIB de R$%.2f para cada habitante\n", nomeCidade2, pibPerCapita2);
            }
        break;
        case 6:
            if(numPontosTur1 > numPontosTur2){
                printf("** Número de pontos turísticos: %s VENCE com o total de %d pontos turísticos.\n", nomeCidade1, numPontosTur1);
            } else if(numPontosTur1 == numPontosTur2){
                printf("** Número de pontos turísticos: %s EMPATA com a %s.\n", nomeCidade1, nomeCidade2);
            }else{
                printf("** Número de pontos turísticos: %s VENCE com o total de %d pontos turísticos.\n", nomeCidade2, numPontosTur2);
            }
        break;
        default:
            printf("Opção inválida, tente novamente.\n");

    }
}