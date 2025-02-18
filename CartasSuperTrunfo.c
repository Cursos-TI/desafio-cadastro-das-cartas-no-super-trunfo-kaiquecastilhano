#include <stdio.h>

int main(){
    char Populacao[10];
    int Turistico;
    char Area[10];
    char Pib[10];
    char snome[20] , nome[20];
    
    printf("Seja Bem Vindo ao SuperTrunfo\n");
    printf("Qual o nome do player?");
    scanf("%s", nome);
    printf("Aproveite O Jogo!\n", nome );
    printf("Bom, Vamos Começar a criação das suas cartas!\n");
    printf("Vamos começar com o mais simples.O nome da sua cidade, como ela se chama?");
    scanf("%s", snome);
    printf("Qual o tamanho da sua cidade?\n");
    scanf("%s", Area);
    printf("Caramba! e qual o tamanho da população dessa cidade?");
    scanf("%s", Populacao);
    printf("Qual o PIB ?");
    scanf("%s", Pib);
    printf("O Mais Importante!! Quantos pontos turisticos tem?");

   scanf("%d" , &Turistico);
    printf("Confirmação da sua Carta:\n");
    printf("Nome da cidade: %s\n" , snome);
    printf("Área Territorial: %s\n", Area);
    printf("Tamanho da População: %s\n" , Populacao);
    printf("O PIB da sua cidade é: %s \n" , Pib);
    printf(" Número de pontos turisticos são: %d\n", Turistico);
    
    return 0;
}