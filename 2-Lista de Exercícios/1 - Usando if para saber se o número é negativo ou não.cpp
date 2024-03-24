#include<stdio.h>
#include<stdlib.h>

//Receber um número e informar se ele é negativo ou não é negativo.

int main()
{

	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	if(num < 0)
	{
		printf("O numero %i \x82 negativo!\n", num);
		
	}
	
	else 
	{
		printf("O numero %i nao \x82 negativo!\n", num);

	}
	
}
