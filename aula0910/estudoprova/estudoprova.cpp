/* Ler a idade de 10 pessoas e imprimir quantas são maiores de idade.
*/

#include "pch.h"
#include <iostream>
#include <stdio.h>

using namespace std;

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