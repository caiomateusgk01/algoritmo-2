/*35. Foi realizada uma pesquisa de algumas características físicas da população de uma
certa região, a qual coletou os seguintes dados referentes a cada habitante para
serem analisados :
-idade
- sexo(masculino e feminino)
- cor dos olhos(1 - azuis, 2 - verdes ou 3 - castanhos)
- cor dos cabelos(1 - louros, 2 - castanhos, 3 - pretos)

Faça um algoritmo que determine e escreva:

- a maior idade dos habitantes
- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos
-inclusive e que tenham olhos verdes e cabelos louros.

*/

#include "stdafx.h"
#include <iostream>


int main()
{
	int idade=0,midade=0, i, vet[3], nh, sexo, olhos;
	int corcabelo,quantf=0;
	

	printf("Informe quantos habitantes:\n");
	scanf_s("%i", &nh);

	for (i = 0; i <= nh; i++) {
		printf("Informe sua idade:");
		scanf_s("%i", &idade);

		printf("Informe seu sexo \n 1 - femino \n 2 - masculino");
		scanf_s("%i", &sexo);

		printf("Informe a cor dos seus olhos\n 1 - azuis \n 2 - verdes \n 3 - castanhos:");
		scanf_s("%i", &olhos);

		printf("Informe a cor dos seu cabelo\n 1 - louros \n 2 - castanhos \n 3 - pretos ");
		scanf_s("%i", &corcabelo);

		if (midade < idade ) {
			midade = idade;
		}
		else if ((sexo == 1) && (idade >= 18) && (idade <=35) && (olhos == 2) && (corcabelo == 1)) {
			quantf = quantf +1;

		}
		
	}
	printf("A maior idade dos habitantes: %i\n", midade);
	printf("a quantidade de individuos do sexo feminino cuja idade esta entre 18 e 35 anos: %i\n", quantf);

	system("pause");
	return 0;

		
}

