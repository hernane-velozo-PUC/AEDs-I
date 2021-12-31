/***************************************************************************************************************

Pontifícia Universidade Católica de Minas Gerais | Algoritmos e Estruturas de Dados I

# Autor: Hernane Velozo                                                                                          
# Exercício: 

6) Faça um algoritmo que solicita para o usuário um número inteiro n (digitado) e posteriormente 
o  sistema mostra o sucessor de n (ex. se o usuário digitou 15, o sistema deverá imprimir 16).

***************************************************************************************************************/

#include <stdio.h>

int main(){

    //Definicao de variavel
    int sucessor;


    //Impressão e leitura do usuário
    printf("\nInforme um numero: ");
    scanf("%d", &sucessor);

    //apresentação na tela do usuário
    printf("\nO valor digitado foi: %d e o seu sucessor eh: %d\n", sucessor, sucessor+1);

    return 0;
}