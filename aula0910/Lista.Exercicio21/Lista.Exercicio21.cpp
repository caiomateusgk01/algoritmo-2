/* 21. Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares.
*/

#include "stdafx.h"
#include <iostream>

int main()
{
	int np[3], i = 0, soma, n = 0;

	printf("Informe um inteiro:\n");
	scanf_s("%i", &n);

	for (i = 0; i <= 3; i++) {
		if (np[i] % 2 == 0) {

			soma = i + n;
		}
	}
	printf("soma dos numeros pares: %i\n", soma);

	return 0;
	system("pause");
}