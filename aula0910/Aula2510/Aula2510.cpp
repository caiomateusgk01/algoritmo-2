// Aula2510.cpp : define o ponto de entrada para o aplicativo do console.

//enquanto (while) - While (condicao)


//repita (do while) -  do { } while(condicao)


//para (for)

#include "stdafx.h"
#include <iostream>



int main()
{
	//while (true) // laco infinito
	//{
	//	printf("a");
	//}
	int a = 0;
	while (a < 5)
	{
		printf("%i\t", a);
		a++; // a = a +1; // incremento
	}
	printf("\n================================\n");

	while (a <= 5)
	{
		printf("%i\t", a);
		a++; // a = a +1; // incremento
	}

	printf("\n============DO WHILE==============\n");

	do
	{
		printf("%i\t", a);
		a++; // a = a +1; // incremento
	} while (a <= 5);

	printf("\n\n\n");

	system("pause");
}


