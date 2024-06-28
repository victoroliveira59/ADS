#include <stdio.h>

char nome_aluno[50];
float nota1, nota2;

int main(){
	
	printf("C�lculo da M�dia Final. Informe o Nome e notas do aluno com precis�o de 0,1 (1 d�cimo). P.e. 5,5; 6,5; 7,1 \n\n\n");
	printf("Informe o Nome...................: ");
	scanf("%s", nome_aluno);
	printf("\nInforme a Nota 1.................: ");
	scanf("%f", &nota1);
	printf("\nInforme a Nota 2.................: ");
	scanf("%f", &nota2);
	printf("A M�dia final do aluno %s �.....: %f", nome_aluno, (nota1 + nota2)/2);
	
}

