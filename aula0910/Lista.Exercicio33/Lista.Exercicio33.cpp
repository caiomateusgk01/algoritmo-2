/* 33. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e
cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico.
*/

#include "pch.h"
#include <iostream>

int main()
{
	float c = 1.50, z = 1.10;
	int ano = 0;

	while (z < c) {

		c = c + 0.02;
		z = z + 0.03;
		ano = ano + 1;
	}

	printf(" Anos deverao ser necessarios para que Zeca seja maior que Chico: %i\n", ano);

	printf(" A Altura de Zeca daqui a 41 anos: %.2f\n",z);

	printf(" A altura de Chico daqui a 41 anos: %.2f\n",c);

	system("pause");
	return 0;


}


