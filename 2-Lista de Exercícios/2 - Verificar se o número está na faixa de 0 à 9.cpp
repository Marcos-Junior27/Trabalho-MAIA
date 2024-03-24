#include<stdio.h>
#include<stdlib.h>


int main()
{

	int num;
	
	printf("Verificar se o numero ele esta na faixa de 0 a 9 \n");
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	if(num >= 0 && num <= 9)
	{
		printf("O numero %i esta na faixa!\n", num);
		
	}
	
	else 
	{
		printf("O numero %i nao se encontra na faixa!\n", num);

	}
	
}
