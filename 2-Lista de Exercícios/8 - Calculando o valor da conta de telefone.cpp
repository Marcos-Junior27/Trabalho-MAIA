#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main()
{

	float minutos, gasto;
	
	//Entrada
	
	printf("Receber quantos minutos foram gastos no mes e calcular o valor da conta\n");
	printf("Digite o valor de minutos usados: ");
	scanf("%f", &minutos);
	
	//Processamento e saída 
	
	if(minutos <= 50) //Comparação
	{
		gasto = 50;
		printf("O valor a ser pago do plano sera:  %fR$ \n", gasto);
		
	}
	
	else 
	{
		
		gasto = ((minutos - 50) * 1.50) + 50;
		printf("O valor a ser pago do plano  com os adicionais sera:  %fR$ \n", gasto);
	}
	
	getch();
	return 0;
	
}
