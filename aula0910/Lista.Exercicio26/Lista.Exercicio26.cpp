/*26. Escreva um algoritmo que determine o número de dias que uma pessoa já viveu.
Considere que um mês tenha 30 dias.
*/

#include "stdafx.h"
#include <iostream>


int main()
{
	int dias,idade;

	printf("Informe qual sua idade:\n");
	scanf_s("%i", &idade);

	dias = idade * 365;

	printf("Sua idade em dias e: %i\n",dias);

	system("pause");
	return 0;

}

