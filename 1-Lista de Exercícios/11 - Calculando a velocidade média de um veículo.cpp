#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main()
{
	
	//Variáveis
	float distancia, tempo, media;
	
	printf("Calcular a velocidade media de um veículo\n");
	printf("Digite a distancia percorrida: ");
	scanf("%f", &distancia);
	printf("Digite o tempo gasto no percurso: ");
	scanf("%f", &tempo);
	
	media = distancia / tempo;

	printf("\nA velocidade media do veiculo: %fkm/h", media);
	
	getch();
	return 0;
	
	//Entrada
	
	//Processamento
	
	//Saída
}
