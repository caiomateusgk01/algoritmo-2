/* 36. Escrever um algoritmo que leia 20 valores para uma variável n e, para cada um
deles, calcule a tabuada de 1 até n. Mostre a tabuada na forma:
1 x n = n
2 x n = 2n
3 x n = 3n
.......
n x n = n
*/

#include "pch.h"
#include <iostream>
#define TAM 20



int main() {
	int i, j, n;


	for (i = 0; i < TAM; i++) {
		printf("\n Digite um numero para o calculo de sua tabuada de 1 a n \n");
		scanf_s("%d", &n);
		for (j = 1; j <= n; j++) {
			printf("%d x %d = %d\n", j, n, j * n);

		}

	}


	return 0;
}