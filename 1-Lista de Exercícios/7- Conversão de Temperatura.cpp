#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
	
	//Variáveis
	float fahrenheit, celsius;
	
	printf("Conversao de Temperatura\n");
	printf("Digite uma temperatura em fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32) / 1.8;

	printf("\nConversao para celsius: %fgrausc", celsius);
	
	getch();
	return 0;
	
	//Entrada
	
	//Processamento
	
	//Saída
}
