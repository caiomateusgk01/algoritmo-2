/* Ler a idade de 10 pessoas e imprimir quantas são maiores de idade.
*/

#include "pch.h"
#include <iostream>
#include <stdio.h>

/*using namespace std;

//Declaracao do registro
struct mbc {
	char nome[35];
	int telefone;
	int agenda[15];
}agenda[15];
//Funcao Principal
void main() 
{
	mbc agenda[100];
	int op, i = 0, alt;
	do {
		system("cls");//limpar tela
		printf("\nMenu de Opcoes");
		printf("\n1 - Cadastrar um num");
		printf("\n2 - Visualizar");
		printf("\n3 - Alterar");
		printf("\n4 - Sair");
		printf("\nDigite sua opcao: ");
		cin >> op;
		if (op == 1) {
			printf("\nInforme nome: ");
			cin >> agenda[i].nome;
			printf("\nInforme telefone: ");
			cin >> agenda[i].telefone;
			i++;
		}
		if (op == 2) {
			for (i = 0; i < 15; i++) {
				printf("\nNome: %s", agenda[i].nome);
				printf("\nTelefone: %d", agenda[i].telefone);
				printf("\n---------------------------------");
			}
		}
			
		if (op == 3) {
			printf("\nInforme codigo que deseja alterar:");
			cin >> alt;
			printf("\nNome: %s", agenda[alt].nome);
			printf("\nInforme NOVO nome: ");
			cin >>  agenda[alt].nome;
			printf("\nTelefone: %d", agenda[alt].telefone);
			printf("\nInforme NOVO telefone: ");
			cin >> agenda[alt].telefone;
		}
		if(op == 4){
	
			printf("\nOpcao invalida");
		}
	} while (op != 4);
	system("pause");
}

*/

// ConsoleApplication42.cpp : define o ponto de entrada para o aplicativo do console.
//

/*
using namespace std;

int main()
{
	int i = 0, altera, qnt;
	int qt = 0;
	int cont;
	long long busca;
	float imc;

	printf("Digite quantos usuarios deseja inserir. \n");
	cin >> qnt;

	typedef struct
	{
		char nome[30];
		float altura;
		long long cpf;
		char sexo;
		char hora[6];

	}pessoas;

	pessoas usuario[100];

	for (i = 0; i < qnt; i++)
	{

		printf("Digite o nome da pessoa: ");
		cin >> usuario[i].nome;

		printf("Digite o cpf da pessoa: ");
		cin >> usuario[i].cpf;

		printf("Digite a altura da pessoa: ");
		cin >> usuario[i].altura;

		printf("Digite a hora da consulta: ");
		cin >> usuario[i].hora;

		printf("\n");
	}

	printf("Digite o CPF que deseja procurar. \n");
	cin >> busca;

	for (i = 0; i < qnt; i++)
	{
		if (busca == usuario[i].cpf)
		{
			cont = i;
			break;
			system("cls");
		}

	}
	printf("Dados do usuario \n");
	printf("Nome: %s\n", usuario[cont].nome);
	printf("Altura: %.2f\n", usuario[cont].altura);
	printf("CPF: %lld\n", usuario[cont].cpf);
	printf("Hora: %s\n", usuario[cont].hora);
	printf("\n");

	printf("Deseja alterar o horario | 1 - sim | 2 - nao | \n");
	cin >> altera;

	printf("\n");

	if (altera == 1)
	{
		printf("Digite o novo horario. \n");
		cin >> usuario[cont].hora;

		printf("Digite o CPF que deseja procurar. \n");
		cin >> busca;

		for (i = 0; i < qnt; i++)
		{
			if (busca == usuario[i].cpf)
			{
				cont = i;
				break;
				system("cls");
			}

		}

		printf("Dados do usuario \n");
		printf("Nome: %s\n", usuario[cont].nome);
		printf("Altura: %.2f\n", usuario[cont].altura);
		printf("CPF: %lld\n", usuario[cont].cpf);
		printf("Hora: %s\n", usuario[cont].hora);
	}

	system("PAUSE");
	return 0;
}

*/
/* using namespace std;

int main()
{
	int matriz[3][3];
	int i, j,calc;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Digite o valor da linha %i da coluna %i: ", i + 1, j + 1);
			cin >> matriz[i][j];
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("MATRIZ: %i \t", matriz[i][j]);
			if (i == j && j == i) {
				calc = matriz[i][j] * 5;
			}
		}
		printf("\n");
	}

	printf("Valor da matriz diagonal principal multiplicada e: %i \n", calc);



	system("Pause");
	return 0;
}
*/

/*
using namespace std;

int main()
{
	int i, num[10], valor_inv, count = 0, valor_min = 0, valor_max = 0;
	float ma = 0;

	for (i = 0; i < 10; i++)
	{
		printf("Digite o valor %i. \n", i + 1);
		cin >> num[i];

		if (num[i] > valor_max)
		{
			valor_max = num[i];
		}

		if (num[i] < valor_min)
		{
			valor_min = num[i];
		}
	}

	printf("\n");

	for (i = 0; i < 10; i++)
	{
		printf("%i \t", num[i]);

		ma = (ma + num[i]);
	}

	printf("\n");

	for (i = 9; i >= 0; i--)
	{
		printf("%i \t", num[i]);
	}

	printf("\n");

	for (i = 0; i < 9; i++)
	{
		if (num[i] % 2 != 0)
		{
			valor_inv = num[i] * -1;
			printf(" Numeros impares e inversos %i \t", valor_inv);
		}
	}

	printf("\n");

	printf("Media Aritimetica dos valores: %.1f \n", ma / 10);
	printf("Maior Valor: %i \n", valor_max);
	printf("Maior Valor: %i \n", valor_min);

	printf("\n");

	system("PAUSE");
	return 0;
}

*/
using namespace std;

int main()
{
	int a, b, c, s, p;

	printf("Digite o valor de A. \n");
	cin >> a;

	printf("Digite o valor de b. \n");
	cin >> b;

	printf("Digite o valor de c. \n");
	cin >> c;

	if (a < 1 || b < 1 || c < 1)
	{
		printf("Valores invalidos. \n");
	}
	else
	{
		p = ((a + b + c) / 2);

		s = (sqrt(p*(p - a)*(p - b)*(p - c)));

		printf("Area do triangulo e de: %i. \n", s, p);
	}

	system("PAUSE");
	return 0;
}
