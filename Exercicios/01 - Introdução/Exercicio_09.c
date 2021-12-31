/***************************************************************************************************************

Pontifícia Universidade Católica de Minas Gerais | Algoritmos e Estruturas de Dados I

# Autor: Hernane Velozo                                                                                          
# Exercício: 

8) Faça um programa que calcule a área total (m2) de uma casa com 3 cômodos. O usuário deve 
inserir a largura e comprimento de cada um dos cômodos, calcular a área individual de cada 
um e por fim exibir a área total da casa.

***************************************************************************************************************/

#include <stdio.h>

int main(){

    //Definicao de variaveis
    float lg1, cm1, lg2, cm2, lg3, cm3, largura_total, comprimento_total;

    //Impressão e leitura do usuário
    printf("\nInforme a largura do 1o comodo..................: ");
    scanf("%f", &lg1);
    printf("Informe o comprimento do 1o comodo..............: ");
    scanf("%f", &cm1);
    
    printf("\nInforme a largura do 2o comodo..................: ");
    scanf("%f", &lg2);
    printf("Informe o comprimento do 2o comodo..............: ");
    scanf("%f", &cm2);

    printf("\nInforme a largura do 3o comodo..................: ");
    scanf("%f", &lg3);
    printf("Informe o comprimento do 3o comodo..............: ");
    scanf("%f", &cm3);

    //operações
    largura_total = lg1 + lg2 + lg3;
    comprimento_total = cm1 + cm2 + cm3;

    //apresentação na tela do usuário
    printf("\nArea do 1o comodo..........: %4.f m2", lg1 * cm1);
    printf("\nArea do 2o comodo..........: %4.f m2", lg2 * cm2);
    printf("\nArea do 3o comodo..........: %4.f m2", lg3 * cm3);
    printf("\nArea total.................: %4.f m2", largura_total * comprimento_total);
    
    printf("\n\n");

    return 0;
}