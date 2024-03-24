#include<stdio.h>
#include<stdlib.h>


int main()
{

	float n1, n2;
	
	//Entrada
	
	printf("Receber dois numeros e mostrar o maior deles \n");
	printf("Digite dois numeros: ");
	scanf("%f %f", &n1, &n2);
	
	//Processamento e saída 
	
	if(n1 < n2) //Comparação
	{
		printf("O numero dois \x82 maior que o numero um \n");
		
	}
	
	else 
	{
		printf("O numero um \x82 maior que o numero dois \n");

	}
	
}
