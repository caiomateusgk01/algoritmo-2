/* 28. A revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores
dois salários mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro vendido e
mais 5% do valor das vendas. Faça um algoritmo que determine o salário total de
um vendedor.
*/

#include "pch.h"
#include <iostream>

int salario(int com, int cv)
{
	int salario,total,tp;
	printf("Informeu seu salario:\n");
	scanf_s("%i", &salario);

	total = salario +  50;
	tp = total *  0.05;
	total = tp + total;
	
	
	 
	return total;
}

int main()
{
	int com=0, cv=0;
	int tot = salario(com, cv);

	printf("Salario total: %i\n", tot);

	system("pause");
	return 0;
}


