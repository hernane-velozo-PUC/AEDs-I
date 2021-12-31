/***************************************************************************************************************

Pontifícia Universidade Católica de Minas Gerais | Algoritmos e Estruturas de Dados I

# Autor: Hernane Velozo                                                                                          
# Exercício: 

7) Faça um algoritmo que solicita o valor de 3 notas (n1, n2 e n3) e depois mostra: a soma e a média das notas.
***************************************************************************************************************/

#include <stdio.h>

int main(){

    //Definicao de variavel
    float n1, n2, n3, soma, media;

    //Impressão e leitura do usuário
    printf("\nInforme a primeira nota: ");
    scanf("%f", &n1);

    printf("\nInforme a segunda nota: ");
    scanf("%f", &n2);

    printf("\nInforme a terceira nota: ");
    scanf("%f", &n3);

    //calculo da operação
    soma = n1 + n2 + n3;    
    media = soma / 3;

    //apresentação na tela do usuário
    printf("\nNotas informadas: %.2f, %.2f e %.2f", n1, n2, n3);
    printf("\nSoma....: %.2f", soma);
    printf("\nMedia...: %.2f\n", media);

    printf("\n\n");

    return 0;
}