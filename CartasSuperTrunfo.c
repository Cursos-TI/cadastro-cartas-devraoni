//Carta 1 pronta

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Dados da Carta 1
  
  char estado1 = 'A';
  char codigo1[5] = "A01";
  char cidade1[20] = "SaoPaulo";
  int populacao1 = 12325000;
  float area1 = 1521.11;
  float pib1 = 699.28;
  int pontosturisticos1 = 50;

//Dados da Carta 2
  
  char estado2 = 'B';
  char codigo2[5] = "B02";
  char cidade2[20] = "RiodeJaneiro";
  int populacao2 = 6748000;
  float area2 = 1200.25;
  float pib2 = 300.50;
  int pontosturisticos = 30;
  
  // Área para entrada de dados

  // Exibição da Carta 1
 
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %i\n", populacao1);
  printf("Área: %.2f km²\n", area1); //o C entende o km², logo a solução foi escreve-lo de forma simples
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Números de Pontos Turísticos: %d\n", pontosturisticos1);

  // Exibição da Carta 2
 
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %i\n", populacao2);
  printf("Área: %.2f km²\n", area2); //o C entende o km², logo a solução foi escreve-lo de forma simples
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Números de Pontos Turísticos: %d\n", pontosturisticos2);

return 0;
} 

