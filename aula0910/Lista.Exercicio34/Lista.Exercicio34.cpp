/* 34. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles.
Mostre o resultado.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int vet[3],i,maior=0,menor=0,n;

	for (i = 0; i <= 3; i++) {
		printf("Informe 50 numeros:\n");
		scanf_s("%i", &n);
		if (n > maior) {
			maior = n;
		}
	    else if (n < menor ) {
			menor = n + menor;
		}

	}
	printf("Numero maior: %i\n", maior);
	printf("Numero menor: %i\n", menor);

	system("pause");
	return 0;
}


