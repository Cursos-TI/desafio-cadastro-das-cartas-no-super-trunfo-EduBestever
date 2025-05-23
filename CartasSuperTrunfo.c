#include<stdio.h>

int main(){
    char estado, estado2;
    char cidade, cidade2;
    unsigned long populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos, pontos2;
    // CARTA 1 //
    printf("CARTA 1\n");
    printf("Digite o estado(A-H) da carta 1: \n");
    scanf(" %c", &estado);
    printf("Digite a cidade(1-4) da carta 1: ");
    scanf(" %c", &cidade);
    printf("Digite a populacao da carta 1: ");
    scanf("%d", &populacao);
    printf("Digite a area da carta 1: ");
    scanf("%f", &area);
    printf("Digite o pib da carta 1: ");
    scanf("%f", &pib);
    printf("Digite os pontos turisticos da carta 1: ");
    scanf("%d", &pontos);

    // CARTA 2 //
    printf("CARTA 2\n");
    printf("Digite o estado(A-H) da carta 2: \n");
    scanf(" %c", &estado2);
    printf("Digite a cidade(1-4) da carta 2: ");
    scanf(" %c", &cidade2);
    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a area da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o pib da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite os pontos turisticos da carta 2: ");
    scanf("%d", &pontos2);

    // DENSIDADE //
    float densidade = populacao / area;
    float densidade2 = populacao2 / area2;
    // PIB PER CAPITA //        
    float pibpercapita = pib / populacao;
    float pibpercapita2 = pib2 / populacao2;
//COMPARACÇÃO DE DADOS//
    unsigned comp_popu = (populacao > populacao2);
    unsigned comp_area = (area > area2);
    unsigned comp_pib = (pib > pib2);
    unsigned comp_pontos = (pontos > pontos2);
    unsigned comp_densidade = (densidade > densidade2);
    unsigned comp_pibpercapita = (pibpercapita > pibpercapita2);
    unsigned vencedor1 = (populacao+area+pib+pontos+densidade+pibpercapita);
    unsigned vencedor2 = (populacao2+area2+pib2+pontos2+densidade2+pibpercapita2);
   
    // IMPRIMIR //

    // CARTA 01 //
    printf("-------------------------\n");
    printf("Carta 1\n");
    printf("Estado: %c%c\n", estado, cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontos);
    printf("Densidade da carta 1: %.2f Hab/km\n", densidade);
    printf("PIB per capita da carta 1: %.2f Reais\n", pibpercapita);
    //CARTA 2// 
    printf("-------------------------\n");
    printf("Carta 2\n");
    printf("Estado: %c%c\n", estado2, cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade da carta 2: %.2f Hab/km\n", densidade2);
    printf("PIB per capita da carta 2: %.2f Reais\n", pibpercapita2);
    // IMPRIMIR COMPARACAO //
    printf("-------------------------\n");
    printf("Comparacao de dados:\n");
    printf("Populacao: %s\n", comp_popu ? "Carta 1" : "Carta 2"); // V : F
    printf("Area: %s\n", comp_area ? "Carta 1" : "Carta 2");
    printf("PIB: %s\n", comp_pib ? "Carta 1" : "Carta 2");
    printf("Pontos turisticos: %s\n", comp_pontos ? "Carta 1" : "Carta 2");
    printf("Densidade: %s\n", comp_densidade ? "Carta 1" : "Carta 2");
    printf("PIB per capita: %s\n", comp_pibpercapita ? "Carta 1" : "Carta 2");
    printf("Vencedor: %s\n", vencedor1 > vencedor2 ? "Carta 1" : "Carta 2");
    
    return 0;




}