/* Um usuário deseja um algoritmo onde possa escolher que tipo de média deseja
calcular a partir de 3 notas. Faça um algoritmo que leia as notas, a opção escolhida
pelo usuário e calcule a média.
1 -aritmética
2 -ponderada (3,3,4)
3 -harmônica
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>

float main()
{
	float n1 = 0, n2 = 0, n3 = 0;
	float mediaa;
	float mediap;
	float mediah;


	printf("Informe a nota 1\n");
	scanf_s("%f", &n1);
	printf("Informe a nota 2\n");
	scanf_s("%f", &n2);
	printf("Informe a nota 3\n");
	scanf_s("%f", &n3);


	mediaa = (n1 + n2 + n3) / 3;
	mediap = (n1 * 3 + n2 * 3 + n3 * 4) / 10;
	mediah = 3 / ((1 / n1) + (1 / n2) + (1 / n3));

	printf("Media aritimetica e:%2.f\n", mediaa);
	printf("Media ponderada e:%2.f\n", mediap);
	printf("Media harmonica e:%2.f\n", mediah);


	return 0;
	system("pause");
}

