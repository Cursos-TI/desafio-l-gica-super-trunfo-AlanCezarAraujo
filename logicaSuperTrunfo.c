#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Cadastro das Cartas:
    // Variáveis para guardar os atributos das cidades:
    int
        atributoEscolhido,
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

    // Comparação de Cartas

    printf("Escolha o atributo que deseja comparar: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - Densidade Populacional \n");
    printf("4 - PIB \n");
    printf("5 - PIB per Capita \n");
    printf("6 - Pontos Turísticos \n");

    scanf("%d", &atributoEscolhido);

    // Comparação dos atributos escolhidos:

    switch(atributoEscolhido) {
        case 1:
            printf("Comparando População: \n");
            printf("População 1: %lu \n", populacao1);
            printf("População 2: %lu \n", populacao2);

            if (populacao1 == populacao2) {
                printf("Empate! As duas cidades tem a mesma população.\n");
            } else if (populacao1 > populacao2) {
                printf("Cidade 1 tem maior população.\n");
            } else {
                printf("Cidade 2 tem maior população.\n");
            }

            break;

        case 2:
            printf("Comparando Área: \n");
            printf("Área 1: %f \n", area1);
            printf("Área 2: %f \n", area2);

            if (area1 == area2) {
                printf("Empate! As duas cidades tem a mesma área.\n");
            } else if (area1 > area2) {
                printf("Cidade 1 tem maior área.\n");
            } else {
                printf("Cidade 2 tem maior área.\n");
            }

            break;

        case 3:
            printf("Comparando Densidade Populacional: \n");
            printf("Densidade Populacional 1: %f \n", densidadePopulacional1);
            printf("Densidade Populacional 2: %f \n", densidadePopulacional2);

            if (densidadePopulacional1 == densidadePopulacional2) {
                printf("Empate! As duas cidades tem a mesma densidade populacional.\n");
            } else if (densidadePopulacional1 > densidadePopulacional2) {
                printf("Cidade 2 tem menor densidade populacional.\n");
            } else {
                printf("Cidade 1 tem menor densidade populacional.\n");
            }

            break;

        case 4:
            printf("Comparando PIB: \n");
            printf("PIB 1: %f \n", pib1);
            printf("PIB 2: %f \n", pib2);

            if (pib1 == pib2) {
                printf("Empate! As duas cidades tem o mesmo PIB.\n");
            } else if (pib1 > pib2) {
                printf("Cidade 1 tem maior PIB.\n");
            } else {
                printf("Cidade 2 tem maior PIB.\n");
            }

            break;

        case 5:
            printf("Comparando PIB per Capita: \n");
            printf("PIB per Capita 1: %f \n", pibPerCapita1);
            printf("PIB per Capita 2: %f \n", pibPerCapita2);

            if (pibPerCapita1 == pibPerCapita2) {
                printf("Empate! As duas cidades tem o mesmo PIB per Capita.\n");
            } else if (pibPerCapita1 > pibPerCapita2) {
                printf("Cidade 1 tem maior PIB per Capita.\n");
            } else {
                printf("Cidade 2 tem maior PIB per Capita.\n");
            }

            break;

        case 6:
            printf("Comparando Pontos Turísticos: \n");
            printf("Pontos Turísticos 1: %d \n", pontosTuristicos1);
            printf("Pontos Turísticos 2: %d \n", pontosTuristicos2);

            if (pontosTuristicos1 == pontosTuristicos2) {
                printf("Empate! As duas cidades tem a mesma quantidade de pontos turísticos.\n");
            } else if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Cidade 1 tem mais pontos turísticos.\n");
            } else {
                printf("Cidade 2 tem mais pontos turísticos.\n");
            }

            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
