// Aula.Geraldo.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
#define DIML 2
#define DIMC 2

/*
int Vetor()
{
	int i, num1[10], num2[10];
	for (i = 0; i < 10; i++) {
		num1[i] = ((i + 1) * 2);
	}
	printf("\n num1 => ");
	for (i = 0; i < 10; i++) {
		printf("%3d", num1[i]);
	}
	for (i = 0; i < 10; i++) {
		num2[i] = (i + 10);
	}
	printf("\n num2 => ");
	for (i = 0; i < 10; i++) {
		printf("%3d", num2[i]);
	}
	printf("\n soma => ");
	for (i = 0; i < 10; i++) {
		printf("%3d", (num1[i] + num2[i]));


	}

	system("pause");
	return 0;

}
*/
/*
int vetor2()
{
	int i, vet[8], soma=0, somat=0;

	for (i = 0; i < 8; i++){
		scanf_s("%d", &vet[i]);
	}
	
	for (i = 0; i < 8; i++) {
		if (vet[i] > 30)
     	{
			printf("\n Os numeros maiores %d",vet[i]);
		}
			if (vet[i] > 30)
			{
				soma = (vet[i] + vet[i]);
				printf("\n soma dos numero %d\n", soma);
			}
			if (vet[i] > 30)
			{
				somat = (vet[i] + soma);
				printf("\n soma total %d\n", somat);
			}
	}
	system("pause");
	return 0;
}
*/

int main()
{
	int i, j, matriz1[DIML][DIMC], matriz2[DIML][DIMC], matriz3[DIML][DIMC];

	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; i++) {
			printf("\n matriz1 - linha %i coluna %i =", i, j);
			scanf_s("%i",&matriz1[i][j]);
		}
	}
	printf("\nMatriz1\n");
	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; i++) {
			printf("%3i", matriz1[i][j]);
		}
	}
	printf("\n");
	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; i++) {
			printf("\n matriz2 - linha %i coluna %i =", i, j);
			scanf_s("%i", &matriz2[i][j]);
		}
	}
}




