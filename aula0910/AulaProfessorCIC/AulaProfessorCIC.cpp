// AulaProfessorCIC.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <locale.h>
#include <iostream>

/*
int exercicio()
{
	setlocale(LC_ALL, "");

	int *x, valor, y;
	valor = 35;
	x = &valor; 
	y = *x;
	valor = 36;
	

	printf("Endereço da variavel comum valor: %p\n", &valor);
	printf("Lendo o conteudo do ponteiro x: %p\n", x);
	printf("Endereco da variavel ponteiro x: %p\n", &x);
	printf("Conteudo da variavel apontada por x: %d\n", *x);
	printf("Conteudo da variavel comum y: %d\n", y );
	printf("Endereco da variavel comum y: %p\n", &y);


	system("pause");
}
*/

int main()
{
	int i = 3, j = 5;
	int *p, *q;
	p = &i;
	q = &j;
	
	if (p == &i)
	{
		printf("Numero do p: %d\n", p);
	}
	
	system("pause");
}



