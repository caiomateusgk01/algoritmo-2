/* 24. Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca dos
valores de forma que a variável A passe a possuir o valor da variável B e a variável
B passe a possuir o valor da variável A. Apresente os valores trocados.
*/

#include "stdafx.h"
#include <iostream>


int main()
{
	
	int a, b, troca;

	printf("Informe o valor da variavel A: ");
		scanf_s("%i", &a);
		printf("Informe o valor da variavel B: ");
		scanf_s("%i", &b);
	troca = a;
	a = b;
	b = troca;
	printf("O novo valor de A e: %i\n", a);
	printf("O novo valor de B e: %i\n", b);
		
	system("pause");
	return 0;



}

