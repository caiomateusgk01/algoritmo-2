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
	//if ((a >= b) && (a >= c) && (a >= d))
		//return a;
}
float media(float a, float b, float c, float d)
{
	float soma = a + b + c + d;
	float media = soma / 4;
	return media;
}

void imprevaloresmaiorquemedia(int a, int b, int c, int d, float media)
{
	printf("os valores mais que a media sao: ");

	if (a > media)
	{
		printf("%i\n", a);
	}
	if (b > media)
	{
		printf("%i\n", b);
	}
	if (c > media)
	{
		printf("%i\n", c);
	}
	if (d > media)
	{
		printf("%i\n", d);
	}
}


int quatronumeros()
{
	int primeiro = lernumerointeiro();
	int segundo = lernumerointeiro();
	int terceiro = lernumerointeiro();
	int quarto = lernumerointeiro();
	int m = maiorvalorinteiro(primeiro,segundo,terceiro,quarto);

	float mediavalores = media((float)primeiro, (float)segundo, (float)terceiro, (float)quarto);
	printf("a media dos valores digitados eh: %f\n",(float)mediavalores);
	imprevaloresmaiorquemedia(primeiro, segundo, terceiro, quarto, mediavalores);



	system("pause");

}






