/***************************************************************************************************************

Pontifícia Universidade Católica de Minas Gerais | Algoritmos e Estruturas de Dados I

# Autor: Hernane Velozo                                                                                          
#Exercício: 

8) Faça um programa que calcule a média de consumo de combustível de um veículo. O usuário deve informar
o KM inicial (ex. 13.000 km), o KM final (ex. 15.000 km) e quantos litros foram gastos no percurso.

***************************************************************************************************************/

#include <stdio.h>

int main(){

    //Definicao de variavel
    float inicial, final, litros, distancia, media;

    //Impressão e leitura do usuário
    printf("\nInforme o KM inicial..............: ");
    scanf("%f", &inicial);

    printf("\nInforme o KM final................: ");
    scanf("%f", &final);

    printf("\nInforme a qtd de litros Gastos....: ");
    scanf("%f", &litros);

    //calculo da operação
    distancia = final - inicial;    
    media = distancia / litros;

    //apresentação na tela do usuário
    printf("\nKM Inicial %.2f e KM Final %.2f", inicial, final);
    printf("\nDistancia............: %.2f", distancia);
    printf("\nLitros Consumidos....: %.2f", litros);
    printf("\nMedia Consumo........: %.2f\n", media);

    printf("\n\n");

    return 0;
}