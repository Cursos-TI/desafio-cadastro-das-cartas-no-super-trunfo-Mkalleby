#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int num_cidade, populacao, pontos_turisticos;
    char nome[50], codigo_cidade;
    float area, pib;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Olá seja bem vindo(a)\n");
    printf("Insira a letra do estado (De A - H): \n");
    scanf("%c", &codigo_cidade);
    printf("Insira o numero da cidade (De 1 a 4): \n");
    scanf("%d", &num_cidade);
    printf("Insira o nome da cidade: \n");
    scanf("%s", &nome);
    printf("Insira a polulação da cidade: \n");
    scanf("%d", &populacao);
    printf("Insira a área da cidade: \n");
    scanf("%f", &area);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Codigo da sua cidade: %c%d\n", codigo_cidade, num_cidade);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
