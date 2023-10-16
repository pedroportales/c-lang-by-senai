#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
Elabore um programa em C que possua uma estrutura com os seguintes campos:
    * nome
    * idade
    * sexo
    * altura

e armazene em um vetor de 5 posições
*/

struct Pessoa{
    char nome[50];
    int idade;
    char sexo;
    float altura;
};

struct Pessoa pessoa[5];

void adicionarPessoas(){ // Função para preencher o vetor
    for (int i = 0; i < 5; i++){ 
        printf("Digite o nome da %dª pessoa: ", i+1);
        fgets(pessoa[i].nome, sizeof(pessoa[i].nome), stdin);
        pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = 0;
        printf("Insira a idade da pessoa: ");
        scanf("%d", &pessoa[i].idade);
        printf("Insira o sexo da pessoa (M/F): ");
        scanf(" %c", &pessoa[i].sexo);
        printf("Insira a altura da pessoa: ");
        scanf("%f", &pessoa[i].altura);
        setbuf(stdin, NULL);

        printf("\n\n");
    }
}

void imprimirDados(){
    for (int i = 0; i < 5; i++){ 
        printf("---- %dª pessoa ----\n", i+1);
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Idade: %d\n", pessoa[i].idade);
        printf("Sexo: %c\n", pessoa[i].sexo);
        printf("Altura: %.2f\n\n", pessoa[i].altura);
    }
}

void mediaAlturas(){
    float soma = 0.0;

    for (int i = 0; i < 5; i++){ 
        soma += pessoa[i].altura;
    }

    printf("A média das alturas é: %.2f\n\n", soma / 5);
}

void maioresDeIdade(){
    for (int i = 0; i < 5; i++){ 
        if (pessoa[i].idade >= 18){
            printf("---- %dª pessoa ----\n", i+1);
            printf("Nome: %s\n", pessoa[i].nome);
            printf("Idade: %d\n", pessoa[i].idade);
            printf("Sexo: %c\n", pessoa[i].sexo);
            printf("Altura: %f\n\n", pessoa[i].altura);
        }
    }
}

void pessoaMaisNova(){
    int indice, maisNova = pessoa[4].idade;
    
    for (int i = 0; i < 5; i++){ 
        if (pessoa[i].idade < maisNova){
            maisNova = pessoa[i].idade;
            indice = i;
        }
    }

    printf("%s\n\n", pessoa[indice].nome);
}

void procurarPessoa(){
    char name[50];
    bool encontrado;

    printf("Insira o nome a ser procurado: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    for (int i = 0; i < 5; i++){ 
        if (name == pessoa[i].nome){
            printf("---- %dª pessoa ----\n", i+1);
            printf("Nome: %s\n", pessoa[i].nome);
            printf("Idade: %d\n", pessoa[i].idade);
            printf("Sexo: %c\n", pessoa[i].sexo);
            printf("Altura: %f\n\n", pessoa[i].altura);
        }
    }

}

int main(void){
    int option;

    for (int i = 0; i < 5; i++){ // Inicializando vetores da estrutura
        strcpy(pessoa[i].nome, "NULL");
        pessoa[i].idade = 0;
        pessoa[i].sexo = '0';
        pessoa[i].altura = 0.0;
    }

    

    while(option != 7){
        printf("---- MENU ----\n");
        printf("(1) Inserir dados\n");
        printf("(2) Imprimir dados\n");
        printf("(3) Média das alturas cadastradas\n");
        printf("(4) Maiores de idade\n");
        printf("(5) Pessoa mais nova\n");
        printf("(6) Procurar pessoa\n");
        printf("(7) Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &option);
        setbuf(stdin, NULL);

        switch(option){
            case 1:
                adicionarPessoas();
                break;
            case 2:
                imprimirDados();
                break;
            case 3:
                mediaAlturas();
                break;
            case 4:
                maioresDeIdade();
                break;
            case 5:
                pessoaMaisNova();
                break;
            case 6:
                procurarPessoa();
                break;
            case 7:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida... Tente novamente!\n\n");
            
        }
    }

    return 0;
}
