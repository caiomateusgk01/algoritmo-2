/* 27. Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais.
Considerando que alguém está pagando uma compra, escreva um algoritmo que
mostre o número mínimo de notas que o caixa deve fornecer como troco. Mostre
também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota do
troco. Suponha que o sistema monetário não utilize moedas.
*/
#include "pch.h"
#include <iostream>

int main()
{
    int nota01 = 0, nota10 = 0, nota100 = 0;
	int troco , dinheiroCliente , valorCompra;

	printf("Forneca o valor da compra: ");
	scanf_s("%i", &valorCompra);

	printf("Forneca o valor do dinheiro do cliente: ");
	scanf_s("%i", &dinheiroCliente);

	 troco = dinheiroCliente - valorCompra;

	if (troco < 10) {
		nota01 = (troco % 10);

	}
	else if (troco >= 10 && troco < 100) {
		nota10 = (troco % 100) / 100;	
	}
	else if (troco >= 100) {
		nota100 = (troco % 100) /100;
	}

	printf("Quanto foi dado pelo cliente: %i\n" ,dinheiroCliente);
	printf("Quanto foi gasto: %i\n", valorCompra);

	printf("TROCO: ");
	printf("Notas de 1: %i\n " ,nota01);
	printf("Notas de 10: %i\n " ,nota10);
	printf("Notas de 100: %i\n " ,nota100);
	printf("Troco:  %i\n ",troco);

	system("pause");
	return 0;
}




