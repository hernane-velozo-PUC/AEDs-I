/***************************************************************************************************************

Pontifícia Universidade Católica de Minas Gerais | Algoritmos e Estruturas de Dados I

# Autor: Hernane Velozo | Resolução em C++                                                                                          
# Exercício: 

6) Faça um algoritmo que solicita para o usuário um número inteiro n (digitado) e posteriormente 
o  sistema mostra o sucessor de n (ex. se o usuário digitou 15, o sistema deverá imprimir 16).

***************************************************************************************************************/

#include <iostream>

using namespace std;

int main(){

    //Definicao de variavel
    int sucessor;

    //Impressão e leitura do usuário
    cout << "\nInforme um numero: ";
    cin >> sucessor;

    //apresentação na tela do usuário
    cout << "O valor digitado foi: " << sucessor << " e o seu sucessor eh: " << sucessor+1 << endl;

    return 0;
}