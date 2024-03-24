#include <stdio.h>
#include<stdlib.h>
#include <conio.h>

int main()
{
	
	//Variáveis
	float num1, num2, media;
	
	printf("Digite dois numero: ");
	scanf("%f %f", &num1, &num2);
	
	media=(num1+num2)/2;
	
	
	printf("\n Media calculada entre %.2f e %.2f \x82 %.2f", num1, num2, media);



	getch();
	return 0;
	
	//Entrada
	
	//Processamento
	
	//Saída
}
