#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main()
{

	float salario, aumento;
	
	//Entrada
	
	printf("Calcule aumento de salario no ano corrente\n");
	printf("Digite o valor do salario: ");
	scanf("%f", &salario);
	
	//Processamento e saída 
	
	if(salario <= 1000) //Comparação
	{
		
		aumento = salario + (salario * 0.05);
		printf("O seu salario tera um aumento de 5 porcento:  %f \n", aumento);
		
	}
	
	else 
	{
		
		aumento = salario + (salario * 0.07);
		printf("O seu salario tera um aumento de 7 porcento:  %f \n", aumento);
	}
	
	getch();
	return 0;
	
}
