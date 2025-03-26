#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Cadastro das Cartas:
    // Variáveis para guardar os atributos das cidades:
    int
        pontosTuristicos1,
        pontosTuristicos2,
        pontuacaoPrimeiraCidade = 0,
        pontuacaoSegundaCidade = 0;

    float
        area1,
        pib1,
        densidadePopulacional1,
        pibPerCapita1,
        area2,
        pib2,
        densidadePopulacional2,
        pibPerCapita2;

    // unasigned significa que a variável não aceitará valores negativos
    // o tipo long int é equivalente ao int, ocupando 4 bytes de memória e aceitando valores entre 0 e 4.294.967.295
    unsigned long int
        populacao1,
        populacao2;

    // Cadastro das Cartas:
    // Cadastro da Primeira Carta:
    printf("Preencha os dados da 1a cidade \n");
    printf("Informe a população: \n");
    scanf("%lu", &populacao1);

    printf("Informe a área: \n");
    scanf("%f", &area1);

    // Cálculo e atribuição da densidade populacional da primeira carta:
    densidadePopulacional1 = populacao1 / area1;

    printf("Informe o PIB: \n");
    scanf("%f", &pib1);

    // Cálculo e atribuição do PIB per Capita da primeira carta:
    pibPerCapita1 = pib1 / populacao1;

    printf("Informe quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Cadastro da Segunda Carta:
    printf("Preencha os dados da 2a cidade \n");
    printf("Informe a população: \n");
    scanf("%lu", &populacao2);

    printf("Informe a área: \n");
    scanf("%f", &area2);

    // Cálculo e atribuição da densidade populacional da segunda carta:
    densidadePopulacional1 = populacao2 / area2;

    printf("Informe o PIB: \n");
    scanf("%f", &pib2);

    // Cálculo e atribuição do PIB per Capita da segunda carta:
    pibPerCapita1 = pib2 / populacao2;

    printf("Informe quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados das Cartas:

    printf("\n");
    printf("Muito bom! Vamos ver as suas cartas: \n\n");

    // Exibição da primeira carta:
    printf("1° Cidade \n");
    printf("População: %lu \n", populacao1);
    printf("Área: %f \n", area1);
    printf("Densidade Populacional: %f \n", densidadePopulacional1);
    printf("PIB: %f \n", pib1);
    printf("PIB per Capita: %f \n", pibPerCapita1);
    printf("Pontos Turísticos: %d \n", pontosTuristicos1);
    printf("\n");

    // Exibição da segunda carta:
    printf("2° Cidade \n");
    printf("População: %lu \n", populacao2);
    printf("Área: %f \n", area2);
    printf("Densidade Populacional: %f \n", densidadePopulacional2);
    printf("PIB: %f \n", pib2);
    printf("PIB per Capita: %f \n", pibPerCapita2);
    printf("Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
