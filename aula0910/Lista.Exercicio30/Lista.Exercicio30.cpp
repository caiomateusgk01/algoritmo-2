/* 30. Crie um programa que leia um número entre 2 e 20 e gere uma tela com a seguinte
configuração:
Digite um número:
7
Saida do programa:
1234567
x123456
xx12345
xxx1235
xxxx123
xxxxx12
xxxxxx1
*/

#include "pch.h"
#include <iostream>

int main()
{
	
		int n, c, m;

		printf("Informe um numero de 2 a 20:");
		scanf_s("%i", &n);

		for (c = 1; c <= n; c++) {
			for (m = 1; m <= c; m++)
				printf("%i", m);
			printf("\n");
			
		}

		for (c = c - 2; c > 0; c--) {
			for (m = 1; m <= c; m++)
				printf("%i", m);
			printf("\n");
			
		}
		printf("\n");
		return 0;
		system("pause");
	

}
