//Carta 1 pronta

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  char estado = 'A';
  char codigo[5] = "A01";
  char cidade[20] = "SaoPaulo";
  int populacao = 12325000;
  float area = 1521.11;
  float pib = 699.28;
  int pontosturisticos = 50;

  // Área para exibição dos dados da cidade
 
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %i\n", populacao);
  printf("Área: %.2f km²\n", area); //o C entende o km², logo a solução foi escreve-lo de forma simples
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Números de Pontos Turísticos: %d\n", pontosturisticos);


return 0;
} 

