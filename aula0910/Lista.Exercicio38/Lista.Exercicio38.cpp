/* 38. Escreva uma função que receba um número inteiro que representa um intervalo de
tempo medido em minutos e devolva o correspondente número de horas e minutos
(por exemplo, converte 131 minutos em 2 horas e 11 minutos). Use uma struct como
a seguinte:
struct hm {
int horas;
int minutos;
};
*/

#include "pch.h"
#include <iostream>
#include <stdlib.h>

struct hm {
	int horas;
	int minutos;
};


int main()
{
	hm w;
	int x, y;
	printf("informe  os minutos: \n");
	scanf_s("%i", &w.minutos);
	y = w.minutos / 60;
	x = w.minutos % 60;
	printf("Horas : %i\n", y); 
	printf("Minutos : %i\n", x);

	system("pause");
	return 0;
}

