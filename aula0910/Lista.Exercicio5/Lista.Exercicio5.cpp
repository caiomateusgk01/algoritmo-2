// Lista.Exercicio5.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>



int leia()
{
	int v;
	printf("Informe o valor do veiculo\n");
	scanf_s("%i", &v);
	return v;
	system("pause");
}

int calc()
{
	int ler = leia();
	int i;
	int d;
	int r;

	printf("Informe o valor do distribuidor \n");
	scanf_s("%i",&d);
	printf("Informe o valor do distribuidor \n");
	scanf_s("%i",&i);

	r = ((ler*i)*d);
	return r;

}
int main()
{
	int ler = leia();
	int calculo = calc();
	printf("O valor do veiculo e: %i\n",calculo);
	
    system("pause");
}

