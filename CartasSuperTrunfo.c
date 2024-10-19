#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // definindo variáveis separadas para cada atributo da cidade

    char codigo[4];
    char nome_cidade[60];
    long int populacao = 0; // tipo de dado com maior precisão para números inteiros grandes 
    double area = 0; // inicializando variáveis para evitar lixo na memória 
    double pib = 0; // usando double para maior precisão para números float grandes
    int pontos_turisticos = 0;
    
    // cadastro das cartas e instrucoes de cadastramento

    printf("Olá! Seja bem-vindo(a) ao cadastramento de cartas do Super Trunfo - Países\n ------------------------------ \n\n");
    printf("Para cadastrar o código de sua carta:\n");
    printf("Utilize uma letra de A a H para indicar o Estado e um número de 01 a 04 para indicar a Cidade.\nEx: A01\n\n");
    printf("Digite o Código de Carta desejado: \n");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade - não use espaço ( ) e sim underline (_) para separar os nomes. (Ex: Belo_Horizonte): \n"); // não consegui funcionar com cidades com espaço, sendo assim, a ideia foi utilizar o underline no lugar para fazer funcionar
    scanf("%s", &nome_cidade);
    printf("Digite o número total de habitantes da cidade sem pontos ou vírgulas (Ex: 20000000): \n");
    scanf("%ld", &populacao);
    printf("Digite a área da cidade (em km²): \n");
    scanf("%lf", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib);
    printf("Digite o número de pontos turísticos encontrados na cidade: \n");
    scanf("%d", &pontos_turisticos);
    
    // exibindo os Dados das Cartas:

    printf("\nCarta cadastrada!\nVeja abaixo as informações:\n\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome_cidade);
    printf("População: %ld habitantes\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}


