// CALCULADORA.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

int soma(int x, int y)
{
	return x + y;;

}
int subtracao(int x, int y)
{
	return x - y;
}
int multiplicacao(int x, int y)
{
	return x * y;
}

float divisao(float x, float y) //RETORNAR FLOAT
{
	return x / y;
}
int Lernumerointeiro()
{
	int a;
	printf("Informe o valor de numero inteiro ");
		scanf_s("%i",&a);
	return a;


}

int main()

{
	int primeirovalor = Lernumerointeiro();
	int segundovalor = Lernumerointeiro();

	int so = soma(primeirovalor, segundovalor);
	int su = subtracao(primeirovalor, segundovalor);
	int m = multiplicacao(primeirovalor, segundovalor);
	float d = divisao((float)primeirovalor, (float)segundovalor); // retornar FLOAT

	printf("O Valor da soma e: %i\n", so);
	printf("O Valor da subtracao e: %i\n", su);
	printf("O Valor da multiplicacao e: %i\n", m);
	printf("O Valor da divisao e: %.2f\n", d);

	system("pause");
}
