// aula0910.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
 // Variaveis globais
int a; // inteiro
float b; // real (6 casas decimais)
double c; // real (10 casas decimais)




int aula()
{
	// Variaveis locais
	char d; //caractere  (pouca precisao)
	bool e; // real (grande precisao) (true/false)

	printf("Ola mundo!\n");

	printf("Teste\t\tTeste\n\n");
	printf("A\tB\tC\tD\n");
	printf("A\tB\tC\tD\n");
	printf("A\tB\tC\tD\n");
	printf("Mostrando o valor %i \n", 5);
	printf("A soma de %i e %i eh: %i \n", 99, 10, 99+10);
	printf("Mostrando %.2f, que eh um numero real \n", 4.3);
	printf("Olha soh este numero: %i\n\n\n"); //erro

	int f;
	f = 8;
	a = f * 2;
	printf("Resultado da multiplicacao de %i por 2 eh: %i\n", f, a);
	scanf_s("%i", &a); // NÃO PULA LINHA, COMANDO DE LEITURA, NAO DE IMPRESSAO
	printf("\n\nValor digitado foi: %i\n\n", a); // (\n) para pular linha 

	printf("Digite o valor real:\n");
	scanf_s("%f", &b);

	printf("\n Voce digitou: %.2f\n\n", b);

	system("pause");
	return b;
}

