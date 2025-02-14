#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste do Willian Quirino

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Declaração das variáveis
    char nomedopais[20];
    char nomedoestado[20];
    char codigodoestado[1];
    char nomedacidade[20];
    char codigodacidade[2];
    char codigodacarta[3];
    int populacao;
    int pontosturisticos;
    float area;
    float pib;

    // Entrada e saída de dados com as funções scanf e printf.
    printf("Digite o nome do país:\n");
    scanf("%s", &nomedopais);

    printf("Digite o nome do estado:\n");
    scanf("%s", &nomedoestado);

    printf("Digite o código do estado:\n");
    scanf("%s", &codigodoestado);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomedacidade);

    printf("Digite o código da cidade:\n");
    scanf("%s", &codigodacidade);

    printf("Digite o código da carta (código do estado + código da cidade):\n");
    scanf("%s", &codigodacidade);

    printf("Digite a quantidada da população:\n");
    scanf("%d", &populacao);

    printf("Digite quantos pontos turisticos a cidade possui:\n");
    scanf("%d", &pontosturisticos);

    printf("Digite a área da cidade:\n");
    scanf("%2f", &area);

    printf("Digite o PIB da cidade:\n");
    scanf("%2f", &pib);

    // Impressão das informações recebidas.
    printf("Nome do país: %s\nNome do estado: %s\nCódigo do estado: %s\n", nomedopais, nomedoestado, codigodoestado);
    printf("Nome da cidade: %s\nCódigo da cidade: %s\nCódigo da carta: %s", nomedacidade, codigodacidade, codigodacarta);

    return 0;
}
