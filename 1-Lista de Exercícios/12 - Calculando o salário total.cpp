#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main()
{
	
	//Vari�veis
	float normal, extra, total;
	
	printf("Calcular o salario \n");
	printf("Digite o total de horas normais trabalhadas: ");
	scanf("%f", &normal);
	printf("Digite o total de horas extras trabalhadas: ");
	scanf("%f", &extra);
	
	total = (normal * 10) + (extra * 15);

	printf("\nSalario total: %fR$ ", total);
	
	getch();
	return 0;
	
	//Entrada
	
	//Processamento
	
	//Sa�da
}
