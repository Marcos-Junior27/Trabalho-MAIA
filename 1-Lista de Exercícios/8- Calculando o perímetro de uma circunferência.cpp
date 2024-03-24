#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

#define PI 3.14159

int main()
{
	
	//Variáveis
	float raio, perimetro;
	
	printf("Calcular o perimetro de uma circunferencia\n");
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	
	perimetro = 2 * PI * raio;

	printf("\nValor do perimetro: %f", perimetro);
	
	getch();
	return 0;
	
	//Entrada
	
	//Processamento
	
	//Saída
}
