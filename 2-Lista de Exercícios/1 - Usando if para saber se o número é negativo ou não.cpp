#include<stdio.h>
#include<stdlib.h>

//Receber um n�mero e informar se ele � negativo ou n�o � negativo.

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
