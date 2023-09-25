#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Autor: Pedro Portales
*/

void notaDe10Alunos(){
    /* Elabore um algoritmo que calcule a média de 2 notas de 10 alunos */
    int i;
    float nota1, nota2;

    printf("\n\n");

    for(i = 0; i < 10; i++){
        printf("Digite a 1ª nota do %dº aluno: ", i+1);
        scanf("%f", &nota1);
        printf("Digite a 2ª nota do %dº aluno: ", i+1);
        scanf("%f", &nota2);
            
        if ( (nota1 + nota2) / 2 >= 7 ){
            printf("APROVADO!\n");
        } else{ printf("REPROVADO!\n"); }
    }

    printf("\n\n");
    
}

void ParOuImpar(){
    /* Elabore um algoritmo que leia 20 números e verifique se é par
    ou ímpar */

    int i, num;

    printf("\n\n");

    for(i = 0; i < 20; i++){
        printf("Digite a %dª número: ", i+1);
        scanf("%d", &num);
        
        if ( num % 2 == 0 ){
            printf("Par\n");
        } else{ printf("Ímpar\n"); }
    }

    printf("\n\n");
}

void maiorOuMenor18(){
    /* Faça um algoritmo que receba a idade de 75 pessoas e mostre mensagem
    informando “maior de idade” e “menor de idade” para cada pessoa.
    Considere a idade a partir de 18 anos como maior de idade. */

    int i, idade;

    printf("\n\n");

    for(i = 0; i < 75; i++){
        printf("Digite a idade da %dª pessoa: ", i+1);
        scanf("%d", &idade);

        if(idade >= 18){
            printf("Maior de idade!\n");
        } else { printf("Menor de idade!\n"); }
       
    }

    printf("\n\n");

}

void PositivoNegativo(){
    /* Faça um algoritmo que receba “20” números e mostre positivo, negativo
    ou zero para cada número. */

    int i, num;

    printf("\n\n");

    for(i = 0; i < 20; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &num);

        if(num > 0){
            printf("Positivo!\n");
        } else if (num == 0) {
            printf("Neutro!\n");
        } else if (num < 0) {
            printf("Negativo!\n");
        }

       
    }

    printf("\n\n");
}

void idadeAnoNascimento(){
    /* Elabore um programa em C que leia o ano de nascimento de 20 pessoas e 
    diga se é maior de idade ou menor de idade */

    int i, anoAtual, anoNasc, idade;
    time_t data_ano;
    time(&data_ano);
  
    struct tm *data = localtime(&data_ano);

    anoAtual = (data->tm_year+1900);

    printf("\n\n");

    for(i = 0; i < 20; i++){
        printf("Digite o ano de nascimento da %dª pessoa: ", i+1);
        scanf("%d", &anoNasc);

        idade = anoAtual - anoNasc;

        if( idade >= 18){
            printf("Maior de idade!\n");
        } else { printf("Menor de idade!\n"); }
       
    }

    printf("\n\n");
}

void idade50pessoas(){
    /* Elabore um programa em C que leia a idade de 50 pessoas e diga
    quantos são maiores de idade. */

    int i, idade, maiorIdade = 0, menorIdade = 0;

    printf("\n\n");

    for(i = 0; i < 50; i++){
        printf("Digite a idade da %dª pessoa: ", i+1);
        scanf("%d", &idade);

        if(idade >= 18){
            maiorIdade++;
        } else { menorIdade++; }
       
    }

    printf("Maiores de idade: %d\n", maiorIdade);
    printf("Menores de idade: %d\n", menorIdade);

    printf("\n\n");
}

void ParOuImpar15Valores(){
    /* Elabore um programa em C que leia 15 valores inteiros e no final mostre
    a soma dos pares e a quantidade dos ímpares */    

    int num, impar, somaDosPares = 0;

    printf("\n\n");

    for(int i = 0; i < 15; i++){
        printf("Digite o %dª número: ", i+1);
        scanf("%d", &num);
        
        if ( num % 2 == 0 ){
            somaDosPares += num;
        } else{ impar++; }
    }

    printf("A soma dos valores pares é igual a: %d\n", somaDosPares);
    printf("A quantidade de ímpares foi: %d\n", impar);

    printf("\n\n");

}

int main(void){
    int i;
    
    while(i != 8){
        printf("----- MENU -----\n");
        printf("(1) Calcular a média de 2 notas de 10 alunos\n");
        printf("(2) Par ou ímpar de 20 números\n");
        printf("(3) Maior ou menor de idade de 75 pessoas\n");
        printf("(4) Positivo ou Negativo de 20 números\n");
        printf("(5) Idade a partir do ano de nascimento\n");
        printf("(6) Maiores de idade de 50 pessoas\n");
        printf("(7) Soma dos pares e quantidade dos impares\n");
        printf("(8) Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &i);

        switch(i){
            case 1:
                notaDe10Alunos();
                break;
            case 2:
                ParOuImpar();
                break;
            case 3:
                maiorOuMenor18();
                break;
            case 4:
                PositivoNegativo();
                break;
            case 5:
                idadeAnoNascimento();
                break;
            case 6:
                idade50pessoas();
                break;
            case 7:
                ParOuImpar15Valores();
                break;
            case 8:
                printf("Fechando programa...\n");
                break;
            default:
                printf("Valor inválido. Tente novamente\n\n");
        }
    }

    return 0;
}
