#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main()
{
	
	//Variáveis
	float dias, salario;
	
	printf("Calcular o salario do encanador\n");
	printf("Digite o total de dias trabalhados: ");
	scanf("%f", &dias);
	
	salario = (dias * 35) * 0.92 ;

	printf("\nSalario total do encanador: %fR$ ", salario);
	
	getch();
	return 0;
	
	//Entrada
	
	//Processamento
	
	//Saída
}
