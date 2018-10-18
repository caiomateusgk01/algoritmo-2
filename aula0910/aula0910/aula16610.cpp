// Aula1610.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>


int main()
{


	// Condicionais
	//Operadores logicos
	// == -> igual
	// ! -> diferente
	// <  menor
	// > maior
	// <= menor igual 
	// >= maior igual 

	//condicao

	// operador lógico sempre entre 2 operandos
	// resultado da operacao pode ser apenas (true/false)
	//conectores logicos 
	// "e"- &&
	// "ou" - || (pipe pipe) 

	// SE

	// if(true)

	// este codigo sera executado

	// if(false)

	// este codigo nao sera executado

	int a = 0;
	if (a == 0)
	{
		printf("a igual a zero \n");

	}

	if (a != 0)
	{
		printf("a diferente de zero\n");
	}

	int b = 5;
	if (b < a)
	{
		printf("B menor que A");
	}
	if (a <= b)
	{
		printf("A monor que B");
	}
	if (a == b)
	{
		printf("sao iguais");
	}
	else
	{
		printf("sao diferentes");
	}
}

