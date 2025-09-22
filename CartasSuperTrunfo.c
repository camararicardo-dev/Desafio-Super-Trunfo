#include <stdio.h>

int main() {

    //Declaração das variaveis;

        
        int populacaop1, populacaop2;
        int pontoturisticop1, pontoturisticop2;
        float areap1, areap2;
        float pibp1, pibp2;
        int atributo1,atributo2;
        
        char estado1[10], codcarta1[10], nome_cidade1[10];
        char estado2[10], codcarta2[10], nome_cidade2[10];
        float densidade_populacional1, densidade_populacional2;
        float pib_percapita1, pib_percapita2;


    // Seção de inserção de dados das cartas pelo usuário

        //Primeira Carta
        printf("Cadastro das informações da carta da primeira cidade, insira as informações conforme solicitadas na tela! \n");

        printf("Digite a população da primeira primeira carta:\n");
        scanf("%d",&populacaop1);

        printf("Digite a quantidade de pontos turisticos  da primeira carta:\n");
        scanf("%d",&pontoturisticop1);

        printf("Digite a area da cidade da  primeira carta:\n");
        scanf("%f",&areap1);

        printf("Digite o PIB da cidade da primeira carta:\n");
        scanf("%f", &pibp1);

        //Inserção da entrada de dados do desafio iniciante primeira carta

        printf("Digite o nome do estado da primeira carta:\n");
        scanf("%s",&estado1);

        printf("Digite o nome da cidade da primeira carta:\n");
        scanf("%s",&nome_cidade1);

        printf("Digite o  codigo da primeira carta:\n");
        scanf("%s",&codcarta1);

        //Calculos da primeira carta

        //calcular densidade populacional
        densidade_populacional1 = populacaop1/areap1;

        //Calclular PIB Per Capita
        pib_percapita1 = pibp1/populacaop1;



         //Segundo país
        printf("Cadastro das informações da carta do segundo país, insira as infromações conforme solicitadas na tela!\n");

        printf("Digite a população  da segunda carta:\n");
        scanf("%d",&populacaop2);

        printf("Digite a quantidade de pontos turisticos  da segunda carta:\n");
        scanf("%d", &pontoturisticop2);

        printf("Digite a area da cidade da segunda carta:\n");
        scanf("%f",&areap2);

        printf("Digite o PIB  da cidade da segunda carta:\n");
        scanf("%f", &pibp2);

        //Inserção da entrada de dados do desafio iniciante segunda carta

        printf("Digite o nome do estado da segunda carta:\n");
        scanf("%s",&estado2);

        printf("Digite o nome da cidade da segunda carta:\n");
        scanf("%s",&nome_cidade2);

        printf("Digite o  codigo da segunda carta:\n");
        scanf("%s",&codcarta2);

        //Calculos da segunda carta

        //calcular densidade populacional
        densidade_populacional2 = populacaop2/areap2;

        //Calclular PIB Per Capita
        pib_percapita2 = pibp2/populacaop2;


        // Seção de exibição dos dados coletados;
        // Exibir Informações das cartas

        // Seção para seleção dos atibutos a serem comparados

        printf("Selecione abaixo dois atributos para realizar as comparações, selecione um numero correspondente ao atributo:");
        printf("Seleção do primeiro atibuto:\n");
        printf("1-População\n");
        printf("2-Area\n");
        printf("3-PIB\n");
        printf("4-Número de pontos turisticos\n");
        printf("5-Densidade demografica\n");
        scanf("%d", &atributo1);

        switch (atributo1)
        {
        case 1:
            /* code */
            break;

        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        
        default:
            //Mensagem para informar uma opção invalida
            printf("Você selecionou uma opção invalida!!! Digite um dos valores informados\n");
            break;
        }

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

        //comparação entre as cartas e exibição das informaçoes da vencedora.

        //Comparação do atributo escolhido (PIB)
         
        if (pib_percapita1 > pib_percapita2){
          
            printf("Carta 1 - %s: %f \n",nome_cidade1,pib_percapita1);
            printf(" Carta 1 - %s Venceu!\n",nome_cidade1);

        }  else if (pib_percapita1 == pib_percapita2){
            
            
            printf("Carta 1 - %s: %f \n",nome_cidade1,pib_percapita1);
            printf("Carta 2 - %s: %f \n",nome_cidade2,pib_percapita2);
            printf(" Houve um empate");
            
        } else {
            printf("Carta 2 - %s: %f \n",nome_cidade2,pib_percapita2);
            printf(" Carta 2 - %s Venceu!\n",nome_cidade2);
        }

    return 0;
}

