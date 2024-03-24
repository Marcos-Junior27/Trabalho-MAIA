#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main()
{
	
	//Variáveis
	float notat1, notat2, notap1, notap2, notatotal;
	
	printf("Calculando a nota total de um aluno\n");
	printf("Digite as notas das duas provas teoricas: ");
	scanf("%f %f", &notat1, &notat2);
	printf("Digite as notas das duas provas praticas: ");
	scanf("%f %f", &notap1, &notap2);
	
	notatotal = (((notat1 + notat2) / 2) * 0.60) + (((notap1 + notap2) / 2) * 0.40);

	printf("\nA nota do aluno \x82: %.4f ", notatotal);
	
	getch();
	return 0;
	
	//Entrada
	
	//Processamento
	
	//Saída
}
