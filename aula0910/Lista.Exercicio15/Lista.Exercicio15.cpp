/* 15. Dados um inteiro x e um inteiro não-negativo n, calcular x
n
.
*/

#include "pch.h"
#include <iostream>

int main() {

	int n = 2;
	int x = 3;
	int mult = 1;

	for (int i = 0; i < n; i++)
	{
		mult = mult * x;
	}

	printf("Soma eh: %i", mult);

	return 0;

	system("pause");
}

