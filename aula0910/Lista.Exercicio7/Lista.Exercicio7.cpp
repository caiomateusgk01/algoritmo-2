/* 7. Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: "São múltiplos" ou "Não são múltiplos".
*/


#include "stdafx.h"
#include <iostream>

int main()
{
	int a;
	int b;

	printf("Informe o valor a:\n");
	scanf_s("%i", &a);
	printf("Informe o valor b:\n");
	scanf_s("%i", &b);

	if (a > b) {
		if (a % b == 0) {
			printf("A e B sao multiplos\n ");
		}
		else {
			printf("A e B Nao sao multiplos\n ");
		}
	}
	else {
		if (b % a == 0) {
			printf("A e B sao multiplos\n");

		}
		else {
			printf("A e B Nao sao multiplos\n");
		}
	}
	return 0;
	system("pause");

}