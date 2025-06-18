#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
       // Carta 1
    char codigo1[4], nome1[50];
    int populacao1;
    float area1, pib1;

    // Carta 2
    char codigo2[4], nome2[50];
    int populacao2;
    float area2, pib2;
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    
    printf("Cadastro da Carta 1:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("\nCadastro da Carta 2:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    
    printf("\nComparação entre as cartas:\n");

    if (populacao1 > populacao2) {
        printf("A cidade %s tem maior população.\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("A cidade %s tem maior população.\n", nome2);
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    if (area1 > area2) {
        printf("A cidade %s tem maior área territorial.\n", nome1);
    } else if (area2 > area1) {
        printf("A cidade %s tem maior área territorial.\n", nome2);
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }

    if (pib1 > pib2) {
        printf("A cidade %s tem maior PIB.\n", nome1);
    } else if (pib2 > pib1) {
        printf("A cidade %s tem maior PIB.\n", nome2);
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    printf("\nResumo Final das Cartas:\n");

    printf("Carta 1 - %s (%s)\n", nome1, codigo1);
    printf("População: %d | Área: %.2f km² | PIB: %.2f bilhões\n", populacao1, area1, pib1);

    printf("\nCarta 2 - %s (%s)\n", nome2, codigo2);
    printf("População: %d | Área: %.2f km² | PIB: %.2f bilhões\n", populacao2, area2, pib2);

    return 0;
}
