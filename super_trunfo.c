#include <stdio.h>

    // Desafio Super Trunfo - Países
int main() {
    
   int turisticos1, turisticos2;
   int população1, população2;
   float area1, area2;
   float pib1, pib2; 
   char codigo1[50], codigo2[50];
   char cidade1[50], cidade2[50];
   char estado1[30], estado2[30];

      // Tema 1 - Cadastro das Cartas
   printf("Digite Seu Código 1: \n", codigo1);
   scanf("%s", &codigo1);
   printf("Digite Seu Código 2: \n", codigo2);
   scanf("%s", &codigo2);

   printf("Digite Sua Cidade 1: \n", cidade1);
   scanf("%s", &cidade1);
   printf("Digite Sua Cidade 2: \n", cidade2);
   scanf("%s", &cidade2);

   printf("Digite Seu Estado 1: \n", estado1);
   scanf("%s", &estado1);
   printf("Digite Seu Estado 2: \n", estado2);
   scanf("%s", &estado2);

   printf("Digite Número De Ponto Turistico 1: \n", turisticos1);
   scanf("%d", &turisticos1);
   printf("Digite Número De Ponto Turistico 2: \n", turisticos2);
   scanf("%d", &turisticos2);

   printf("Digite Número De População 1: \n", população1);
   scanf("%d", &população1);
   printf("Digite Número De População 2: \n", população2);
   scanf("%d", &população2);

   printf("Digite Número De Area 1: \n", area1);
   scanf("%f", &area1);
   printf("Digite Número De Area 2:  \n", area2);
   scanf("%f", &area2);

   printf("Digite Número De PIB 1:  \n", pib1);
   scanf("%f", &pib1);
   printf("Digite Número De PIB 2:  \n", pib2);
   scanf("%f", &pib2);


      // Nível Aventureiro
     // Adicionar Densidade Populacional é PIB Per Capita
     float densidade1, densidade2;
     float PIB1, PIB2;
 
   densidade1= (float)(população1 / area1);
   densidade2= (float)(população2 / area2);
   PIB1= (float)(pib1 / população1);
   PIB2= (float)(pib1 / população2);
 

   //pular Linha para os dados da primeira carta
    printf("\n\n");
   
   //escrevendo os dados da primeira carta 
   printf("Carta 1:\n");
   printf("Código 1: %s \n", codigo1);
   printf("Cidade 1: %s \n", cidade1);
   printf("Estado 1: %s \n", estado1);
   printf("Turistico 1:%d \n", turisticos1);
   printf("População 1:%d \n", população1);
   printf("Area 1: %.2f km² \n", area1);
   printf("PIB 1: %f Bilhões de reais\n", pib1);
   printf("Densidade Populacional 1: %.2f hab/km²\n", densidade1);
   printf("PIB Per Capital 1: %f reais\n", PIB1);
   
   //pular Linha para os dados da segunda carta
     printf("\n\n");
   
   //escrevendo os dados da segunda carta 
    printf ("Carta 2:\n");
    printf("Código 2: %s \n", codigo2);
    printf("Cidade 2: %s \n", cidade2);
    printf("Estado 2: %s \n", estado2);
    printf("Turistico 2:%d \n", turisticos2);
    printf("População 2:%d \n", população2);
    printf("Area 2: %.2fkm²\n", area2);
    printf("PIB 2: %f Bilhões de reais\n", pib2);
    printf("Densidade Populacional 2: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capital 2: %f reais\n", PIB2);
  
   
    return 0;
}