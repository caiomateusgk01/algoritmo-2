/* 10. Um vendedor necessita de um algoritmo que calcule o preço total devido por um
cliente. O algoritmo deve receber o código de um produto e a quantidade comprada
e calcular o preço total, usando a tabela abaixo:

*/

#include "stdafx.h"
#include <iostream>

int main()
{
	float quant;
	int cod;
	float tot;

	printf("Informe a quantidade do produto:\n");
	scanf_s("%f", &quant);

	printf("Informe o codigo do produto: [1001] / [1324] / [6548] / [987] / [7623] \n");
	scanf_s("%i", &cod);

	switch (cod)
	{
	case 1001:
		tot = quant * 5.32;
		printf("Total do produto: %2.f\n", tot);
		break;
	case 1324:
		tot = quant * 6.45;
		printf("Total do produto: %2.f\n", tot);
		break;
	case 6548:
		tot = quant * 2.37;
		printf("Total do produto: %2.f\n", tot);
		break;
	case  987:
		tot = quant * 5.32;
		printf("Total do produto: %2.f\n", tot);
		break;
	case 7623:
		tot = quant * 6.45;
		printf("Total do produto: %2.f\n", tot);
		break;
	}
	return 0;
	system("pause");
}