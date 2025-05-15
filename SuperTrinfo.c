#include <stdio.h>

        int main(){


            //TRABALHO SUPER TRIUNFO NIVEL NOVATO


            printf("Super Triunfo!, Jogador 1\n");


            // Aqui eu declaro as variaveis da primeira carta do jogador 1
            char estado; 
            char codigo[5]; 
            char cidade[25];
            int populacao = 0;
            float area = 0;
            float pib = 0;
            int pontos_t = 0;


            // Aqui eu declaro as variaveis da primeira carta do jogador 2
            char estado2; 
            char codigo2[5]; 
            char cidade2[25];
            int populacao2 = 0;
            float area2 = 0;
            float pib2 = 0;
            int pontos_t2 = 0;


            //Aqui eu expecifico os formatos da carta do jogador 1

            printf("Digite o Estado com uma letra de 'A' a 'H':\n");
            scanf("%s", &estado);
            //Caractere (char)
            //O tipo char (do inglês character) armazena o valor ASCII de um caractere
            //ou seja, um número inteiro.
            //Por padrão, os números são assinados,
            // o que significa que eles têm um sinal. Para armazenar informações sobre o sinal (em binário)
            //Se, por exemplo, quisermos armazenar a letra B (seu código ASCII é 66),
            // poderemos definir este dado, seja pelo número 66,
            // seja notando o ’B’, onde as aspas simples significam código ASCII de...
            
            
            printf("A letra do estado seguida de um número de 01 a 04:\n");
            scanf("%s", &codigo);
            

            printf("Digite o nome da cidade:\n");
            scanf("%s", &cidade);
            

            printf("digite o número de habitantes da cidade:\n");
            scanf("%d", &populacao); 
            //Número inteiro (int)
            //Um número inteiro é um número sem vírgula, que pode ser expresso em diferentes bases
            //de 0 a 9 ou de A a F

            printf("Digite a área da cidade em quilômetros quadrados km² somente numeros:\n");
            scanf("%f", &area);
            //Número com vírgula (float)
            //Um número com vírgula flutuante é um número com vírgula 
            //porém, ele pode ser representado de várias maneiras;

            //Ex:Um inteiro decimal: 895;
            //Um número com um ponto (e não uma vírgula): 845.32;

            //Uma fração: ½, ¾;

            //Um número exponencial: ou seja, um número (eventualmente com vírgula)
            // seguido da letra e (ou E) e de um inteiro correspondente à potência de 10
            //(assinado ou não, isto é, precedido de um + ou -): 2.75e-2; 35.8E+10; .25e-2.;
            

            printf("Digite o PIB Produto Interno Bruto da cidade somente numeros:\n");
            scanf("%f", &pib);
            

            printf("Digite a quantidade de pontos turísticos na cidade somente numeros:\n");
            scanf("%d", &pontos_t );




            //Aqui eu expecifico os formatos da carta do jogador 2 


            printf("Super Triunfo!, Jogador 2\n");


            printf("Digite o Estado com uma letra de 'A' a 'H':\n");
            scanf("%s", &estado2);
            
            
            printf("A letra do estado seguida de um número de 01 a 04:\n");
            scanf("%s", &codigo2);
            

            printf("Digite o nome da cidade:\n");
            scanf("%s", &cidade2);
            

            printf("digite o número de habitantes da cidade:\n");
            scanf("%d", &populacao2);
            

            printf("Digite a área da cidade em quilômetros quadrados km² somente numeros:\n");
            scanf("%f", &area2);
            

            printf("Digite o PIB Produto Interno Bruto da cidade somente numeros:\n");
            scanf("%f", &pib2);
            

            printf("Digite a quantidade de pontos turísticos na cidade somente numeros:\n");
            scanf("%d", &pontos_t2);



            printf("Nenhum jogador ganhou, pois, foi apenas um teste, Obrigado!");
            









        }
