#include <stdio.h>
#include <string.h>

/*
Desenvolva um algoritmo em C que:

1. Contenha uma struct de Aluno (nome, nota1, nota2, media)
2. Crie um vetor da struct Aluno com 10 posições.
3. Crie 4 funções:
 * Adicionar os 10 alunos com nome, nota1, nota2 a media será 
 calculado automaticamente pelo seu algoritmo.
 * Listar todos os Alunos
 * Listar Alunos Aprovados (media >= 7)
 * Listar Reprovados (media<7)

*/

struct Aluno{ // Estrutura Aluno
    char nome[50];
    float nota1;
    float nota2;
    float media;
};

struct Aluno alunos[10]; // Nomeando vetor da estrutura

void novosAlunos(){
    for (int i = 0; i < 10; i++){
        printf("Digite o nome do %dº aluno(a): ", i+1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin); // Ler uma linha de entrada
        //alunos[i].nome[strcspn(alunos[i].nome, "\n")] = 0;
        printf("Digite a 1º nota do(a) aluno(a): ");
        scanf("%f", &alunos[i].nota1);
        printf("Digite a 2º nota do(a) aluno(a): ");
        scanf("%f", &alunos[i].nota2);
        setbuf(stdin, NULL);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;

        printf("\n\n");
    }
}

void listarAlunos(){
    for (int i = 0; i < 10; i++){
        printf("---- %d ALUNO ----\n", i+1);
        printf("Nome do aluno: %s\n", alunos[i].nome);
        printf("Nota 1: %.2f\n", alunos[i].nota1);
        printf("Nota 2: %.2f\n", alunos[i].nota2);
        printf("Média: %.2f\n\n", alunos[i].media);
    }
}

void listarAprovados(){
    for (int i = 0; i < 10; i++){
        if (alunos[i].media >= 7){
            printf("%s foi aprovado(a)\n", alunos[i].nome);
        }
    }
}

void listarReprovados(){
    for (int i = 0; i < 10; i++){
        if (alunos[i].media < 7){
            printf("%s foi reprovado(a)\n", alunos[i].nome);
        }
    }
}

int main(void){
    for (int i = 0; i < 10; i++){
        strcpy(alunos[i].nome, "NULL");
        alunos[i].nota1 = 0.0;
        alunos[i].nota2 = 0.0;
        alunos[i].media = 0.0;
    }

    novosAlunos();
    listarAlunos();
    listarAprovados();
    listarReprovados();

    return 0;

}
