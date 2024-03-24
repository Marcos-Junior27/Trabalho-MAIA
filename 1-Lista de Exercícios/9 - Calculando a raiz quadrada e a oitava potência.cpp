#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main()
{
	
	//Variáveis
	float num1, resultado1, resultado2;
	
	printf("Calcular a raiz quadrada e sua oitava potencia\n");
	printf("Digite um numero: ");
	scanf("%f", &num1);
	
	resultado1 = sqrt(num1);
	resultado2 = pow(num1, 8);

	printf("\nResultado da raiz quadrada: %f", resultado1);
	printf("\nResultado da oitava potencia: %f", resultado2);
	
	getch();
	return 0;
	
	//Entrada
	
	//Processamento
	
	//Saída
}
