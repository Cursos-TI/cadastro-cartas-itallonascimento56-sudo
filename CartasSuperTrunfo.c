#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
int populacao, pontosturisticos, populacao2, pontosturisticos2;
char estadonome[20], estadonome2[20], estado[20], estado2[20], nomedacidade[20], nomedacidade2[20], codigo[4],codigo2[4];
double area, area2, pib, pib2, pibpercapta1, pibpercapta2, desindade1, desindade2;  
// Área para entrada de dados

  //CARTA 1

printf("CARTA 1\n");

printf("Qual a letra que representará o estado?");
scanf("%s",estado);

printf("Qual qual o nome do estado?");
scanf("%s",estadonome);

printf("Qual o nome da cidade?");
scanf("%s",nomedacidade);

printf("Qual o código representará essa cidade?");
scanf("%s",codigo);

printf("Quantos habitantes há nessa cidade?");
scanf("%i",&populacao);

printf("Quantos pontos turísticos existem nessa cidade?");
scanf("%i",&pontosturisticos);

printf("Qual a área dessa cidade?");
scanf("%lf",&area);

printf("Qual o valor do PIB dessa cidade?");
scanf("%lf",&pib);

  //CARTA 2

printf("\n");

printf("CARTA 2\n");

printf("Qual a letra que representará o estado?");
scanf("%s",estado2);

printf("Qual o nome do estado?");
scanf("%s",estadonome2);

printf("Qual o nome da cidade?");
scanf("%s",nomedacidade2);

printf("Qual o código representará essa cidade?");
scanf("%s",codigo2);

printf("Quantos habitantes há nessa cidade?");
scanf("%i",&populacao2);

printf("Quantos pontos turísticos existem nessa cidade?");
scanf("%i",&pontosturisticos2);

printf("Qual a área dessa cidade?");
scanf("%lf",&area2);

printf("Qual o valor do PIB dessa cidade?");
scanf("%lf",&pib2);

// calculo do pib percapta e a densindade populacional

pibpercapta1 = pib / populacao;

pibpercapta2 = pib2 / populacao2;

desindade1 = populacao / area;

desindade2 = populacao2 /area2;



// Exibição da CARTA 1
printf("\n");  

printf("=-=-CARTA 1-=-=\n");
printf("Estado: %s\n",estadonome);
printf("Letra: %s\n",estado);
printf("Cidade: %s\n",nomedacidade);
printf("Código: %s\n",codigo);
printf("Habitantes: %i\n",populacao);
printf("Pontos turísticos: %i\n",pontosturisticos);
printf("Área em km²: %.2lf\n",area);
printf("PIB: %.2lf\n",pib);
printf("\n");
printf("PIB per capta: %.2lf\n",pibpercapta1);
printf("Desindade demográfica: %.2lf\n",desindade1);

printf("\n");

printf("=-=-CARTA 2-=-=\n");
printf("Estado: %s\n",estadonome2);
printf("Letra: %s\n",estado2);
printf("Cidade: %s\n",nomedacidade2);
printf("Código: %s\n",codigo2);
printf("Habitantes: %i\n",populacao2);
printf("Pontos turísticos: %i\n",pontosturisticos2);
printf("Área em km²: %.2lf\n",area2);
printf("PIB: %.2lf\n",pib2);
printf("\n");
printf("PIB per capta: %.2lf\n",pibpercapta2);
printf("Desindade demográfrica: %.2lf\n",desindade2);



return 0;
} 

