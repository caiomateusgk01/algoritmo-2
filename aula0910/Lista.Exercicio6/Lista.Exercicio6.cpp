/*  6. Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.
*/

#include "stdafx.h"
#include <iostream>

int main()
{
	int n = 0;
	int np = 0;
	int tot;
	printf("Informe um numero inteiro positivo\n");
	scanf_s("%i", &n);
	printf("Informe um numero inteiro positivo\n");
	scanf_s("%i", &np);

	tot = n + np;

	printf("A soma dos numero e:%i\n", tot);

	return 0;
	system("pause");


}
