#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

char estado[30];
char cidade[30];
char codigoCarta[20];
int Populacao;
float area;
float PIB;
int Pontos_Turisticos;

printf("Estado?\n");
scanf("%s", &estado);

printf("Qual o Nome da Cidade?\n");
scanf("%s", &cidade);

printf("insira o Código da Carta!\n");
scanf("%s", &codigoCarta);

printf("População?\n");
scanf("%d", &Populacao);

printf("Área da Cidade?\n");
scanf("%f", &area);

printf("PIB Da Sua Cidade?\n");
scanf("%f", &PIB);

printf("Quantos Pontos Turisticos Tem a Cidade?\n");
scanf("%d", &Pontos_Turisticos);

printf("Nome Da Cidade: %s\n", cidade);
printf("Código Da Carta: %s\n", codigoCarta);
printf("População: %d Pessoas\n", Populacao);
printf("Área: %6.2f km²\n", area);
printf("PIB: %6.2f R$\n", PIB);
printf("Pontos Turisticos: %d\n", Pontos_Turisticos);









    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
