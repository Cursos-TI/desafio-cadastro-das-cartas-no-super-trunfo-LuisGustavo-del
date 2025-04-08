#include <stdio.h>

     //Desafio Super Trunfo - Países
int main() {
  
   int carta1, carta2;
   int turisticos1, turisticos2;
   int população1, população2;
   float area1, area2;
   float pib1, pib2; 
   char codigo1[50], codigo2[50];
   char cidade1[50], cidade2[50];
   char estado1[30], estado2[30];

     //Tema 1 - Cadastro da Carta 1
  printf("Carta 1\n");
  printf("Digite Seu Código 1: \n", codigo1);
  scanf("%s", &codigo1);
  printf("Digite Sua Cidade 1: \n", cidade1);
  scanf("%s", &cidade1);
  printf("Digite Seu Estado 1: \n", estado1);
  scanf("%s", &estado1);
  printf("Digite Número De Ponto Turistico 1: \n", turisticos1);
  scanf("%d", &turisticos1);
  printf("Digite Número De População 1: \n", população1);
  scanf("%d", &população1);
  printf("Digite Número De Area 1:  \n", area1);
  scanf("%f", &area1);
  printf("Digite Número De PIB 1:  \n", pib1);
  scanf("%f", &pib1);
   
     //Pular Linha para o Cadastro da carta 2
   printf("\n");

     //Tema 2 - Cadastro da Carta 2
  printf("Carta 2\n");
  printf("Digite Seu Código 2: \n", codigo2);
  scanf("%s", &codigo2);
  printf("Digite Sua Cidade 2: \n", cidade2);
  scanf("%s", &cidade2);
  printf("Digite Seu Estado 2: \n", estado2);
  scanf("%s", &estado2);
  printf("Digite Número De Ponto Turistico 2: \n", turisticos2);
  scanf("%d", &turisticos2);
  printf("Digite Número De População 2: \n", população2);
  scanf("%d", &população2);
  printf("Digite Número De Area 2: \n", area2);
  scanf("%f", &area2);
  printf("Digite Número De PIB 2:  \n", pib2);
  scanf("%f", &pib2);
   
     //Tema 3 - Adicionar Densidade Populacional é PIB Per Capita
     //Calcular a Densidade Populacional e Calcular o PIB per Capital
  float densidade1, densidade2;
  float pibcapital1, pibcapital2;
 
   densidade1= (float)(população1 / area1);
   densidade2= (float)(população2 / area2);
   pibcapital1= (float)(pib1 / população1);
   pibcapital2= (float)(pib1 / população2);

     //Tema 4 - Calcular Super Poder
  float superpoder1;
  float superpoder2;
  float inversodensidade1;
  float inversodensidade2;

   inversodensidade1 = 1/densidade1;
   inversodensidade2 = 1/densidade2;

   superpoder1 = ((float)população1 + area1 + pib1 + turisticos1 + pibcapital1 + inversodensidade1);
   superpoder2 = ((float)população2 + area2 + pib2 + turisticos2 + pibcapital2 + inversodensidade2);
    
     //Tema 5 - Exibindo o Resultado Final das cartas
     //Escrevendo os dados da Primeira carta 
     //Pular Linha para os dados da primeira carta
  printf("\n\n");

  printf("Carta 1\n");
  printf("Código 1: %s \n", codigo1);
  printf("Cidade 1: %s \n", cidade1);
  printf("Estado 1: %s \n", estado1);
  printf("Turistico 1: %d \n", turisticos1);
  printf("População 1: %d \n", população1);
  printf("Area 1: %.2f km² \n", area1);
  printf("PIB 1: %f Bilhões de reais\n", pib1);
  printf("Densidade Populacional 1: %.2f hab/km²\n", densidade1);
  printf("PIB Per Capital 1: %f reais\n", pibcapital1);
   
     //Pular Linha para os dados da segunda carta
   printf("\n\n");

     // Escrevendo os dados da segunda carta 

  printf("Carta 2\n");
  printf("Código 2: %s \n", codigo2);
  printf("Cidade 2: %s \n", cidade2);
  printf("Estado 2: %s \n", estado2);
  printf("Turistico 2: %d \n", turisticos2);
  printf("População 2: %d \n", população2);
  printf("Area 2: %.2f km²\n", area2);
  printf("PIB 2: %f Bilhões de reais\n", pib2);
  printf("Densidade Populacional 2: %.2f hab/km²\n", densidade2);
  printf("PIB Per Capital 2: %f reais\n", pibcapital2);
    
     //Tema 6 -Exibir os Resultados das Comparações das Cartas
     //Resultado 1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence
     //Pular Linha para os dados das Comparações Cartas
  printf("\n\n");

  printf("Comparação das Cartas\n");
  printf("População:%d\n", população1 > população2);
  printf("Área:%d\n", area1 > area2);
  printf("PIB:%d\n", pib1 > pib2);
  printf("Pontos Turísticos:%d\n", turisticos1 > turisticos2);
  printf("Densidade Populacional: %d\n", densidade1 > densidade2);
  printf("PIB per Capita: %d\n", pibcapital1 > pibcapital2);
  printf("Super Poder: %d\n", superpoder1 > superpoder2);

     //Pular Linha Para Mensagem Final 
  printf("\n");
  printf("Desafio Super Trunfo Finalizado!!");


    return 0;
}