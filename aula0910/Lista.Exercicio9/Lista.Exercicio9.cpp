/* Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
*/

#include "stdafx.h"
#include <iostream>

int main()
{
	int idade;
	printf("Informe sua idade:\n");
	scanf_s("%i", &idade);

	if (idade >= 5 && idade <= 7) {
		printf("Infantil A \n");
	}
	if (idade >= 8 && idade <= 10) {
		printf("Infantil B \n");
	}
	if (idade >= 11 && idade <= 13) {
		printf("Juvenil A \n");
	}
	if (idade >= 14 && idade <= 17) {
		printf("Juvenil B \n");

	}
	else if (idade >= 18) {
		printf("Adulto \n");
	}

	return 0;
	system("pause");
}
