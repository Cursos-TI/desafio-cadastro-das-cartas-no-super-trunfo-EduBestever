#include<stdio.h>
//FUNÇÕES DE ENTRADA//
int main(){

char estado1,estado2;
char cidade1,cidade2;
int populacao1,populacao2;
float area1,area2;  
float pib1,pib2;
int pontos1,pontos2;

//OBS: ESQUECI DE USAR O \N. ISSO FEZ O CODIGO SE MISTURAR TODO NO PRINT!

// CODIGOS PARA FAZER A CARTA//
printf("CARTA 1 \n"); //print da carta 1

printf("Digite o estado 1(A-H): \n");   //print do estado
scanf(" %c",&estado1);//

printf("Digite a cidade 1(1-4): \n");   //print da cidade
scanf(" %c",&cidade1);

printf("Digite a populacao 1: \n");  //print populacao
scanf("%d",&populacao1);

printf("Digite a area 1: \n"); // print da area 
scanf("%f",&area1);

printf("Digite o pib 1: \n"); // população do país
scanf("%f",&pib1);

printf("Digite os pontos 1: \n");
scanf("%d",&pontos1);

printf("CARTA 2\n");

printf("Digite o estado 2(A-H): \n"); //print do estado2
scanf(" %c",&estado2);//
printf("Digite a cidade 2(1-4): \n");//print da cidade2
scanf(" %c",&cidade2);
printf("Digite a populacao 2: \n");//print populacao2
scanf("%d",&populacao2);
printf("Digite a area 2: \n"); // print da area2
scanf("%f",&area2);
printf("Digite o pib 2: \n"); // população do país2
scanf("%f",&pib2);
printf("Digite os pontos 2: \n");//pontos turisticos2
scanf("%d",&pontos2);


//PRINT DAS CARTAS 

printf("CARTA 1\n");
printf("Estado: %c0%c\n",estado1,cidade1);
printf("Populacao:%d\n",populacao1); 
printf("Area: %.1f\n",area1);
printf("PIB: %.1f\n",pib1);
printf("Pontos: %d\n",pontos1); 
printf("\n");
printf("CARTA 2\n");
printf("Estado: %c0%c\n",estado2,cidade2);
printf("Populacao: %d\n",populacao2);
printf("Area: %.1f\n",area2);
printf("PIB: %.1f\n",pib2);
printf("Pontos: %d\n",pontos2);
return 0;
}

 