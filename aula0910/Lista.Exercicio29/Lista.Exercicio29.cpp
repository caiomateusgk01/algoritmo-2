/* 29. Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados
de um triângulo, e se forem, verificar se é um triângulo equilátero, isóscele ou
escaleno. Se eles não formarem um triângulo, escrever uma mensagem.
Antes da elaboração do algoritmo, torna-se necessário a revisão de algumas
propriedades e definições.

Propriedade – o comprimento de cada lado de um triângulo é menor do que a soma
dos comprimentos dos outros dois lados.
Definição 1 - chama-se de triângulo equilátero o que tem os comprimentos dos três
lados iguais;
Definição 2 - chama-se de triângulo isóscele o triângulo que tem os comprimentos
de dois lados iguais;
Definição 3 - chama-se triângulo escaleno o triângulo que tem os comprimentos dos
três lados diferentes.
*/

#include "pch.h"
#include <iostream>


void triangulo()
{
	int x, z, y;
	printf("Informe tres valores:\n");
	scanf_s("%i%i%i", &x, &z, &y);


	if (x == z && z == y) {
		printf("Triangulo equilatero\n");
	}
	else if (x != z && z == y)  {
		printf("Triangulo isoscele\n");
	}
	else if (x != z && z !=y) {
		printf("Triangulo escanelo\n");
	}
	else {
		printf("Nao e um triangulo");
	}
}


int main()
{
	triangulo();
}


