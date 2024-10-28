#include <stdio.h>

struct ficha_aluno
{
	char nome[40];
	int id;
	float nota;
};

struct ficha_aluno aluno;

int main(){
	
	printf("\n---------- Cadastro de aluno ----------\n\n\n");
	
	printf("Nome do aluno: ");
	fgets(aluno.nome, 40, stdin);
	
	printf("Digite o id do aluno: ");
	scanf("%d", &aluno.id);
	
	printf("Nota do aluno: ");
	scanf("%f", &aluno.nota);
	
	
	printf("\n---------- Leitura dos dados ----------\n\n\n");
	printf("Nome do aluno: %s", aluno.nome);
	printf("Id do aluno: %d\n", aluno.id);
	printf("Nota do aluno: %.2f\n", aluno.nota);

	return 0;
}

/*int main(){
	char aluno1[30];
	
	strcpy(aluno1, "Pedro, o gato");  
	
	printf("%s", aluno1);
	return 0;
	
	}*/
