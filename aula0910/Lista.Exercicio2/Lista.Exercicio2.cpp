// Lista.Exercicio2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
# include  < math.h >

/*
Escreva um algoritmo que agrade aos três números inteiros e positivos(A, B, C) e calcule a
seguinte expressão :
R = (A + B) ^ 2
S = (B + C) ^ 2
D = (R + S) / 2
*/
void  calc(int a, int b, int c)

{
	int r;
	int s;
	int d;

	r = pow(a + b, 2);
	s = pow(b + c, 2);
	d = ((r + s) / 2);

	printf("O resultado de D e: %i\n",d);
	system("pause");
}

int  main()
{
	int a;
	int b;
	int c;

	printf("Para resolver \n R = (A + B) ^ 2   \n S = (B + C) ^ 2   \n   D = (R + S) / 2 \n ");
	printf(" Digite valor de A: \n");
	scanf_s("%i",&a);
	printf("Digite valor de B: \n");
	scanf_s("%i",&b);
	printf("Digite valor de C: \n");
	scanf_s("%i",&c);

	system("cls");
	calc(a, b, c);

}