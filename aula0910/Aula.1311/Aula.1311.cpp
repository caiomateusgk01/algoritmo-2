// Aula.1311.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <locale.h>
#include <iostream>



void troca(float *a,float *b)
{
	float c = *a;
	*a = *b;
	*b = c;



}

int main()
{
	float d = 5, e = 6;
	float *x, *y;
	x = &d;
	y = &e;

	*x = 2;
		* y = 3;
		printf(" endereco de X : %p\n", &x);
		printf(" endereco de Y : %p\n", &y);
		printf("x-%2.f\n y- %2.f\n", *x, *y);
		troca(x, y);
		printf("x- %2.f\n y- %2.f\n", *x, *y);
		system("pause");
}

