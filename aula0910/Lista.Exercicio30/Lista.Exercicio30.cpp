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
	
		int n, c, m,k;

		printf("Informe um numero de 2 a 20:");
		scanf_s("%i", &n);

		for (c = 0; c < n; c++) {
			k = 1;

			for (m = 0; m < n; m++) {
				if (c > m) {
					printf("X");

				}
				else {
					printf("%i", k);
					k=k+1;
				}

			}
			printf("\n");
				
			
			
		}

			
		printf("\n");
		system("pause");
		return 0;

	

}
