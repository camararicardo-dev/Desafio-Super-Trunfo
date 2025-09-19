#include <stdio.h>

int main() {

    //Declaração das variaveis;


        int populacaop1, populacaop2;
        int pontoturisticop1, pontoturisticop2;
        float areap1, areap2;
        float pibp1, pibp2;

    // Seção de inserção de dados pelo usuário

        //Primeiro pais
        printf("Cadastro das informações da carta do primeiro país, insira as infromações conforme solicitadas na tela! \n");

        printf("Digite a população do país da primeira carta:\n");
        scanf("%d",&populacaop1);

        printf("Digite a quantidade de pontos turisticos do  país da primeira carta:\n");
        scanf("%d",&pontoturisticop1);

        printf("Digite a area do país da  primeira carta:\n");
        scanf("%f",&areap1);

        printf("Digite o PIB do país da primeira carta:\n");
        scanf("%f", &pibp1);


         //Segundo país
        printf("Cadastro das informações da carta do segundo país, insira as infromações conforme solicitadas na tela!\n");


        printf("Digite a população do país da segunda carta:\n");
        scanf("%d",&populacaop2);

        printf("Digite a quantidade de pontos turisticos do  país da segunda carta:\n");
        scanf("%d", &pontoturisticop2);

        printf("Digite a area do país da  segunda carta:\n");
        scanf("%f",&areap2);

        printf("Digite o PIB do país da segunda carta:\n");
        scanf("%f", &pibp2);

        // Seção de exibição dos dados coletados;
        // Exibir Informações das cartas

        printf("Exibindo informações registradas.....\n");

        // Carta 1

        printf("Dados da primeira carta:\n");
        printf("A população é de:%d \n", populacaop1);
        printf("Possui %d pontos turisticos \n", pontoturisticop1);
        printf("Possui area de %f \n", areap1);
        printf("Seu PIB é no valor de:%f \n", pibp1);


        // Carta 2

        printf("Dados da segunda carta:\n");
        printf("A população é de:%d \n", populacaop2);
        printf("Possui %d pontos turisticos \n", pontoturisticop2);
        printf("Possui area de %f \n", areap2);
        printf("Seu PIB é no valor de:%f \n", pibp2);


    return 0;
}
