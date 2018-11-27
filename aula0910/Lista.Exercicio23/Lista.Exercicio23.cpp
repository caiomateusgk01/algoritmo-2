/* 23. Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma
viagem, utilizando um automóvel que faz 12Km por litro. Para obter o cálculo, o
usuário deve fornecer o tempo gasto na viagem e a velocidade média durante ela.
Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA =
TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade de
litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS =
DISTANCIA / 12. O programa deve apresentar os valores da velocidade média,
tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na
viagem.
*/

#include "stdafx.h"
#include <iostream>

int main()
{
	float tempo, velocidade, distancia, listrousados;

	printf("Informe o tempo gasto percorrida:\n");
	scanf_s("%f", &tempo);
	printf("Informe a velocidade gasta percorrida:\n");
	scanf_s("%f", &velocidade);

	distancia = tempo * velocidade;
	listrousados = distancia / 12;

	printf("distancia: %2.f\n", distancia);
	printf("litros de combustivel usado na viagem: %2.f\n", listrousados);
	printf("A Velocidade media : %2.f\n", velocidade);
	printf("Tempo gasto foi: %2.f\n", tempo);

	return 0;
	system("pause");
}
