/* 14. Escrever um programa que mostre a seguinte figura no alto da tela:
XXXXX
X   X
X   X
X   X
XXXXX
*/
#include "pch.h"
#include <iostream>

int main() {

	int matrizi[5][5];
	int i =0, j=0, n;
	printf("Informe um numero");
	scanf_s("%i%i", &matrizi[i][j], &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {

			if (i == 1 || i == n) {
				printf("X");
			}
			else if (j != 1 && j != n) {
				printf(" ");
			}
			else if (j == 1 || j == n) {

				printf("X");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;


}
