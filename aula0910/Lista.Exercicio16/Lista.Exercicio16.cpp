/* 16. Faça uma função que retorne a posição de um dado caracter dentro de uma string.
*/

#include "pch.h"
#include <iostream>

int main() {
	char caio[] = "arara";
	char x = 'a';


	for (int i = 0; i < sizeof(caio); i++)
	{
		if (caio[i] == x) {
			printf("Posicao: %i\n", i);
		}

	}
	printf("%c\n", x);

	return 0;
	system("pause");

}
