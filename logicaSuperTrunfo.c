// Autor: Diego dos Santos Oliveira 
// Matrícula: 2025 0372 2821
// Introdução à Programação de Computadores
// Tema 2 - Desafio Nível Mestre: Implementando Comparações Avançadas com Atributos Múltiplos em C'
#include <stdio.h>

int main() {
    //Declaração de variáveis
    int disputa1, disputa2;
    char estado1[5] = "RS";
    char codigo1[5] = "A01";
    char nomeCidade1[20] = "Santiago";
    int numPontosTur1 = 15;
    unsigned long int populacao1 = 48938;
    float area1 = 2413.075;
    float pib1 = 2055396000;

    char estado2[5] = "SC";
    char codigo2[5] = "B02";
    char nomeCidade2[20] = "Pomerode";
    int numPontosTur2 = 10;
    unsigned long int populacao2 = 34289;
    float area2 = 214.299;    
    float pib2 = 2784118328.63;
    float densidadePop1, densidadePop2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;
    int menu1, menu2;

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
    printf("* DISPUTA 1:\n");
    printf("* [1] População\n* [2] Área\n* [3] PIB\n* [4] Densidade Populacional\n* [5] PIB per Capita\n* [6] Número de pontos turísticos\n");
    printf("*\n* Insira a opção desejada:_");
    scanf("%d", &menu1);

    switch(menu1) {
        case 1:
            printf("*\n* Cidade 1: %s\n* População: %lu habitantes.\n", nomeCidade1, populacao1);
            printf("*\n* Cidade 2: %s\n* População: %lu habitantes.\n", nomeCidade2, populacao2);
            disputa1 = populacao1 > populacao2 ? 1 : 2;
            printf("*\n* O vencedor da maior população é Cidade %i!\n", disputa1);
        break;
        case 2:
            printf("*\n* Cidade 1: %s\n* Área: %.2f km².\n", nomeCidade1, area1);
            printf("*\n* Cidade 2: %s\n* Área: %.2f km².\n", nomeCidade2, area2);
            disputa1 = area1 > area2 ? 1 : 2;
            printf("*\n* O vencedor da maior Área é Cidade %i!\n", disputa1);
        break;
        case 3:
            printf("*\n* Cidade 1: %s\n* PIB: R$%.2f.\n", nomeCidade1, pib1);
            printf("*\n* Cidade 2: %s\n* PIB: R$%.2f.\n", nomeCidade2, pib2);
            disputa1 = pib1 > pib2 ? 1 : 2;
            printf("*\n* O vencedor do maior PIB é Cidade %i!\n", disputa1);
        break;
        case 4:
            printf("*\n* Cidade 1: %s\n* Densidade Populacional: %.2f habitantes/km².\n", nomeCidade1, densidadePop1);
            printf("*\n* Cidade 2: %s\n* Densidade Populacional: %.2f habitantes/km².\n", nomeCidade2, densidadePop2);
            disputa1 = densidadePop1 < densidadePop2 ? 1 : 2;
            printf("*\n* O vencedor da menor densidade populacional é Cidade %i!\n", disputa1);
        break;
        case 5:
            printf("*\n* Cidade 1: %s\n* PIB per Capita: R$%.2f.\n", nomeCidade1, pibPerCapita1);
            printf("*\n* Cidade 2: %s\n* PIB per Capita: R$%.2f.\n", nomeCidade2, pibPerCapita2);
            disputa1 = pibPerCapita1 > pibPerCapita2 ? 1 : 2;
            printf("*\n* O vencedor do maior PIB per Capita é Cidade %i!\n", disputa1);
        break;
        case 6:
            printf("*\n* Cidade 1: %s\n* Número de pontos turísticos: %d.\n", nomeCidade1, numPontosTur1);
            printf("*\n* Cidade 2: %s\n* Número de pontos turísticos: %d.\n", nomeCidade2, numPontosTur2);
            disputa1 = numPontosTur1 > numPontosTur2 ? 1 : 2;
            printf("*\n* O vencedor com maior quantidade de pontos turísticos é Cidade %i!\n", disputa1);
        break;
        default:
            printf("Opção inválida, tente novamente.\n");

    }
    printf("*===========================================================*\n");
    printf("* DISPUTA 2:\n");
    printf("* [1] População\n* [2] Área\n* [3] PIB\n* [4] Densidade Populacional\n* [5] PIB per Capita\n* [6] Número de pontos turísticos\n");
    printf("*\n* Insira a opção desejada:_");
    scanf("%d", &menu2);

    if(menu2 == menu1){
        printf("\n* Escolha uma opção diferente da Disputa 1!!!\n");
        printf("* [1] População\n* [2] Área\n* [3] PIB\n* [4] Densidade Populacional\n* [5] PIB per Capita\n* [6] Número de pontos turísticos\n");
        printf("*\n* Insira a opção desejada:_");
        scanf("%d", &menu2);
    }

    switch(menu2) {
        case 1:
            printf("*\n* Cidade 1: %s\n* População: %lu habitantes.\n", nomeCidade1, populacao1);
            printf("*\n* Cidade 2: %s\n* População: %lu habitantes.\n", nomeCidade2, populacao2);
            disputa2 = populacao1 > populacao2 ? 1 : 2;
            printf("*\n* O vencedor da maior população é Cidade %i!\n", disputa2);
        break;
        case 2:
            printf("*\n* Cidade 1: %s\n* Área: %.2f km².\n", nomeCidade1, area1);
            printf("*\n* Cidade 2: %s\n* Área: %.2f km².\n", nomeCidade2, area2);
            disputa2 = area1 > area2 ? 1 : 2;
            printf("*\n* O vencedor da maior Área é Cidade %i!\n", disputa2);
        break;
        case 3:
            printf("*\n* Cidade 1: %s\n* PIB: R$%.2f.\n", nomeCidade1, pib1);
            printf("*\n* Cidade 2: %s\n* PIB: R$%.2f.\n", nomeCidade2, pib2);
            disputa2 = pib1 > pib2 ? 1 : 2;
            printf("*\n* O vencedor do maior PIB é Cidade %i!\n", disputa2);
        break;
        case 4:
            printf("*\n* Cidade 1: %s\n* Densidade Populacional: %.2f habitantes/km².\n", nomeCidade1, densidadePop1);
            printf("*\n* Cidade 2: %s\n* Densidade Populacional: %.2f habitantes/km².\n", nomeCidade2, densidadePop2);
            disputa2 = densidadePop1 < densidadePop2 ? 1 : 2;
            printf("*\n* O vencedor da menor densidade populacional é Cidade %i!\n", disputa2);
        break;
        case 5:
            printf("*\n* Cidade 1: %s\n* PIB per Capita: R$%.2f.\n", nomeCidade1, pibPerCapita1);
            printf("*\n* Cidade 2: %s\n* PIB per Capita: R$%.2f.\n", nomeCidade2, pibPerCapita2);
            disputa2 = pibPerCapita1 > pibPerCapita2 ? 1 : 2;
            printf("*\n* O vencedor do maior PIB per Capita é Cidade %i!\n", disputa2);
        break;
        case 6:
            printf("*\n* Cidade 1: %s\n* Número de pontos turísticos: %d.\n", nomeCidade1, numPontosTur1);
            printf("*\n* Cidade 2: %s\n* Número de pontos turísticos: %d.\n", nomeCidade2, numPontosTur2);
            disputa2 = numPontosTur1 > numPontosTur2 ? 1 : 2;
            printf("*\n* O vencedor com maior quantidade de pontos turísticos é Cidade %i!\n", disputa2);
        break;
        default:
            printf("Opção inválida, tente novamente.\n");

    }

    if(disputa1 != disputa2){
        printf("*\n*===========================================================*\n");
        printf("*\n* Carta 1 e Carta 2 EMPATAM, com uma vitória cada.\n*\n*");
    }else{
        printf("*\n*===========================================================*\n");
        printf("*\n* Carta %i VENCE as duas disputas!\n*\n*", disputa1);
    }


}