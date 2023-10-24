#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota;
} aluno;

void preencherAluno(){
    
    setbuf(stdin, NULL);
    
    while (true){
        printf("Insira o número de matrícula do aluno: ");
        scanf("%d", &aluno.matricula);

        if (aluno.nota < 0) {
            printf("Valor inválido! Insira um valor positivo para a matrícula!\n");
            system("sleep 3");
            system("clear");
        } else {
            system("clear");
            break;
        }
    }

    setbuf(stdin, NULL);
    printf("Insira o nome do aluno: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = 0; // Remover o \n no final da string
    system("clear");

    while (true) {
        printf("Insira a nota do aluno: ");
        scanf("%f", &aluno.nota);

        if (aluno.nota < 0 || aluno.nota > 10) {
            printf("Valor inválido! Insira um valor entre 0 e 10!\n");
            system("sleep 3");
            system("clear");
        } else {
            system("clear");
            break;
            
        }
    }
}

void exibirAluno(){
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Nome: %s\n", aluno.nome);
    printf("Nota: %.1f\n\n", aluno.nota);
}

int main(){
    int opt; // Opção do menu

    while (opt != 3) {
        setbuf(stdin, NULL);
        printf("---- MENU ----\n");
        printf("1. Inserir dados de um aluno\n");
        printf("2. Exibir os dados de um aluno\n");
        printf("3. Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opt);
        system("clear");

        switch (opt) {
            case 1:
                preencherAluno();
                break;
            
            case 2:
                exibirAluno();
                break;

            case 3:
                printf("Saindo do programa...\n");
                break;
            
            default:
                printf("Opção inválida! Tente novamente!\n");
                system("sleep 3");
                system("clear");
        }
    }
}
