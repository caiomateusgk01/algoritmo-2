/* 34. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles.
Mostre o resultado.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int num = 0;
	int i;
	int maiorv = 0;
	int menorv = 99999999;

	for (i = 0; i < 50; i++)
	{
		printf("Digite o %i º valor: ", i + 1);
		scanf_s("%i", &num);
		printf("\n");

		//maior valor
		if (num > maiorv)
		{
			maiorv = num;
		}
		// menor valor
		if (num < menorv)
		{
			menorv = num;
		}

	}
	printf("Maior valor e %i \n Menor valor e %i \n", maiorv, menorv);

	system("pause");
	return 0;
}
