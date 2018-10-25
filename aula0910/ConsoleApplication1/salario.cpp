// teste.cpp : define o ponto de entrada para o aplicativo do console.
//


#include "stdafx.h"
#include <iostream>


double lersalario()
{
	float  salario;

	printf("Informe seu salario:\n");
	float salario = 0;
	scanf_s("%f", &salario);
	return salario;

}

double calcularir(double salario, double aliquota, double deducao)
{
	return (salario * aliquota) - deducao;
}
void apresentar(double salario)
{
	double ir = 0;
	if (salario <= 1903.98)
	{
		printf("Isento");
	}
	else if (salario <= 2826.65)
	{
		ir = calcularir(salario, 0.075, 142.8);
		printf("Aliquota: 7.5%%,deducao: 142.8\n");
		printf("Valor IR: %f\n", ir);
		printf("Sobrou: %2f\n", salario - ir);
	}
	else if (salario <= 3751.05)
	{
		ir = calcularir(salario, 0.15, 354.8);
		printf("Aliquota: 15%%,deducao: 354.8\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %2f\n", salario - ir);
	}
	else if (salario <= 4664.68)
	{
		ir = calcularir(salario, 0.225, 636.13);
		printf("Aliquota: 22.5%%,deducao: 636.13\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %2f\n", salario - ir);
	}
	else
	{
		ir = calcularir(salario, 0.275, 869.36);
		printf("Aliquota: 27.5%%,deducao: 869.36\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %2f\n", salario - ir);
	}

}
 

int main()
{
double salario = lersalario();
apresentar(salario);
printf("\n\n");
system("pause");

	imprimirmenu();

}

void imprimirmenu()
{
	printf("========================\n");
	printf("== Escolha uma opçcao ==\n");
	printf("== 1 - a ==\n");
	printf("== 2 - b ==\n");
	printf("== 3 - c ==\n");
	printf("========================\n");


	int opcao = 0;
	scanf_s("%i", &opcao);


	switch (opcao)

	{
	case 1:
	    {
		printf("Escolheu a opcao A");
		}
		break;		
	case 2:
	    {
		printf("Escolheu a opcao B");
		}
		break;
	case 3:
	    {
		printf("Escolheu a opcao C");
		}
		break;

	}
	system("pause");
}
