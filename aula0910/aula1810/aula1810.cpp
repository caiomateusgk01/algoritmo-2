// aula1810.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

// 'e' - && verdadeiro somento quando todas condicoes forem verdadeiras 
// 'ou' 0 || basta que uma condicao seja verdadeira para ser verdadeiro

int lernumerointeiro()
{
	int a;

	printf("Informe quatro numeros de tipo inteiro\n");
	scanf_s("%i", &a);
	return a;

}

int maiorvalorinteiro(int a, int b, int c, int d)
{
	int maior = a;
	if (maior < b)
	{
		maior = b;
	}
	if (maior < c)
	{
		maior = c;
	}
	if (maior < d)
	{
		maior = d;
	}

	return maior;
	{
		//if ((a >= b) && (a >= c) && (a >= d))
			//return a;
	}
}

int quatronumeros()
{
	int primeiro = lernumerointeiro();
	int segundo = lernumerointeiro();
	int terceiro = lernumerointeiro();
	int quarto = lernumerointeiro();
	int m = maiorvalorinteiro(primeiro,segundo,terceiro,quarto);

	printf("Mairo valor encontrado: %i\n\n", m);

	system("pause");

}







