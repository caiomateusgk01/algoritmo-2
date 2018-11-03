// ExerciciosEstudo.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
# include  < math.h >


/*Construa um algoritmo que tem como base de dados dois pontos
plano, P(x1, y1) e P(x2, y2), escreva a distância entre eles.Uma fórmula que efetua o calculo é
raiz(((x2 - x1) ^ 2) + ((y2 - y1) ^ 2))*/



int  plano(float x1, float x2, float y2, float y1)

{
	float resultado;

	resultado = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	return resultado;
}

int  main()
{
	float x1;
	float x2;
	float y1;
	float y2;

	printf("Camara de valores para raiz (((x2 - x1) ^ 2) + ((y2 - y1) ^ 2)) \n" );
	printf("Digite valor de x1 \n ");
	scanf_s("%f",&x1);
	printf("Digite valor de x2 \n");
	scanf_s("%f",&x2);
	printf("Digite valor de y1 \n");
	scanf_s("%f",&y1);
	printf("Digite valor de y2 \n");
	scanf_s("%f",&y2);

	float resultado = plano(x1, x2, y1, y2);
	printf("raiz (((x2-x1) ^ 2) + ((y2-y1) ^ 2)) = %.1f \n ", resultado);

	system("pause");
	return  0;
}

