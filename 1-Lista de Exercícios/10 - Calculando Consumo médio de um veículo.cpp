#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main()
{
	
	//Variáveis
	float km, litros, media;
	
	printf("Calcular o consumo medio de combustivel de um veiculo\n");
	printf("Digite a distancia percorrida: ");
	scanf("%f", &km);
	printf("Digite a quantidade de combustivel gasto: ");
	scanf("%f", &litros);
	
	media = km / litros;

	printf("\nConsumo medio do veiculo: %fkm/litros", media);
	
	getch();
	return 0;
	
	//Entrada
	
	//Processamento
	
	//Saída
}
