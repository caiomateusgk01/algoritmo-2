
/*1. Faça um programa que lê três palavras do teclado e imprime as três palavras na ordem
inversa.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	char palavras[3][30];
	//captura palavras
	for (i = 0; i < 3; i++) {
		printf("Informe palavra %d: ", i + 1);
		gets(palavras[i]);
	}
	//EXIBE EM ORDEM INVERSA
	printf("\n::: Palavras em ordem inversa :::\n");
	for (i = 2; i >= 0; i--)
		printf("%s\n", palavras[i]);
	return 0;
}
/*
2. Faça um programa que lê duas palavras do teclado e diz se elas são iguais ou diferentes.O
programa deve dizer ainda se alguma das palavras digitadas é igual a “papagaio”.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	char p1[30], p2[30];
	//captura palavras
	printf("Informe palavra 1: ");
	gets(p1);
	printf("Informe palavra 2: ");
	gets(p2);
	//verifica se sao iguais
	if (strcmp(p1, p2) == 0)
		printf("\nPalavras sao iguais.");
	if (strcmp(p1, "papagaio") == 0)
		printf("\nPalavra 1 igual papagaio.");
	if (strcmp(p2, "papagaio") == 0)
		printf("\nPalavra 2 igual papagaio.");
	return 0;
}
/*
3. Faça um programa que cria um vetor com 5 elementos inteiros, lê 5 números do teclado,
armazena os números no vetor e imprime o vetor na ordem inversa.
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, v[5];
	//captura os elementos
	for (i = 0; i < 5; i++) {
		printf("Elemento[%d]= ", i);
		scanf("%d", &v[i]);
	}
	//EXIBIR VALORES ORIGINAIS
	printf("\n::: Valores originais :::\n");
	for (i = 0; i < 5; i++)
		printf("%d\n", v[i]);
	//EXIBIR VALORES ORIGINAIS
	printf("\n::: Valores na ordem inversa :::\n");
	for (i = 4; i >= 0; i--)
		printf("%d\n", v[i]);
	return 0;
}
/*
4. Faça um programa que lê uma matriz de 3 x 3 elementos usando um comando for,
multiplica cada elemento por 5 e imprime o resultado.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, m[3][3];
	//captura os elementos
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) {
			printf("Elemento[%d][%d]= ", i, j);
			scanf("%d", &m[i][j]);
		}
	//EXIBIR VALORES ORIGINAIS
	printf("\n::: Valores Originais :::\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", m[i][j]);
		printf("\n");
	}
	//multiplica por 5
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			m[i][j] = m[i][j] * 5;
	//EXIBIR VALORES MULTIPICADOS
	printf("\n::: Valores Multiplicados por 5:::\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", m[i][j]);
		printf("\n");
	}
	return 0;
}
/*
5. Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos.Em
seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, m[3][3], v[3];
	//captura os elementos do vetor
	printf("::: Informe os elementos do vetor :::\n");
	for (i = 0; i < 3; i++) {
		printf("Elemento[%d]= ", i);
		scanf("%d", &v[i]);
	}
	//captura os elementos da matriz
	printf("::: Informe os elementos da matriz :::\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) {
			printf("Elemento[%d][%d]= ", i, j);
			scanf("%d", &m[i][j]);
		}
	//exibe valores originais
	printf("\n::: Valores Originais do Vetor :::\n");
	for (i = 0; i < 3; i++)
		printf("%d ", v[i]);
	printf("\n::: Valores Originais da Matriz :::\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", m[i][j]);
		printf("\n");
	}
	//multiplica vetor pelas colunas da matriz
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			m[i][j] = v[i] * m[i][j];
	//exibe valores multiplicados
	printf("\n::: Valores Multiplicados :::\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", m[i][j]);
		printf("\n");
	}
	return 0;
}
