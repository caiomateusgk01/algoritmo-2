// ListaExercicio.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

//3-

int dias()
{
	int idade = 0;
	printf("Informe sua idade\n");
	scanf_s("%i\n", &idade);
	
	if (idade > 0)
	{
		printf("idade em dias e:%i\n", idade * 365);
	}
	return idade;
}

int anos()
{
	int dias = 0;
	printf("Informe sua idade em dias\n");
	scanf_s("%i\n", &dias);

	if (dias > 0)
	{
		printf("idade em anos e:%i\n", dias / 365);
	}
	return dias;
}



int main()
{
	dias();
	anos();
	
	system("pause");
}

