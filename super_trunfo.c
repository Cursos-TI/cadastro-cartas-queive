#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 // Variaveis Primeira Carta
  char estadoA;
  char CodcartaA[4];
  char nomeA[20];
  int populacaoA, TuristicoA;
  float AreaA, PibA;

  //Variaveis Segunda Carta
  char EstadoB;
  char CodcartaB[4];
  char nomeB[20];
  int populacaoB, TuristicoB;
  float AreaB, PibB;
  // Área para entrada de dados
  //Primeira Carta
  printf("Cadastro da Carta A\n");
  printf("\n");
  printf("Informe o estado -  A: ");
  scanf(" %c", &estadoA);
  printf("Informe o Codigo da Carta - A: ");
  scanf("%s", &CodcartaA);
  printf("(Utilize (_) como espaço) Informe o nome da cidade da carta - A: ");
  scanf("%s", &nomeA);
  printf("Informe o numero da população da carta - A: ");
  scanf("%i", &populacaoA);
  printf("Informe o tamanho da Área(km²) da carta - A: ");
  scanf("%f", &AreaA);
  printf("Informe o valor do PIB em bilhões de Reais da carta - A: ");
  scanf("%f", &PibA);
  printf("Informe o Número de pontos turisticos da carta - A: ");
  scanf("%i", &TuristicoA);

  //Segunda Carta
  printf("\n");
  printf("Cadastro da Carta B\n");
  printf("\n");
  printf("Informe o estado -  B: ");
  scanf(" %c", &EstadoB);
  printf("Informe o Codigo da Carta - B: ");
  scanf("%s", &CodcartaB);
  printf("(Utilize (_) como espaço) Informe o nome da cidade da carta - B: ");
  scanf("%s", &nomeB);
  printf("Informe o numero da população da carta - B: ");
  scanf("%i", &populacaoB);
  printf("Informe o tamanho da Área(km²) da carta - B: ");
  scanf("%f", &AreaB);
  printf("Informe o valor do PIB em bilhões de Reais da carta - B: ");
  scanf("%f", &PibB);
  printf("Informe o Número de pontos turisticos da carta - B: ");
  scanf("%i", &TuristicoB);
  // Área para exibição dos dados da cidade

  printf("\n");
  printf("Carta 1:\n");
  printf("1° Carta Estado escolhido foi: %c\n", estadoA);
  printf("1° Carta codigo foi: %s\n", CodcartaA);
  printf("1° Carta nome escolhido foi: %s\n", nomeA);
  printf("1° Carta numero da população é: %i\n", populacaoA);
  printf("1° Carta tamanho da área é: %.2fkm²\n", AreaA);
  printf("1° Carta Valor do PIB é: %.2f Bilhões de Reais\n", PibA);
  printf("1° Carta Numero de pontos Turisticos é: %i\n", TuristicoA);
  printf("\n");
  printf("Carta 2:\n");
  printf("2° Carta Estado escolhido foi: %c\n", EstadoB);
  printf("2° Carta codigo foi: %s\n", CodcartaB);
  printf("2° Carta nome escolhido foi: %s\n", nomeB);
  printf("2° Carta numero da população é: %i\n", populacaoB);
  printf("2° Carta tamanho da área é: %.2fkm²\n", AreaB);
  printf("2° Carta Valor do PIB é: %.2f Bilhões de Reais\n", PibB);
  printf("2° Carta Numero de pontos Turisticos é: %i\n", TuristicoB);

return 0;
} 
