#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

//Receber um n�mero e informar se ele � negativo, positivo ou nulo.

int main()
{

	int num;
	
	//Entrada
	
	printf("Receber um numero e informar se ele e positivo, negativo ou nulo \n");
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	//Processamento e sa�da 
	
	if(num > 0)	//Compara��o
	{
		
		printf("O numero %i \x82 positivo!\n", num);
		
	}
	
	else if(num < 0)	
	{
		
		printf("O numero %i \x82 negativo!\n", num);
		
	}
	
	else  
	{
		
		printf("O numero %i \x82 nulo!\n", num);

	}
	
	getch();
	return 0;
	
}
