#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main()
{

	int ano;
	
	//Entrada
	
	printf("Receber um ano e informar se este ano for bissexto\n");
	printf("Digite um ano: ");
	scanf("%i", &ano);
	
	//Processamento e saída 
	
	if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) //Comparação
	{
		
		printf("Ano Bissexto \n");
		
	}
	
	else 
	{
		
		printf("Ano Nao-Bissexto \n");
		
	}
	
	getch();
	return 0;
	
}
