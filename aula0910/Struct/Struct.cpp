// Struct.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>


struct Funcionario
{
	char nome[20];
	int cpf[11];
	int data[10];
	int nasc[10];
	int salario[8];
	
   
};

void LerDadosCarro()
{
	struct Funcionario func[5];
	int i=0;


	for (i = 0; i <= 5; i++) {

		printf("Digite o seu nome:");
		fgets(func[i].nome, 20, stdin);

		printf("Digite seu cpf:");
		scanf_s("%i", &func[i].cpf);

		printf("Digite a data:");
		scanf_s("%i", &func[i].data);

		printf("Digite seu nascimento:");
		scanf_s("%i", &func[i].nasc);

		printf("Digite seu salario:");
		scanf_s("%i", &func[i].salario);

		system("pause");
	}

	
}

int main()
{
	LerDadosCarro();
	
	
}

