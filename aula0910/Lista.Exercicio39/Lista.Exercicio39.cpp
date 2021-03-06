/* 39. Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo de
algumas pessoas. Com os dados cadastrados, em seguida localizar uma pessoas
através do seu CPF e imprimir o seu IMC.
*/

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

typedef struct
{
	char nome[50];
	long altura;
	float peso;
	int cpf;
	char sexo;
} imc;

int main()
{
	imc imcs[50];
	int code;
	int op, i = 0, j = 0, IMC, h, DIM = 0, teste;
	char H, M;
INICIO:
	printf(" PROGRAMA IMC ");
	printf("\n\n Deseja cadastrar pessoa? | < 1 > SIM | < 2 >  NAO |\n");
	cin >> op;
	switch (op)
	{
	case 1: {goto CADASTRAR; }
	case 2: {goto SAIR; }
	}
	for (;; i++)
	{
	REFAZ: system("cls");
		printf("\n\n Deseja continuar cadastros? | < 1 > |");
		printf("\n Consultar?                  | < 2 > |");
		printf("\n SAIR                        | < 3 > |\n");
		cin >> op;
		switch (op) {
		case 1: {goto CADASTRAR; }
		case 2: {goto CONSULTAR; }
		case 3: {goto SAIR; }
		}

	CADASTRAR: i = i + 1; DIM = i;

		printf("\n NOME da primeira pessoa: \t", i);     
		cin >> imcs[i].nome;
		printf("\n ALTURA da %io pessoa: \t", i);   
		cin >> imcs[i].altura;
		printf("\n PESO da %io pessoa: \t", i);    
		cin >> imcs[i].peso;
		printf("\n CPF da %io pessoa: \t", i);      
		cin >> imcs[i].cpf;
	CONSULTAR:
		printf("\n SEXO da %io pessoa: \t", i);
		printf("\n < 1 - HOMEM > | < 2 - MULHER > ");
		cin >> op;
		switch (op)
		{
		case 1:
			goto CONSULTARH;
		case 2:
			goto CONSULTARM;
		}
		system("cls");
		for (j = 1; j <= DIM; j++) {
			printf("\n Codigo %i: - %i", j, imcs[j].cpf);
		}
		goto REFAZ;
	}

CONSULTARH:
	printf("\n Digite o CPF para calcular o IMC\t");
	cin >> code;
	for (j = 1; j <= DIM; j++) {
		if (code == imcs[j].cpf)
		{
			h = ((imcs[i].altura / 100) ^ 2);
			IMC = imcs[j].peso / h;
			if (IMC < 20.7) { goto ABAIXO; }
			if ((IMC > 20.8) && (IMC < 26.4)) { goto NORMAL; }
			if ((IMC > 26.5) && (IMC < 27.8)) { goto ACIMA; }
			if ((IMC > 27.9) && (IMC < 31.1)) { goto SOBREPESO; }
			if (IMC > 31, 1) { goto OBESO; }
			goto INICIO;
		}
		if (code != imcs[j].cpf)
		{
			printf("\n >> CPF INVALIDO! <<");
			system("cls");
			goto CONSULTARH;
		}
	}
CONSULTARM:
	printf("\n Digite o CPF para calcular o IMC\t");
	cin >> code;
	for (j = 1; j <= DIM; j++) {
		if (code == imcs[j].cpf)
		{
			h = ((imcs[i].altura / 100) ^ 2);
			IMC = imcs[j].peso / h;
			if (IMC < 19.1) { goto ABAIXO; }
			if ((IMC > 19.1) && (IMC <= 25.8)) { goto NORMAL; }
			if ((IMC > 25.8) && (IMC <= 27.3)) { goto ACIMA; }
			if ((IMC > 27.3) && (IMC <= 32.2)) { goto SOBREPESO; }
			if (IMC > 32.2) { goto OBESO; }
			goto INICIO;
		}
		if (code != imcs[j].cpf)
		{
			printf("\n >> CPF INVALIDO! <<");
			system("cls");
			goto CONSULTARM;
		}
	}
ABAIXO: printf("\n O IMC eh: %.2f", imcs[j].peso / h);
	printf("\n ABAIXO DO PESO");
	
	goto REFAZ;
NORMAL: printf("\n O IMC eh: %.2f", imcs[j].peso / h);
	printf("\n PESO NORMAL");
	
	goto REFAZ;
ACIMA:  printf("\n O IMC eh: %.2f", imcs[j].peso / h);
	printf("\n ACIMA DO PESO");
	
	goto REFAZ;
SOBREPESO: printf("\n O IMC eh: %.2f", imcs[j].peso / h);
	printf("\n ATENÇÃO SOBREPESO!!");

	goto REFAZ;
OBESO: printf("\n O IMC eh: %.2f", imcs[j].peso / h);
	printf("\n CUIDADO, RISCO DE INFARTO");
	goto REFAZ;
SAIR: return 0;
}

