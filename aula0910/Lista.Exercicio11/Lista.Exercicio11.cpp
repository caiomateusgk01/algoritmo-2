/*11. Faça um algoritmo para calcular a área de uma circunferência, considerando a
fórmula AREA = π * RAIO2.
Utilize as variáveis AREA e RAIO, a constante π (pi =3.14159) e os operadores aritméticos de multiplicação.
*/
#include "stdafx.h"
#include <iostream>
#include <math.h>
#define PI 3.141592

int main()
{
	float area;
	float raio;

	printf("Digite o raio:\n");
	scanf_s("%f", &raio);
	area = PI * (pow(raio, 2));
	printf("A area da circunferencia e: %2.f", area);

	return 0;
	system("pause");
}
