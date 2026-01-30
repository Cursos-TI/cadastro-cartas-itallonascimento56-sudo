#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
int populacao, pontosturisticos, populacao2, pontosturisticos2;
char estadonome[20], estadonome2[20], estado[20], estado2[20], nomedacidade[20], nomedacidade2[20], codigo[4],codigo2[4];
float area, area2, pib, pib2;
  
  // Área para entrada de dados
printf("CARTA 1\n");

printf("Qual a letra que representará o estado?");
scanf("%s",estado);

printf("Qual o nome da cidade?");
scanf("%s",nomedacidade);

printf("Qual o código representará essa cidade?");
scanf("%s",codigo);

printf("Quantos habitantes há nessa cidade?");
scanf("%i",&populacao);

printf("Quantos pontos turísticos existem nessa cidade?");
scanf("%i",&pontosturisticos);

printf("Qual a área dessa cidade?");
scanf("%f",&area);

printf("Qual o valor do PIB dessa cidade?");
scanf("%f",&pib);

printf("\n");

printf("CARTA 2\n");

printf("Qual a letra que representará o estado?");
scanf("%s",estado2);

printf("Qual o nome da cidade?");
scanf("%s",nomedacidade2);

printf("Qual o código representará essa cidade?");
scanf("%s",codigo2);

printf("Quantos habitantes há nessa cidade?");
scanf("%i",&populacao2);

printf("Quantos pontos turísticos existem nessa cidade?");
scanf("%i",&pontosturisticos2);

printf("Qual a área dessa cidade?");
scanf("%f",&area2);

printf("Qual o valor do PIB dessa cidade?");
scanf("%f",&pib2);



  // Exibição da CARTA 1
printf("\n");  

printf("=-=-CARTA 1-=-=\n");
printf("Estado: %s\n",estadonome);
printf("Letra: %s\n",estado);
printf("Cidade: %s\n",nomedacidade);
printf("Código: %s\n",codigo);
printf("Habitantes: %i\n",populacao);
printf("Pontos turísticos: %i\n",pontosturisticos);
printf("Área em m²: %.2f\n",area);
printf("PIB: %.2f\n",pib);

printf("\n");

printf("=-=-CARTA 2-=-=\n");
printf("Estado: %s\n",estadonome2);
printf("Letra: %s\n",estado2);
printf("Cidade: %s\n",nomedacidade2);
printf("Código: %s\n",codigo2);
printf("Habitantes: %i\n",populacao2);
printf("Pontos turísticos: %i\n",pontosturisticos2);
printf("Área em m²: %.2f\n",area2);
printf("PIB: %.2f\n",pib2);



return 0;
} 

