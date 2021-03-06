// exercicio_39.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo de
algumas pessoas. Com os dados cadastrados, em seguida localizar uma pessoas
através do seu CPF e imprimir o seu IMC.
*/

#include "pch.h"
#include <iostream>

using namespace std;

typedef struct pessoas
{
	char nome[10];
	float altura;
	int peso;
	long long cpf;
	char sexo;

};

int main()
{
	int i = 0;
	int qt = 0;
	int cont;
	long long busca;
	float imc;

	printf("### Cadastro pessoal ### \n");
	printf("Digite a quantidade de pessoas a serem cadastradas: ");
	cin >> qt;

	pessoas usuario[100];

	for (i = 0; i < qt; i++)
	{
		printf("Digite seu nome: ");
		cin >> usuario[i].nome;

		printf("Digite sua altura: ");
		cin >> usuario[i].altura;

		printf("digite seu peso: ");
		cin >> usuario[i].peso;


		printf("Digite seu CPF: ");
		cin >> usuario[i].cpf;

		printf("Digite M - Masculino e F - Feminino : ");
		cin >> usuario[i].sexo;

		printf("Cadastro realizado \n");
		system("Pause");
		system("cls");

	}
	printf("Digite o CPF que deseja procurar: ");
	cin >> busca;

	for (i = 0; i < 100; i++)
	{
		if (busca == usuario[i].cpf)
		{
			imc = usuario[i].peso / pow(usuario[i].altura, 2);
			cont = i;
			break;
			system("cls");
		}

	}
	printf("### Dados do usuario ### \n");
	printf("###   Nome: %s\n", usuario[cont].nome);
	printf("### Altura: %.2f\n", usuario[cont].altura);
	printf("###   Peso: %i\n", usuario[cont].peso);
	printf("###    CPF: %lld\n", usuario[cont].cpf);
	printf("###   Sexo: %c\n", usuario[cont].sexo);
	printf("###    imc: %.3f\n", imc);

	system("Pause");
	return 0;
}
