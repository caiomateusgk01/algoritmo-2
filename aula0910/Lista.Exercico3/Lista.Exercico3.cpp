// Lista.Exercico3.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include  < math.h >

void  calc(int anos)
{
	int mes;
	int dia;

	mes = (anos * 12);
	dia = (mes * 30);

	printf("Voce tem %i anos,%i meses e %i dias de vida \n ", anos, mes, dia);
	system("pause");

}


int  main()
{
	int idade;

	printf("Favor digitar sua idade em anos:\n");
	scanf_s("%i",&idade);

	calc(idade);
}
