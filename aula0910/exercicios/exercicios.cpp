// exercicios.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>


int lernumerointeiro()
{
	int a;

	printf("Informe cinco numeros de tipo inteiro\n");
	scanf_s("%i\n", &a);
	return a;
}

void detectavaloresemordem()
{
	int i = 0; //interator
	int anterior = 0, numero = 0;
	int crescente = 1; // 1 eh crescente

	while (i < 5)
	{
		numero = lernumerointeiro();

		if (i == 0)
		{
			anterior = numero;
		}
		else
		{
			if (anterior < numero)
			{
				crescente = 0;
			}

		}

		anterior = numero;
		i++;
	}
	if (crescente == 1)
	{
		printf("ordem crescente\n");
	}
	else
	{
		printf("Nao estavam em ordem crescente\n");
	}
	system("pause");

}

int main()
{
	detectavaloresemordem();
}



/*
{
int i, n, num, ultimo_num, crescente = 1;

printf("Quantos numeros voce ira digitar?");
scanf_s("%d", &n);

for (i = 0; i < n; ++i) {
	printf("Digite o numero:");
	scanf_s("%d", &num);

	if (i != 0 && ultimo_num >= num) {
		crescente = 0;
	}
	ultimo_num = num;
}

if (crescente == 1) {
	printf("Ordem crescente");
}
else {
	printf("Numeros digitados nao estao em ordem crescente\n");
}
system("pause");
return 0;
}
*/


/*
int main()
{

	int a, b, c, d;
	int va = 0;
	printf("Digite 5 numeros:\n");
	scanf_s("%i%i%i%i\n", &a, &b, &c, &d);
	while (va <= 5)
		va++;
		  if (va > a) {
		}
	if (va > b) {
	
	}
	if (va > c) {

	}
	if (va > d) {

	}

	printf("%d %d %d %d %d %d\n", a, b, c, d);
	system("pause");

	}

*/


