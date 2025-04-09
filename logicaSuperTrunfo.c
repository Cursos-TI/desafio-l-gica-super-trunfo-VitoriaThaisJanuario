#include <stdio.h>

// Desafio Super Trunfo - Países
 int main(){

    printf("Super Trunfo \n");

     //Definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[5] , codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    // Entradas carta 1
    printf("Carta 1:\n");
    printf("Digite uma letra de A a H que represente seu estado:\n");
    scanf("%c", &estado1);

    printf("Código com a primeira letra do estado e número de 01 a 04:\n");
    scanf("%s", &codigo1);

    printf("Nome da Cidade:\n");
    scanf('%s', &cidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área em km²:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turistícos:\n");
    scanf("%d",&pontos1);

    //Calculando densidade e pib  carta 1
    densidade1 = (float)(populacao1 / area1);
    pibpercapita1 = (float)(pib1 / populacao1);

    // Entradas carta 2
    printf("Carta 2:\n");
    printf("Digite uma letra de A a H que represente seu estado:\n");
    scanf("%c", &estado2);

    printf("Código com a primeira letra do estado e número de 01 a 04:\n");
    scanf('%s', &codigo2);

    printf("Nome da Cidade:\n");
    scanf('%s', &cidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área em km²:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turistícos:\n");
    scanf("%d",&pontos2);

     //Calculando densidade e pib  carta 2
     densidade2 = (float)(populacao2 / area2);
     pibpercapita2 = (float)(pib2 / populacao2);

    //Exibindo dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código:%s\n", codigo1);
    printf("Nome da Cidade:%s\n", cidade1);
    printf("População:%d\n", populacao1);
    printf("Área:%f\n", area1);
    printf("PIB:%f\n", pib1);
    printf("Número de Pontos Turísticos:%d", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    //Exibindo dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código:%s\n", codigo2);
    printf("Nome da Cidade:%s\n", cidade2);
    printf("População:%d\n", populacao2);
    printf("Área:%f\n", area2);
    printf("PIB:%f\n", pib2);
    printf("Número de Pontos Turísticos:%d", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);



    // (Repita para cada propriedade)

    // Comparação de Cartas
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    //Exibindo a logica de comparação entre duas cartas
    // if (populacao1 > populacao2) {
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
