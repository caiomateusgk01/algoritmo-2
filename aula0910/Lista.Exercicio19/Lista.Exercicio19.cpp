/* 19. Crie uma função capaz de multiplicar uma linha de uma matriz[3][3] por um número
informado pelo usuário. Faça o mesmo para uma coluna da mesma matriz.
*/

#include "stdafx.h"
#include <iostream>


int main()
{
	int matriz[3][3], n, i = 2, j = 2, multl,multc;
	printf("Informe um numero:\n");
	scanf_s("%i", &n);

	for (i = 2; i <= 3; i++) {
		for (j = 2; j <= 3; j++) {
			multl = n * i;
		}
	}
	for (i = 2; i <= 3; i++) {
		for (j = 2; j <= 3; j++) {
			multc = n * j;

		}
	}
	printf("Multiplicao da linha: %i\n", multl);
	printf("Multiplicao da coluna: %i\n", multc);

	
	system("pause");
	return 0;
}

