/*32. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
dados sobre o salário e número de filhos. A prefeitura deseja saber:
● a) média do salário da população;
● b) média do número de filhos;
● c) maior salário;
● d) percentual de pessoas com salário até R$100,00.
*/

#include "pch.h"
#include <iostream>


int main ()
{


int populacao, filhos, totalfilhos = 0, i, y = 1;
float salario, totalsal = 0, mediasal, mediafilhos, maiorsal = 0, percsal;

printf("Qual a populacao da cidade..: ");
scanf_s("%i", &populacao);

for (i = 1; i <= populacao; i++) {
	printf("\nQual o seu salario.........: R$ ");
	scanf_s("%f", &salario);
	printf("\nQual a quantia de filhos...: ");
	scanf_s("%i", &filhos);

	
	totalsal = salario + totalsal;
	
	totalfilhos = totalfilhos + filhos;
	
	if (maiorsal < salario) {
		maiorsal = salario;
	}
	if (salario <= 100) {
		percsal = (y * 100) / populacao;
		y++;
	}
}

mediasal = totalsal / populacao;

mediafilhos = totalfilhos / populacao;

printf("\nA media do salario da populacao eh R$ %.2f \n", mediasal);
printf("\nA media do numero dos filhos e: %.2f \n", mediafilhos);
printf("\nO maior salario e: R$ %.2f \n", maiorsal);
printf("\nA percentagem das pessoas com salarios ate R$ 100,00 e: %.2f \n", percsal);


	system("pause");
	return 0;
}


