/*25. Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto do
trabalhador como contribuição à previdência social. Após esse desconto, há um
outro desconto de 5% sobre o valor restante do salário bruto, a título de um
determinado imposto. Faça um algoritmo que leia o salário bruto de um cidadão e
imprima o seu salário líquido.
*/

#include "stdafx.h"
#include <iostream>


int main()
{
   float salario, ps , des, sl;
	printf("Informe seu salario:");
	scanf_s("%f", &salario);

	des = (float)salario * (float)(10.0f/100.0f);
	sl = salario - des - (float)(0,05.0f/100.0f);


	printf("Seu salario liquido e: %.2f\n",sl);

	system("pause");
	return 0;


}

