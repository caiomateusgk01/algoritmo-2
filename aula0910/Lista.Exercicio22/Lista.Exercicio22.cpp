/* 22. Escreva um programa que lê uma matriz quadrada 3x3 e apresenta na tela a sua
matriz transposta.
*/

// Terminar 

#include "stdafx.h"
#include <iostream>

int main()
{
	int l, c, i, j;
	float matriz[3][3];


	for (l = 0; l < 3; l++) {
		printf("\nLinha %i\n", l + 1);
		for (c = 0; c < 3; c++) {
			printf("coluna %i: ", c + 1);
			scanf_s("%f", &matriz[l][c]);
		}
	}
	printf("\nMatriz gerada\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3.f%3.f\t", matriz[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
