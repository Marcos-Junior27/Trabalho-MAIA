#include<stdio.h>
#include<stdlib.h>


int main()
{

	float num, den, resultado;
	
	//Entrada
	
	printf("Divisao com if e else\n");
	printf("Digite o valor do numerador e do denominador: ");
	scanf("%f %f", &num, &den);
	
	//Processamento e sa�da 
	
	if(den != 0) //Compara��o
	{
		resultado = num / den;
		printf("Resultado = %.2f \n", resultado);
		
	}
	
	else 
	{
		printf("Nao \x82 possivel dividir por zero!\n");

	}
	
}
