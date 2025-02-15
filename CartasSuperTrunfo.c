#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste do Willian Quirino

int main()
{
    // Declaração das variáveis
    char nomedopais[20];
    char nomedoestado[20];
    char nomedacidade[20];
    char codigodoestado[1];
    char codigodacidade[2];
    char codigodacarta[3];
    int populacao;
    int pontosturisticos;
    float area;
    float pib;

    // Entrada e saída de dados com as funções scanf e printf.
    printf("Digite o nome do país:\n");
    scanf(" %s", &nomedopais);

    printf("Digite o nome do estado:\n");
    scanf(" %s", &nomedoestado);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &nomedacidade);

    printf("Digite o código do estado:\n");
    scanf(" %s", &codigodoestado);

    printf("Digite o código da cidade:\n");
    scanf("%s", &codigodacidade);

    printf("Digite o código da carta (código do estado + código da cidade):\n");
    scanf(" %s", &codigodacarta);

    printf("Digite a quantidada da população:\n");
    scanf(" %d", &populacao);

    printf("Digite quantos pontos turísticos a cidade possui:\n");
    scanf(" %d", &pontosturisticos);

    printf("Digite a área da cidade em km²:\n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib);

    // Impressão das informações recebidas.
    printf("Nome do país: %s\n", nomedopais);
    printf("Nome do estado: %s\nNome da cidade: %s\n", nomedoestado, nomedacidade);
    printf("Código do estado: %s\nCódigo da cidade: %s\n", codigodoestado, codigodacidade);
    printf("Código da carta: %s\n", codigodacarta);
    printf("Quantidade populacional: %d\nQuantidade de pontos turísticos: %d\n", populacao, pontosturisticos);
    printf("Área da cidade: %f km²\nPIB da cidade: %f\n", area, pib);

    return 0;
}
