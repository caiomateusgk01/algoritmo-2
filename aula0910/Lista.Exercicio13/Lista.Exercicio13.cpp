/* 13. Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
Exemplo: Para n=4 a saída deverá ser 1,3,5,7.
*/

#include "pch.h"
#include <iostream>

int main() {

	int n = 0;
	int i = 0;
	int imp;

	printf("Numero \n");
	scanf("%i", &n);


	while (imp <= n) {
		i++;

		if (i % 2 == 1)
		{
			imp++;
			printf("Numero impar sao:%i\n", i);
		}


	}

	return 0;
	system("pause");


}
