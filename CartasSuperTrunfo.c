#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //Declaração das variaveis;


        int populacaop1, populacaop2;
        int pontoturisticop1, pontoturisticop2;
        float areap1, areap2;
        float pibp1, pibp2;

    // Seção de inserção de dados pelo usuário

        //Primeiro pais
        printf("Cadastro das informações da carta do primeiro país, insira as infromações conforme solicitadas na tela!");

        printf("Digite a população do país da primeira carta:");
        scanf("/d",populacaop1);

        printf("Digite a quantidade de pontos turisticos do  país da primeira carta:");
        scanf("/d",pontoturisticop1);

        printf("Digite a area do país da  primeira carta:");
        scanf("/f",areap1);

        printf("Digite o PIB do país da primeira carta:");
        scanf("/f", pibp1);


         //Segundo país
        printf("Cadastro das informações da carta do segundo país, insira as infromações conforme solicitadas na tela!");


        printf("Digite a população do país da segunda carta:");
        scanf("/d",populacaop2);

        printf("Digite a quantidade de pontos turisticos do  país da segunda carta:");
        scanf("/d", pontoturisticop2);

        printf("Digite a area do país da  segunda carta:");
        scanf("/f",areap2);

        printf("Digite o PIB do país da segunda carta:");
        scanf("/f", pibp2);

        // Seção de exibição dos dados coletados;

        printf("Exibindo informações registradas.....\n");

        // Carta 1

        printf("Dados da primeira carta:");
        printf("A população é de:%d \n", populacaop1);
        printf("Possui %d", pontoturisticop1, " pontos turisticos \n");
        printf("Possui area de %f \n", areap1);
        printf("Seu PIB é no valor de:%f \n", pibp1);


        // Carta 2

        printf("Dados da segunda carta:");
        printf("A população é de:%d \n", populacaop2);
        printf("Possui %d", pontoturisticop2, " pontos turisticos \n");
        printf("Possui area de %f \n", areap2);
        printf("Seu PIB é no valor de:%f \n", pibp12;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
