#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define qtdProf 2
#define qtdDisc 2
#define qtdAlunos 5
#define qtdTurma 2

int contA = 0;

typedef struct{
	char nome[50];
	int idade;
	float nota1, nota2;
	float media;
}Aluno;

typedef struct{
	char nome[50];
	char titulacao[50];
	int idade;
	float salario;
}Professor;

typedef struct{
	char nome[50];
	int cargaHoraria;
}Disciplina;

typedef struct{
	Professor professores[qtdProf];
	Aluno alunos[qtdAlunos];
	Disciplina disciplina[4];
}Turma;

Aluno listaAlunos1[10];
Professor professores[2];
Disciplina disciplina[qtdDisc];
Turma turma[qtdTurma];

void limpaTela(){
	system("sleep 1");
	system("clear");	
}

void cadastrarAluno(Aluno a[]){
	contA++;
	for(int i = 0; i < qtdAlunos; i++){
		printf("Digite o Nome do %dº professor: ",i+1);
		fgets(a[i].nome,50,stdin);
		printf("Digite a idade: ");
		scanf("%d", &a[i].idade);
		printf("Digite 1º nota: ");
		scanf("%f",&a[i].nota1);
		printf("Digite 2º nota: ");
		scanf("%f",&a[i].nota2);
		a[i].media = (a[i].nota1 + a[i].nota2) / 2 ;
		fflush(stdin);
	}
}

void cadastrarProfessor(Professor p[]){
	contA++;
	for(int i = 0; i < qtdProf; i++){
		printf("Digite o Nome do %dº Aluno: ",i+1);
		fgets(p[i].nome,50,stdin);
		printf("Digite a titulação do %dº professor: ",i+1);
		fgets(p[i].nome,50,stdin);
		printf("Digite a idade: ");
		scanf("%d", &p[i].idade);
		printf("Digite o salário: ");
		scanf("%f",&p[i].salario);
		setbuf(stdin, NULL);
	}
}

void cadastrarDisciplina(Disciplina d[]){
	contA++;
	for(int i = 0; i < qtdDisc; i++){
		printf("Digite o Nome da %dª disciplina: ",i+1);
		fgets(d[i].nome,50,stdin);
		printf("Digite a carga horária: ");
		scanf("%d", &d[i].cargaHoraria);
		setbuf(stdin, NULL);
	}
}

/*void cadastrarTurma(Turma t[]){
	contA++;
	for(int i = 0; i < qtdDisc; i++){
		printf("Digite o Nome do professor da %dª disciplina: ",i+1);
		fgets(t[i].nome,50,stdin);
		printf("Digite a carga horária: ");
		scanf("%d", &t[i].cargaHoraria);
		setbuf(stdin, NULL);
	}
} */

void listarAlunos(Aluno a[]){
	if(contA == 0){
		printf("Os Alunos n�o foram cadastrados!\n");
		limpaTela();
	}else{
		for(int i = 0; i < qtdAlunos; i++){
			printf("Nome: %s",a[i].nome);
			printf("Idade: %d\n",a[i].idade);
			printf("1ª nota: %.1f\n",a[i].nota1);
			printf("2ª nota: %.1f\n",a[i].nota2);
			a[i].media >= 7 ? printf("Média %.1f\tAluno Aprovado!\n",a[i].media) : printf("Média %.1f\tAluno Reprovado!\n",a[i].media);
			printf("\n===========================================\n\n");
		}
	}
}

void listarProfessores(Professor p[]){
	if(contA == 0){
		printf("Os Professores não foram cadastrados!\n");
		limpaTela();
	}else{
		for(int i = 0; i < qtdProf; i++){
			printf("Nome: %s",p[i].nome);
			printf("Idade: %d\n",p[i].idade);
			printf("Salário: %.1f\n",p[i].salario);
			printf("\n===========================================\n\n");
		}
	}
}

void listarDisciplinas(Disciplina d[]){
	if(contA == 0){
		printf("As Disciplinas não foram cadastradas!\n");
		limpaTela();
	}else{
		for(int i = 0; i < qtdDisc; i++){
			printf("Nome: %s",d[i].nome);
			printf("Carga horária: %d\n",d[i].cargaHoraria);
			printf("\n===========================================\n\n");
		}
	}
}

void buscarNome(Aluno a[]){
	char nome[50];
	if(contA == 0){
		printf("Os Alunos não foram cadastrados!\n");
		limpaTela();
	}else{
		printf("Digite o nome que deseja consultar: ");
		fgets(nome,50,stdin);
		for(int i = 0; i < qtdAlunos; i++){
			if(strcasecmp(a[i].nome, nome) == 0){
				printf("Pessoa Encontrada na posi��o %d\n",i);
				printf("Nome: %s",a[i].nome);
				printf("Idade: %d\n",a[i].idade);
				printf("1ª nota: %.1f\n",a[i].nota1);
				printf("2ª nota: %.1f\n",a[i].nota2);
				a[i].media >= 7 ? printf("Média %.1f\tAluno Aprovado!\n",a[i].media) : printf("Média %.1f\tAluno Reprovado!\n",a[i].media);
				printf("\n===========================================\n\n");
			}
		}
	}
	setbuf(stdin, NULL);
}

void somar(int a, int b){
	
}

void inicializar(){
	printf("Inicializando o SISCAD. \n");
	system("sleep 1");
	system("clear");	
	printf("Inicializando o SISCAD.. \n");
	system("sleep 1");
	system("clear");	
	printf("Inicializando o SISCAD... \n");
	system("sleep 1");
	system("clear");
	}

void menu(){
	int op;
	inicializar();

	do{
		printf("============== BEM VINDO AO SISTEMA ACADEMICO ================\n");
		printf("Escolha a Opção:\n1: Cadastrar Alunos\n2: Cadastrar Professor\n3: Cadastrar Disciplina\n4: Cadastrar Turma\n5: Listar Alunos\n6: Listar Professor\n7: Buscar por Nome\n8: Limpar Tela\n0: SAIR\n");
		scanf("%d", &op);
		setbuf(stdin, NULL);

		switch(op){
			case 1:
				cadastrarAluno(listaAlunos1);
				break;
			case 2:
				cadastrarProfessor(professores);
				break;
			case 3:
				cadastrarDisciplina(disciplina);
				break;				
			case 4:
			
				break;				
			case 5:
				listarAlunos(listaAlunos1);
				break;
			case 6:
				listarProfessores(professores);
				break;
			case 7:
				buscarNome(listaAlunos1);
				break;
			case 8:
				limpaTela();
				break;
			case 0:
				printf("Good Bye!\n");
				break;
			default:
				printf("Opção Inválida,\tDigite novamente!");	
				system("sleep 1");
				system("cls");	
		}
	}while(op!=0);
}

int main(){
	
	menu();

}
