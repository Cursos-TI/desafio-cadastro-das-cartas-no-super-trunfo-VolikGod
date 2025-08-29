#include <stdio.h>

int main(){
    printf("Desafio CartasSuperTrunfo!\n");
    
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;


    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;



    //carta 1//

    printf("Cadastro Carta 1\n");

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Pontos Turisticos:\n");
    scanf("%d", &pontosturisticos1);


    //carta 2//

    printf("Cadastro Carta 2\n");

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Pontos Turisticos:\n");
    scanf("%d", &pontosturisticos2);
    
    //Saida//

    printf("Carta 1:\n");

    printf("População: %d\n", populacao1);
    printf("Área: %.f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    printf("Carta 2:\n");

    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);

    return 0;
}