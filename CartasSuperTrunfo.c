#include<stdio.h>
struct Carta {
    char estado;
    char cidade;
    int populacao;
    float area;
    float pib;
    int pontos;
};
struct Carta carta1, carta2;

//ENTRADA PARA ESCREVER CARTA1

void entrada1(){
    printf("Digite o estado da carta 1: ");
    scanf("%c", &carta1.estado);
    printf("Digite a cidade da carta 1: ");
    scanf("%c", &carta1.cidade);
    printf("Digite a populacao da carta 1: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a area da carta 1: ");
    scanf("%f", &carta1.area);
    printf("Digite o pib da carta 1: ");
    scanf("%f", &carta1.pib);
    printf("Digite os pontos turisticos da carta 1: ");
    scanf("%d", &carta1.pontos);
}
//ENTRADA PARA ESCREVER CARTA2  
void entrada2(){
    printf("Digite o estado da carta 1: ");
    scanf("%c", &carta2.estado);
    printf("Digite a cidade da carta 1: ");
    scanf("%c", &carta2.cidade);
    printf("Digite a populacao da carta 1: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a area da carta 1: ");
    scanf("%f", &carta2.area);
    printf("Digite o pib da carta 1: ");
    scanf("%f", &carta2.pib);
    printf("Digite os pontos turisticos da carta 1: ");
    scanf("%d", &carta2.pontos);
}