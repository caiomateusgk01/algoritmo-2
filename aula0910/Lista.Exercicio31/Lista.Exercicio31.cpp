/* 31. Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos
destes valores são negativos, escrevendo esta informação.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int a, i, negativos = 0;
	for (i = 0; i < 5; i++)
	{
		printf("\nQual o numero \n",i+1);
		scanf_s("%i", &a);

		if (a < 0)
		{
			negativos++;
		}
	}

	printf("\nO Total de Negativos : %i\n", negativos);
	system("pause");
	return 0;
}

// ATIVAR DSL