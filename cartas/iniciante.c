#include <stdio.h>
int main() {
    
    //declaração das variaveis

    char estado1 [20];
    char codigo1 [20];
    char cidade1 [20];
    int populacao1;
    float area1;
    float Pib1;
    int pontos_turisticos1;

    char estado2 [20];
    char codigo2 [20];
    char cidade2 [20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

          
    printf("CARTAS DE TRUNFO \n");

    //carta
    printf("carta 01 \n");
    
        printf("digite um estado:");
        scanf("%s", estado1);

        printf("codigo:");
        scanf("%s", codigo1);

        printf("digite uma cidade:");
        scanf("%S", cidade1);

        printf("digite a população:");
        scanf("%d", &populacao1);


        printf("area em km²:");
        scanf ("%f", &area1);

        printf("PIB:");
        scanf("%f", &Pib1);

        printf("pontos turisticos:");
        scanf("%d", &pontos_turisticos1);


         //carta 2

        printf("Carta 2 \n");



        printf("digite um estado:");
        scanf("%s", estado2);

        printf("codigo:");
        scanf("%s", codigo2);

        printf("digite uma cidade:");
        scanf("%s", cidade2);

        printf("digite a população: \n");
        scanf("%D" , &populacao2);

        printf("area em km²:");
        scanf("%f", &area2);

        printf("pib:");
        scanf("%f", &pib2);

        printf("pontos turisticos:");
        scanf("%d", &pontos_turisticos2);


    return 0;

}