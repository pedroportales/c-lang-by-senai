#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <windows.h>
#define TAM 3

/*
Elabore um programa em C que possua uma estrutura de aluno com (caracteres)nome, 
(inteiro)idade e (caracter)sexo, sendo vetor de 10 posições (Criação de 10 alunos).
Utilizando funções resolva as seguintes questões:

a) Crie uma função que mostre a quantidade de alunos existentes no vetor que as idades sejam maiores que 10 (Utilizar return)
b) Crie uma função de nome MENOR que retorne o Aluno(nome, idade e sexo) com a menor idade existente no vetor (Utilizar return)
c) Crie uma função que mostre os Alunos(nome, idade e sexo) com idades pares e impares existentes no vetor
d) Crie uma função que receba um número (inteiro) vindo do main() e retorne quantos Alunos(nome, idade e sexo) existentes no vetor são maiores que esse número (Utilizar return)
*/

struct Aluno{
    char nome[100];
    int idade;
    char sexo;
};

struct Aluno aluno[TAM];

void cadastrarAlunos(struct Aluno aluno[]){ // Função para preencher o vetor
    for (int i = 0; i < TAM; i++){
        setbuf(stdin, NULL);
        printf("\n---- %dº ALUNO ----\n", i+1);
        printf("Digite o nome do %dº aluno: ", i+1);
        fgets(aluno[i].nome, 100, stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = 0;
        printf("Insira a idade do aluno: ");
        scanf("%d", &aluno[i].idade);
        printf("Insira o sexo do aluno (M/F): ");
        scanf(" %c", &aluno[i].sexo);
        //system("cls");
        system("clear");
    }

    printf("\n");
}

int maioresQue10(struct Aluno aluno[]){
    int qtd = 0;

    for(int i = 0; i < TAM; i++){
        if(aluno[i].idade > 10){
            qtd++;
        }
    }

    return qtd;
}

int menor(struct Aluno aluno[]){
    int menorIdade = 1000;
    int indice;

    for (int i = 0; i < TAM; i++){
        if (aluno[i].idade < menorIdade){
            indice = i;
            menorIdade = aluno[i].idade;
        }
    }

    return indice;
}

void parImpar(struct Aluno aluno[]){
    printf("\n---- ALUNOS COM IDADE PAR ----\n\n");
    for (int i = 0; i < TAM; i++){ 
        if (aluno[i].idade % 2 == 0){
            printf("---- %dº aluno ----\n", i+1);
            printf("Nome: %s\n", aluno[i].nome);
            printf("Idade: %d\n", aluno[i].idade);
            printf("Sexo: %c\n\n", aluno[i].sexo);    
        }
    }

    printf("---- ALUNOS COM IDADE ÍMPAR ----\n\n");

    for (int i = 0; i < TAM; i++){ 
        if (aluno[i].idade % 2 != 0){
            printf("---- %dº aluno ----\n", i+1);
            printf("Nome: %s\n", aluno[i].nome);
            printf("Idade: %d\n", aluno[i].idade);
            printf("Sexo: %c\n\n", aluno[i].sexo);    
        }
    }
}

int maiorQueNum(struct Aluno aluno[], int num){
    int qtdMaiorQueNum = 0;

    for (int i = 0; i < TAM; i++){ 
        if (aluno[i].idade > num){
            qtdMaiorQueNum++;
        }
    }

    return qtdMaiorQueNum;
}

int main(){
    int id, option, numero;

    for (int i = 0; i < TAM; i++){ // Inicializando vetores da estrutura
        strcpy(aluno[i].nome, "NULL");
        aluno[i].idade = 0;
        aluno[i].sexo = '0';
    }

    cadastrarAlunos(aluno);
    printf("%d aluno com idade maior que 10\n", maioresQue10(aluno));
    printf("O aluno mais novo é %s\n", aluno[menor(aluno)].nome);
    parImpar(aluno);
    printf("Insira um número inteiro: ");
    scanf("%d", &numero);
    printf("A quantidade de alunos com idade maior que o número dito são: %d\n\n", maiorQueNum(aluno, numero));
}
