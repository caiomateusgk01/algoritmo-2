/* Ler a idade de 10 pessoas e imprimir quantas são maiores de idade.
*/

#include "pch.h"
#include <iostream>
#include <stdio.h>

//Declaracao do registro
struct {
	char nome[35];
	int telefone;
	int agenda[15];
}agenda[15];
//Funcao Principal
void main() 
{
	struct agenda;
	int op, i = 0, alt;
	do {
		system("cls");//limpar tela
		printf("\nMenu de Opcoes");
		printf("\n1 - Cadastrar um num");
		printf("\n2 - Visualizar");
		printf("\n3 - Alterar");
		printf("\n4 - Sair");
		printf("\nDigite sua opcao: ");
		scanf_s("%d", &op);
		switch (op) {
		case 1:
			printf("\nInforme nome: ");
			scanf_s("%s", &agenda[i].nome);
			printf("\nInforme telefone: ");
			scanf_s("%d", &agenda[i].telefone);
			i++;
			break;
		case 2:
			for (i = 0; i < 15; i++) {
				printf("\nNome: %s", agenda[i].nome);
				printf("\nTelefone: %d", agenda[i].telefone);
				printf("\n---------------------------------");
			}
			
			break;
		case 3:
			printf("\nInforme codigo que deseja alterar:");
			scanf_s("%d", &alt);
			printf("\nNome: %s", agenda[alt].nome);
			printf("\nInforme NOVO nome: ");
			scanf_s("%s", agenda[alt].nome);
			printf("\nTelefone: %d", agenda[alt].telefone);
			printf("\nInforme NOVO telefone: ");
			scanf_s("%d", &agenda[alt].telefone);
			break;
		case 4:
			break;
		default:
			printf("\nOpcao invalida");
			break;
		}
	} while (op != 4);
	system("pause");
}