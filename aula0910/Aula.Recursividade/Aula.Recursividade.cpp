// Aula.Recursividade.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
//protótipo da função fatorial


double fatorial(int n);

int main()
{
	int numero;
	double f;

	printf("Digite o numero que deseja calcular o fatorial: ");
	scanf_s("%d", &numero);

	//chamada da função fatorial
	f = fatorial(numero);

	printf("Fatorial de %d = %.0lf", numero, f);

	system("pause");
	return 0;

}
//Função recursiva que calcula o fatorial
//de um numero inteiro n
double fatorial(int n)
{
	double fator;

	if (n == 1)
		//Caso base: fatorial de n <= 1 retorna 1
		return (1);
	else
	{
		//Chamada recursiva
		fator = n + fatorial(n - 1);
		return (fator);
		
	}
	     
}

double fatorial(int n);

int main()
{
	int numero;
	double f;

	printf("Digite o numero que deseja calcular o fatorial: ");
	scanf_s("%d", &numero);

	//chamada da função fatorial
	f = fatorial(numero);

	printf("Fatorial de %d = %.0lf", numero, f);

	system("pause");
	return 0;

}
//Função recursiva que calcula o fatorial
//de um numero inteiro n
double fatorial(int n)
{
	double fator;

	if (n == 0)
		//Caso base: fatorial de n <= 1 retorna 1
		return (1);
	else
	{
		//Chamada recursiva
		fator = n * fatorial(n - 1);
		return (fator);

	}

}


