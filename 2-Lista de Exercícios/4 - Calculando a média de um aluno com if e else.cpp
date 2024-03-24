#include<stdio.h>
#include<stdlib.h>


int main()
{

	float nota1, nota2, media, falta;
	
	//Entrada
	
	printf("Calculando a media do aluno com if e else\n");
	printf("Digite o valor das notas da primeira prova e da segunda prova: ");
	scanf("%f %f", &nota1, &nota2);
	
	//Processamento e saída 
	
	media = (nota1 + nota2) / 2;
	
	if(media < 5) //Comparação
	{
		falta = 5 - media;
		printf("Falta(m) %.2f ponto(s) para atingir a media 5! \n", falta);
		
	}
	
	else 
	{
		printf("Voce foi aprovado com media %.2f -> Parabens!\n", media);

	}
	
}
