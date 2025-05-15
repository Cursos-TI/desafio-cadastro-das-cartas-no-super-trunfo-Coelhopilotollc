#include <stdio.h>

// Desafio Nível Novato Super Trunfo - Países: Brasil
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[21], nome2[21];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Cadastro de Cartas (Cidades)\n");
    printf("Carta 1:\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCarta 2:\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
