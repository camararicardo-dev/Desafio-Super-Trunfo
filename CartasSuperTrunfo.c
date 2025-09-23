#include <stdio.h>

int main() {

    //Declaração das variaveis;

        
        int populacaop1, populacaop2;
        int pontoturisticop1, pontoturisticop2;
        float areap1, areap2;
        float pibp1, pibp2;

        //Variaveis para assumir o valor do atributo selecionado para comparação
        int atributo1,atributo2;
        //Variaveis para assumir o valor do resultado da comparação
        int resultado1,resultado2;
        //Variabeis para receber soma dos atributos
        float soma_atributos1, soma_atributos2;
        //Variaveis para receber o nome dos atributos
        char nome_atributo1[20], nome_atributo2[20];
        
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

        printf("Selecione abaixo o primeiro atributo para realizar a comparação, selecione um numero correspondente ao atributo:");
        printf("Seleção do primeiro atibuto:\n");
        printf("1-População\n");
        printf("2-Area\n");
        printf("3-PIB\n");
        printf("4-Número de pontos turisticos\n");
        printf("5-Densidade demografica\n");
        scanf("%d", &atributo1);

        //Comparação do primeiro atributo selecionado
        // Significado dos atributos
        // resultado 1 = 1 (vitoria da carta 1), 0 (vitoria da carta 2), 2 (empate)

        switch (atributo1)
        {
        case 1:
                nome_atributo1 == "População";
            if (populacaop1 > populacaop2){
                resultado1=1;

            }  else if (populacaop1 < populacaop2){
                resultado1=0;
                
            } else {
                resultado1=2;
            }
            break;

        case 2:
             nome_atributo1 == "Área";
             if (areap1 > areap2){
                resultado1=1;

            }  else if (areap1 < areap2){
                resultado1=0;
                
            } else {
                resultado1=2;
            }
            break;
            
        case 3:
            nome_atributo1 == "PIB";
           if (pibp1 > pibp2){
                resultado1=1;

            }  else if (areap1 < areap2){
                resultado1=0;
                
            } else {
                resultado1=2;
            }
        
            break;
        case 4:
            nome_atributo1 == "Número de pontos turisticos";
            if (pontoturisticop1 > pontoturisticop2){
                resultado1=1;

            }  else if (pontoturisticop1 < pontoturisticop2){
                resultado1=0;
                
            } else {
                resultado1=2;
            }
            
            break;
        case 5:
            nome_atributo1 == "Densidade demografica";
            if (densidade_populacional1 < densidade_populacional2){
                resultado1=1;

            }  else if (areap1 > areap2){
                resultado1=0;
                
            } else {
                resultado1=2;
            }
            break;
            
        default:
            //Mensagem para informar uma opção invalida
            printf("Você selecionou uma opção invalida!!! Digite um dos valores informados\n");
            break;
        }


        //Vericação do primeiro atributo selecionado e exibição dos atributos que estarão disponiveis para a segunda seleção
        // Significado dos atributos
        // resultado2 = 1 (vitoria da carta 1), 0 (vitoria da carta 2), 2 (empate)

        switch (atributo1)
        {
        case 1:
            printf("Selecione abaixo o segundo atributo para realizar a comparação, selecione um numero correspondente ao atributo:");
            printf("Seleção do segundo atibuto:\n");
            printf("2-Area\n");
            printf("3-PIB\n");
            printf("4-Número de pontos turisticos\n");
            printf("5-Densidade demografica\n");
            scanf("%d", &atributo2);
                           
            //Switch para comparação do segundo atributo selecionado 
            switch (atributo2)
                {
                case 2:
                    nome_atributo2 == "Área";
                    if (areap1 > areap2){
                        resultado2=1;

                    }  else if (areap1 < areap2){
                        resultado2=0;
                        
                    } else {
                        resultado2=2;
                    }
                    break;
                    
                case 3:
                    nome_atributo2 == "PIB";
                if (pibp1 > pibp2){
                        resultado2=1;

                    }  else if (areap1 < areap2){
                        resultado2=0;
                        
                    } else {
                        resultado2=2;
                    }
                
                    break;
                case 4:
                    nome_atributo2 == "Número de pontos turisticos";
                    if (pontoturisticop1 > pontoturisticop2){
                        resultado2=1;

                    }  else if (pontoturisticop1 < pontoturisticop2){
                        resultado2=0;
                        
                    } else {
                        resultado2=2;
                    }
                    
                    break;
                case 5:
                    nome_atributo2 == "Densidade demografica";
                    if (densidade_populacional1 < densidade_populacional2){
                        resultado2=1;

                    }  else if (areap1 > areap2){
                        resultado2=0;
                        
                    } else {
                        resultado2=2;
                    }
                    break;
                    
                default:
                    //Mensagem para informar uma opção invalida
                    printf("Você selecionou uma opção invalida!!! Digite um dos valores informados\n");
                    break;
                }

            break;
        case 2:
            printf("Selecione abaixo o segundo atributo para realizar a comparação, selecione um numero correspondente ao atributo:");
            printf("Seleção do segundo atibuto:\n");
            printf("1-População\n");
            printf("3-PIB\n");
            printf("4-Número de pontos turisticos\n");
            printf("5-Densidade demografica\n");
            scanf("%d", &atributo2);
               

                            switch (atributo2)
                    {
                    case 1:
                        nome_atributo2 == "População";
                        if (populacaop1 > populacaop2){
                            resultado2=1;

                        }  else if (populacaop1 < populacaop2){
                            resultado2=0;
                            
                        } else {
                            resultado2=2;
                        }
                        break;

                    case 3:
                        nome_atributo2 == "PIB";
                    if (pibp1 > pibp2){
                            resultado2=1;

                        }  else if (areap1 < areap2){
                            resultado2=0;
                            
                        } else {
                            resultado2=2;
                        }
                    
                        break;
                    case 4:
                        nome_atributo2 == "Número de pontos turisticos";
                        if (pontoturisticop1 > pontoturisticop2){
                            resultado2=1;

                        }  else if (pontoturisticop1 < pontoturisticop2){
                            resultado2=0;
                            
                        } else {
                            resultado2=2;
                        }
                        
                        break;
                    case 5:
                        nome_atributo2 == "Densidade demografica";
                        if (densidade_populacional1 < densidade_populacional2){
                            resultado2=1;

                        }  else if (areap1 > areap2){
                            resultado2=0;
                            
                        } else {
                            resultado2=2;
                        }
                        break;
                        
                    default:
                        //Mensagem para informar uma opção invalida
                        printf("Você selecionou uma opção invalida!!! Digite um dos valores informados\n");
                        break;
                    }

            break; 


        case 3:
            printf("Selecione abaixo o segundo atributo para realizar a comparação, selecione um numero correspondente ao atributo:");
            printf("Seleção do segundo atibuto:\n");
            printf("1-População\n");
            printf("2-Area\n");
            printf("4-Número de pontos turisticos\n");
            printf("5-Densidade demografica\n");
            scanf("%d", &atributo2);
              

                    switch (atributo2)
                    {
                    case 1:
                        nome_atributo2 == "População";
                        if (populacaop1 > populacaop2){
                            resultado2=1;

                        }  else if (populacaop1 < populacaop2){
                            resultado2=0;
                            
                        } else {
                            resultado2=2;
                        }
                        break;

                    case 2:
                        nome_atributo2 == "Área";
                        if (areap1 > areap2){
                            resultado2=1;

                        }  else if (areap1 < areap2){
                            resultado2=0;
                            
                        } else {
                            resultado2=2;
                        }
                        break;
                
                    case 4:
                        nome_atributo2 == "Número de pontos turisticos";
                        if (pontoturisticop1 > pontoturisticop2){
                            resultado2=1;

                        }  else if (pontoturisticop1 < pontoturisticop2){
                            resultado2=0;
                            
                        } else {
                            resultado2=2;
                        }
                        
                        break;
                    case 5:
                        nome_atributo2 == "Densidade demografica";
                        if (densidade_populacional1 < densidade_populacional2){
                            resultado2=1;

                        }  else if (areap1 > areap2){
                            resultado2=0;
                            
                        } else {
                            resultado2=2;
                        }
                        break;
                        
                    default:
                        //Mensagem para informar uma opção invalida
                        printf("Você selecionou uma opção invalida!!! Digite um dos valores informados\n");
                        break;
                    }
        break;

        case 4:
            printf("Selecione abaixo o segundo atributo para realizar a comparação, selecione um numero correspondente ao atributo:");
            printf("Seleção do segundo atibuto:\n");
            printf("1-População\n");
            printf("2-Area\n");
            printf("3-PIB\n");
            printf("5-Densidade demografica\n");
            scanf("%d", &atributo2);
             

                            switch (atributo2)
                        {
                        case 1:
                            nome_atributo2 == "População";
                            if (populacaop1 > populacaop2){
                                resultado1=1;

                            }  else if (populacaop1 < populacaop2){
                                resultado1=0;
                                
                            } else {
                                resultado1=2;
                            }
                            break;

                        case 2:
                            nome_atributo2 == "Área";
                            if (areap1 > areap2){
                                resultado1=1;

                            }  else if (areap1 < areap2){
                                resultado1=0;
                                
                            } else {
                                resultado1=2;
                            }
                            break;
                            
                        case 3:
                        nome_atributo2 == "PIB";
                        if (pibp1 > pibp2){
                                resultado1=1;

                            }  else if (areap1 < areap2){
                                resultado1=0;
                                
                            } else {
                                resultado1=2;
                            }
                        
                            break;
                        
                        case 5:
                            nome_atributo2 == "Densidade demografica";
                            if (densidade_populacional1 < densidade_populacional2){
                                resultado1=1;

                            }  else if (areap1 > areap2){
                                resultado1=0;
                                
                            } else {
                                resultado1=2;
                            }
                            break;
                            
                        default:
                            //Mensagem para informar uma opção invalida
                            printf("Você selecionou uma opção invalida!!! Digite um dos valores informados\n");
                            break;
                        }

                        case 5:
                            printf("Selecione abaixo o segundo atributo para realizar a comparação, selecione um numero correspondente ao atributo:");
                            printf("Seleção do segundo atibuto:\n");
                            printf("1-População\n");
                            printf("2-Area\n");
                            printf("3-PIB\n");
                            printf("4-Número de pontos turisticos\n");
                            
                            scanf("%d", &atributo2);
                            break;    
                            
                        switch (atributo2)
                        {
                        case 1:
                            nome_atributo2 == "População";
                            if (populacaop1 > populacaop2){
                                resultado2=1;

                            }  else if (populacaop1 < populacaop2){
                                resultado2=0;
                                
                            } else {
                                resultado2=2;
                            }
                            break;

                        case 2:
                            nome_atributo2 == "Área";
                            if (areap1 > areap2){
                                resultado2=1;

                            }  else if (areap1 < areap2){
                                resultado2=0;
                                
                            } else {
                                resultado2=2;
                            }
                            break;
                            
                        case 3:
                        nome_atributo2 == "PIB";
                        if (pibp1 > pibp2){
                                resultado2=1;

                            }  else if (areap1 < areap2){
                                resultado2=0;
                                
                            } else {
                                resultado2=2;
                            }
                        
                            break;
                        case 4:
                            nome_atributo2 == "Número de pontos turisticos";
                            if (pontoturisticop1 > pontoturisticop2){
                                resultado2=1;

                            }  else if (pontoturisticop1 < pontoturisticop2){
                                resultado2=0;
                                
                            } else {
                                resultado2=2;
                            }
                            
                            break;
                    
                        default:
                            //Mensagem para informar uma opção invalida
                            printf("Você selecionou uma opção invalida!!! Digite um dos valores informados\n");
                            break;
                        }
        break;  

        }

        
        // Seção para soma dos atributos

        soma_atributos1 = populacaop1 + pontoturisticop1 + areap1 + pibp1 + densidade_populacional1;
        soma_atributos2 = populacaop2 + pontoturisticop2 + areap2 + pibp2 + densidade_populacional2;


       // Seção de exibição dos dados coletados;

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
        printf("Os seguintes atributos foram escolhidos para as comparações:\n");
        printf("Primeiro atributo selecionado: %s \n", nome_atributo1);
        printf("Segundo atributo selecionado: %s \n", nome_atributo2);

        // exibição de pontos para separar as informações

        printf("........................\n");
        printf("........................\n");
        printf("........................\n");
        printf("........................\n");

       (soma_atributos1 > soma_atributos2) ? printf("Pela soma dos atributos a carta 1 é a vencedora \n", soma_atributos1) : (soma_atributos1 < soma_atributos2)? printf("A carta 2 é a vencedora, com a soma dos atributos no valor de: %f \n", soma_atributos2): printf("Houve um empate na soma dos atributos, ambas as cartas possuem o mesmo valor na soma dos atributos \n");

        // resultado1 = 1 (vitoria da carta 1), 0 (vitoria da carta 2), 2 (empate)
        // resultado2 = 1 (vitoria da carta 1), 0 (vitoria da carta 2), 2 (empate)

       if (resultado1 ==1 && resultado2 == 1){
            printf("A carta  carta 1 venceu nos dois atributos \n");
        } else if (resultado1 ==0 && resultado2 == 0){
            printf("A  carta 2 venceu nos dois atributos\n");
        } else if (resultado1 ==2 && resultado2 == 2){
            printf("Houve um empate entre as cartas, ambas possuem o mesmo valor nos atributos selecionados \n");
        } else {
            if (resultado1 ==1 && resultado2 == 0){
                printf("A carta 1 venceu o primeiro atributo selecionado, e a carta 2 venceu o segundo atributo selecionado. \n");
            }  else if(resultado1 == 0 && resultado2 == 1){
                printf("A carta 2 venceu o primeiro atributo selecionado, e a carta 1 venceu o segundo atributo selecionado. \n");
            }
        }

    return 0;
}

