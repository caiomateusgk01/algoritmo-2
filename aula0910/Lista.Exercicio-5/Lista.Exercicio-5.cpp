/* 5. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos(aplicados ao custo de fábrica).
Supondo que a percentagem do distribuidor seja de 28 % e os impostos de 45 % ,
escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao
consumidor.
*/

#include "pch.h"
#include <iostream>


int main()
{
	int vlc = 0;
	int d;
	int i;
	int tot;
	d = 0.48;
	i = 0.28;

	printf("Informe o valor do carro:");
	scanf_s("%i", &vlc);

	tot = vlc * 0.48 * 0.28;


	printf("O custo do consumidor e: %i\n", tot);

	return 0;
	system("pause");
