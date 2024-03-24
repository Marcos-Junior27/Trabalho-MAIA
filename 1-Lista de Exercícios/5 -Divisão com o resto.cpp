#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	
	//Variáveis
	int n1, n2, div, rest;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &n1);
	printf("Digite o segundo numero: ");
	scanf("%i", &n2);
	
	div=n1/n2;
	rest=n1%n2; //resto da divisao de inteiros
	
	printf("\n Divisao = %i", div);
	printf("\n Resto = %i", rest);


	getch();
	return 0;
	
	//Entrada
	
	//Processamento
	
	//Saída
}
