// Autor: Diego dos Santos Oliveira 
// Matrícula: 2025 0372 2821
// Introdução à Programação de Computadores
// Tema 2 - Desafio Nível Novato: Comparando as Cartas do Super Trunfo

#include <stdio.h>

int main() {

    //Declaração de variáveis

    char estado1, estado2, codigo1[3], codigo2[3], nomeCidade1[20], nomeCidade2[20];
    int numPontosTur1, numPontosTur2, atributoVencedor1, atributoVencedor2;
    unsigned long int populacao1;
    unsigned long int populacao2;
    float area1, area2, pib1, pib2, densidadePop1, densidadePop2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;

    // Cadastro das Cartas:
 
    //Coleta de dados

    printf("Bem vindo ao SUPER TRUNFO - PAÍSES, neste módulo iremos cadastrar nossas cartas. \nSiga as instruções até o final para confirmar o cadastramento. \n \nCADASTRAMENTO DA CARTA 1 \n \nEstado (1 caractere de 'A' a 'H'): ");
    scanf("%s", &estado1);

    printf("\nCódigo da Carta (Código do estado seguido de 2 dígitos numéricos): ");
    scanf("%s", codigo1);

    printf("\nNome da Cidade: ");
    scanf("%s", &nomeCidade1);

    printf("\nPopulação: ");
    scanf("%lu", &populacao1);

    printf("\nÁrea (km²): ");
    scanf("%f", &area1);

    printf("\nPIB: ");
    scanf("%f", &pib1);

    printf("\nNúmero de pontos turísticos: ");
    scanf("%d", &numPontosTur1);

    densidadePop1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) pib1 / populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + numPontosTur1 + pibPerCapita1 + (1/densidadePop1);

    printf("Carta 1 Cadastrada com sucesso. \n \n \nCADASTRAMENTO DA CARTA 2 \n \nEstado (1 caractere de 'A' a 'H'): ");
    scanf("%s", &estado2);

    printf("\nCódigo da Carta (Código do estado seguido de 2 dígitos numéricos): ");
    scanf("%s", codigo2);

    printf("\nNome da Cidade: ");
    scanf("%s", &nomeCidade2);

    printf("\nPopulação: ");
    scanf("%lu", &populacao2);

    printf("\nÁrea (km²): ");
    scanf("%f", &area2);

    printf("\nPIB: ");
    scanf("%f", &pib2);

    printf("\nNúmero de pontos turísticos: ");
    scanf("%d", &numPontosTur2);

    densidadePop2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2 / populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + numPontosTur2 + pibPerCapita2 + (1/densidadePop2);

    printf("\nCarta 2 cadastrada com sucesso\n");

    //Impressão dos dados

    printf("******************************\n     SUPER TRUNFO - PAÍSES \n******************************\n");
    printf("* CARTA 1 \n* \n");
    printf("** Estado: %c\n", estado1);
    printf("** Código: %s\n", codigo1);
    printf("** Nome da Cidade: %s\n", nomeCidade1);
    printf("** População: %u\n", populacao1);
    printf("** Área: %.2f km²\n", area1);
    printf("** PIB: %.2f\n", pib1);
    printf("** Densidade Populacional: %.2f\n", densidadePop1);
    printf("** PIB per Capita: %.2f\n", pibPerCapita1);
    printf("** Número de pontos turísticos: %d\n", numPontosTur1);
    printf("** Super Poder: %.2f\n", superPoder1);
    printf("******************************\n");
    printf("* CARTA 2 \n* \n");
    printf("** Estado: %c\n", estado2);
    printf("** Código: %s\n", codigo2);
    printf("** Nome da Cidade: %s\n", nomeCidade2);
    printf("** População: %u\n", populacao2);
    printf("** Área: %.2f km² \n", area2);
    printf("** PIB: %.2f\n", pib2);
    printf("** Densidade Populacional: %.2f\n", densidadePop2);
    printf("** PIB per Capita: %.2f\n", pibPerCapita2);
    printf("** Número de pontos turísticos: %d\n", numPontosTur2);
    printf("** Super Poder: %.2f\n", superPoder2);
    printf("******************************\n*\n");
    printf("* COMPARATIVO DOS ATRIBUTOS:\n**\n");
    atributoVencedor1 = 0;
    atributoVencedor2 = 0;
    //População
    if(populacao1 > populacao2){
        printf("** População: Carta 1 VENCE com a população de %u\n", populacao1);
        atributoVencedor1++;
    } else if(populacao1 == populacao2){
        printf("** População: Carta 1 EMPATA com a Carta 2.\n");
    }else{
        printf("** População: Carta 2 VENCE com a população de %u\n", populacao2);
        atributoVencedor2++;
    }
    //Área
    if(area1 > area2){
        printf("** Área: Carta 1 VENCE com a área de %.2f\n", area1);
        atributoVencedor1++;
    } else if(area1 == area2){
        printf("** Área: Carta 1 EMPATA com a Carta 2.\n");
    }else{
        printf("** Área: Carta 2 VENCE com a área de %.2f\n", area2);
        atributoVencedor2++;
    }
    //PIB
    if(pib1 > pib2){
        printf("** PIB: Carta 1 VENCE com o PIB de R$%.2f\n", pib1);
        atributoVencedor1++;
    } else if(pib1 == pib2){
        printf("** PIB: Carta 1 EMPATA com a Carta 2.\n");
    }else{
        printf("** PIB: Carta 2 VENCE com o PIB de R$%.2f\n", pib2);
        atributoVencedor2++;
    }
    //Densidade populacional
    if(densidadePop1 < densidadePop2){
        printf("** Densidade Populacional: Carta 1 VENCE com %.2f habitantes por km².\n", densidadePop1);
        atributoVencedor1++;
    } else if(densidadePop1 == densidadePop2){
        printf("** Densidade Populacional: Carta 1 EMPATA com a Carta 2.\n");
    }else{
        printf("** Densidade Populacional: Carta 2 VENCE com %.2f habitantes por km².\n", densidadePop2);
        atributoVencedor2++;
    }
    //PIB per capita
    if(pibPerCapita1 > pibPerCapita2){
        printf("** PIB per Capita: Carta 1 VENCE com o PIB de R$%.2f para cada habitante\n", pibPerCapita1);
        atributoVencedor1++;
    } else if(pibPerCapita1 == pibPerCapita2){
        printf("** PIB per Capita: Carta 1 EMPATA com a Carta 2.\n");
    }else{
        printf("** PIB per Capita: Carta 2 VENCE com o PIB de R$%.2f para cada habitante\n", pibPerCapita2);
        atributoVencedor2++;
    }
    //Pontos turisticos
    if(numPontosTur1 > numPontosTur2){
        printf("** Número de pontos turísticos: Carta 1 VENCE com o total de %d pontos turísticos.\n", numPontosTur1);
        atributoVencedor1++;
    } else if(numPontosTur1 == numPontosTur2){
        printf("** Número de pontos turísticos: Carta 1 EMPATA com a Carta 2.\n");
    }else{
        printf("** Número de pontos turísticos: Carta 2 VENCE com o total de %d pontos turísticos.\n", numPontosTur2);
        atributoVencedor2++;
    }
    //Super poder
    if(superPoder1 > superPoder2){
        printf("** Super Poder: Carta 1 VENCE com %.2f pontos de SUPER PODER.\n", superPoder1);
        atributoVencedor1++;
    } else if(superPoder1 == superPoder2){
        printf("** Super Poder: Carta 1 EMPATA com a Carta 2.\n");
    }else{
        printf("** Super Poder: Carta 2 VENCE com %.2f pontos de SUPER PODER.\n", superPoder2);
        atributoVencedor2++;
    }

    printf("******************************\n*\n");
    printf("* GRANDE VENCEDOR:\n**\n");
    if(atributoVencedor1 > atributoVencedor2){
        printf("** Carta 1 VENCE em %d atributos.\n", atributoVencedor1);
    }else if(atributoVencedor1 == atributoVencedor2){
        printf("** Carta 1 EMPATA com a Carta 2.\n");
    }else{
        printf("** Carta 2 VENCE em %d atributos.\n", atributoVencedor2);
    }

    
    printf("*\n*\n*\n* Fim \n \n");

    return 0;
}
