#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main()
{

	float n1, n2, aux;
	
	//Entrada
	
	printf("Receber dois numeros e os apresente em ordem crescente \n");
	printf("Digite dois numeros: ");
	scanf("%f %f", &n1, &n2);
	
	//Processamento e saída 
	
	if(n1 > n2) //Comparação
	{
		aux = n2;
		n2 = n1;
		n1 = aux;
		
	}
	
	else 
	{
		printf("Os numeros em ordem crescente: %.2f - %.2f. \n", n1, n2);

	}
	
	getch();
	return 0;
	
}
