#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
	
	//Variáveis
	float base, altura, area;
	
	printf("Digite o valor da base do triangulo: ");
	scanf("%f", &base);
	printf("Digite o valor da altura do triangulo: ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;

	
	printf("\n Area do triangulo: %f", area);
	


	getch();
	return 0;
	
	//Entrada
	
	//Processamento
	
	//Saída
}
